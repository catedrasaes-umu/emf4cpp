package org.csu.cpp.output;

import java.util.HashMap;
import java.util.Map;

import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.eclipse.cdt.core.ToolFactory;
import org.eclipse.cdt.core.formatter.CodeFormatter;
import org.eclipse.jface.text.BadLocationException;
import org.eclipse.jface.text.Document;
import org.eclipse.jface.text.IDocument;
import org.eclipse.text.edits.MalformedTreeException;
import org.eclipse.text.edits.TextEdit;
import org.eclipse.xpand2.output.FileHandle;
import org.eclipse.xpand2.output.PostProcessor;

public class CppBeautifier implements PostProcessor {

	/** Logger instance. */
	private final Log log = LogFactory.getLog(getClass());

	/** Singleton code formatter instance. */
	private CodeFormatter codeFormatter;

	/**
	 * Formats the file using Eclipse CDT code formatter. The file must have the
	 * extension '*.cpp' or '*.hpp'.
	 */
	public void beforeWriteAndClose(final FileHandle info) {
		if (info.getAbsolutePath().endsWith("pp")) {

			IDocument doc = new Document(info.getBuffer().toString());
			TextEdit edit = getCodeFormatter().format(CodeFormatter.K_STATEMENTS, doc.get(), 0, doc.get().length(), 0,
					null);

			// check if text formatted successfully
			if (edit != null) {
				try {
					edit.apply(doc);
					info.setBuffer(new StringBuffer(doc.get()));
				} catch (MalformedTreeException e) {
					log.warn("Error during code formatting. Illegal code edit tree (" + e.getMessage() + ").");
				} catch (BadLocationException e) {
					log.warn("Error during code formatting. Bad location (" + e.getMessage() + ").");
				}
			} else {
				log.warn("File " + info.getAbsolutePath()
						+ " could not be formatted. Make sure your template produces legal C++ code!");
			}
		}
	}

	/**
	 * Returns an instance of the Eclipse CDT code formatter. If the user
	 * supplied the path to a config file, this file will be used to configure
	 * the code formatter. Otherwise we use the default options supplied with
	 * Xpand.
	 * 
	 * @return a preconfigured instance of the Eclipse code formatter.
	 */
	private CodeFormatter getCodeFormatter() {
		if (codeFormatter == null) {
			// instantiate the formatter
			Map<String, Object> options = new HashMap<String, Object>();

			options.put("org.eclipse.cdt.core.formatter.insert_space_before_opening_paren_in_method_declaration",
					"do not insert");
			options.put("org.eclipse.cdt.core.formatter.insert_space_after_opening_paren_in_for", "do not insert");
			options.put("org.eclipse.cdt.core.formatter.insert_new_line_in_empty_block", "insert");
			options.put("org.eclipse.cdt.core.formatter.lineSplit", "80");
			options.put("org.eclipse.cdt.core.formatter.insert_space_before_comma_in_base_types", "do not insert");
			options.put("org.eclipse.cdt.core.formatter.keep_else_statement_on_same_line", "false");
			options.put("org.eclipse.cdt.core.formatter.indent_switchstatements_compare_to_switch", "false");
			options.put("org.eclipse.cdt.core.formatter.insert_space_after_opening_brace_in_array_initializer",
					"insert");
			options.put("org.eclipse.cdt.core.formatter.insert_space_before_comma_in_method_declaration_parameters",
					"do not insert");
			options.put("org.eclipse.cdt.core.formatter.insert_space_after_opening_paren_in_if", "do not insert");
			options.put("org.eclipse.cdt.core.formatter.insert_space_after_opening_paren_in_exception_specification",
					"do not insert");
			options.put("org.eclipse.cdt.core.formatter.insert_space_before_closing_paren_in_parenthesized_expression",
					"do not insert");
			options.put("org.eclipse.cdt.core.formatter.insert_space_after_comma_in_base_types", "insert");
			options.put("org.eclipse.cdt.core.formatter.indent_body_declarations_compare_to_access_specifier", "true");
			options.put("org.eclipse.cdt.core.formatter.insert_space_before_closing_paren_in_exception_specification",
					"do not insert");
			options.put("org.eclipse.cdt.core.formatter.insert_space_after_comma_in_template_arguments", "insert");
			options.put("org.eclipse.cdt.core.formatter.insert_space_before_opening_brace_in_block", "insert");
			options.put("org.eclipse.cdt.core.formatter.insert_space_before_closing_paren_in_method_declaration",
					"do not insert");
			options.put("org.eclipse.cdt.core.formatter.use_tabs_only_for_leading_indentations", "false");
			options.put("org.eclipse.cdt.core.formatter.insert_space_before_colon_in_labeled_statement",
					"do not insert");
			options.put("org.eclipse.cdt.core.formatter.insert_space_after_colon_in_case", "insert");
			options.put("org.eclipse.cdt.core.formatter.insert_space_after_comma_in_array_initializer", "insert");
			options.put("org.eclipse.cdt.core.formatter.insert_space_after_comma_in_enum_declarations", "insert");
			options.put("org.eclipse.cdt.core.formatter.alignment_for_expressions_in_array_initializer", "16");
			options.put("org.eclipse.cdt.core.formatter.insert_space_after_comma_in_declarator_list", "insert");
			options.put("org.eclipse.cdt.core.formatter.insert_space_before_opening_bracket", "do not insert");
			options.put("org.eclipse.cdt.core.formatter.insert_space_before_closing_paren_in_for", "do not insert");
			options.put("org.eclipse.cdt.core.formatter.insert_space_before_prefix_operator", "do not insert");
			options.put("org.eclipse.cdt.core.formatter.tabulation.size", "4");
			options.put("org.eclipse.cdt.core.formatter.insert_new_line_before_else_in_if_statement", "insert");
			options.put("org.eclipse.cdt.core.formatter.alignment_for_enumerator_list", "48");
			options.put("org.eclipse.cdt.core.formatter.insert_space_after_opening_paren_in_parenthesized_expression",
					"do not insert");
			options.put("org.eclipse.cdt.core.formatter.insert_space_between_empty_parens_in_method_declaration",
					"do not insert");
			options.put("org.eclipse.cdt.core.formatter.alignment_for_declarator_list", "16");
			options.put("org.eclipse.cdt.core.formatter.insert_space_before_closing_paren_in_switch", "do not insert");
			options.put("org.eclipse.cdt.core.formatter.insert_space_before_opening_paren_in_parenthesized_expression",
					"do not insert");
			options.put("org.eclipse.cdt.core.formatter.indent_empty_lines", "false");
			options.put("org.eclipse.cdt.core.formatter.indent_switchstatements_compare_to_cases", "true");
			options.put("org.eclipse.cdt.core.formatter.keep_empty_array_initializer_on_one_line", "false");
			options.put("org.eclipse.cdt.core.formatter.insert_space_before_opening_brace_in_method_declaration",
					"insert");
			options.put("org.eclipse.cdt.core.formatter.put_empty_statement_on_new_line", "true");
			options.put("org.eclipse.cdt.core.formatter.insert_space_before_opening_brace_in_switch", "insert");
			options.put("org.eclipse.cdt.core.formatter.insert_space_before_closing_paren_in_cast", "do not insert");
			options.put("org.eclipse.cdt.core.formatter.insert_space_between_empty_braces_in_array_initializer",
					"do not insert");
			options.put("org.eclipse.cdt.core.formatter.brace_position_for_method_declaration", "next_line");
			options.put("org.eclipse.cdt.core.formatter.insert_space_before_closing_paren_in_while", "do not insert");
			options.put("org.eclipse.cdt.core.formatter.insert_space_after_question_in_conditional", "insert");
			options.put("org.eclipse.cdt.core.formatter.insert_space_before_semicolon", "do not insert");
			options.put(
					"org.eclipse.cdt.core.formatter.insert_space_after_closing_angle_bracket_in_template_arguments",
					"insert");
			options.put("org.eclipse.cdt.core.formatter.insert_space_before_colon_in_base_clause", "do not insert");
			options.put("org.eclipse.cdt.core.formatter.indent_breaks_compare_to_cases", "true");
			options.put("org.eclipse.cdt.core.formatter.insert_space_before_unary_operator", "do not insert");
			options.put("org.eclipse.cdt.core.formatter.insert_space_before_comma_in_declarator_list", "do not insert");
			options.put("org.eclipse.cdt.core.formatter.alignment_for_arguments_in_method_invocation", "16");
			options.put("org.eclipse.cdt.core.formatter.insert_space_before_opening_paren_in_while", "insert");
			options.put("org.eclipse.cdt.core.formatter.insert_space_between_empty_brackets", "do not insert");
			options.put("org.eclipse.cdt.core.formatter.insert_space_after_opening_bracket", "do not insert");
			options.put("org.eclipse.cdt.core.formatter.alignment_for_parameters_in_method_declaration", "16");
			options.put("org.eclipse.cdt.core.formatter.insert_new_line_before_closing_brace_in_array_initializer",
					"do not insert");
			options.put("org.eclipse.cdt.core.formatter.number_of_empty_lines_to_preserve", "1");
			options.put("org.eclipse.cdt.core.formatter.insert_space_after_opening_paren_in_method_invocation",
					"do not insert");
			options.put("org.eclipse.cdt.core.formatter.insert_space_before_closing_brace_in_array_initializer",
					"insert");
			options.put("org.eclipse.cdt.core.formatter.insert_space_before_semicolon_in_for", "do not insert");
			options.put("org.eclipse.cdt.core.formatter.brace_position_for_block", "next_line");
			options.put("org.eclipse.cdt.core.formatter.insert_space_before_colon_in_conditional", "insert");
			options.put("org.eclipse.cdt.core.formatter.brace_position_for_type_declaration", "next_line");
			options.put("org.eclipse.cdt.core.formatter.insert_space_before_assignment_operator", "insert");
			options.put(
					"org.eclipse.cdt.core.formatter.insert_space_before_opening_angle_bracket_in_template_arguments",
					"do not insert");
			options.put("org.eclipse.cdt.core.formatter.insert_space_before_comma_in_expression_list", "do not insert");
			options.put(
					"org.eclipse.cdt.core.formatter.insert_space_after_opening_angle_bracket_in_template_parameters",
					"insert");
			options.put("org.eclipse.cdt.core.formatter.continuation_indentation", "2");
			options.put("org.eclipse.cdt.core.formatter.alignment_for_expression_list", "0");
			options.put("org.eclipse.cdt.core.formatter.insert_space_after_opening_paren_in_method_declaration",
					"do not insert");
			options.put("org.eclipse.cdt.core.formatter.insert_space_before_comma_in_template_parameters",
					"do not insert");
			options.put("org.eclipse.cdt.core.formatter.insert_space_before_colon_in_default", "do not insert");
			options.put("org.eclipse.cdt.core.formatter.insert_space_after_binary_operator", "insert");
			options.put("org.eclipse.cdt.core.formatter.alignment_for_conditional_expression", "80");
			options.put("org.eclipse.cdt.core.formatter.insert_space_between_empty_parens_in_method_invocation",
					"do not insert");
			options.put("org.eclipse.cdt.core.formatter.insert_space_before_comma_in_array_initializer",
					"do not insert");
			options.put("org.eclipse.cdt.core.formatter.insert_space_before_closing_paren_in_if", "do not insert");
			options.put("org.eclipse.cdt.core.formatter.format_guardian_clause_on_one_line", "false");
			options.put("org.eclipse.cdt.core.formatter.insert_space_after_opening_paren_in_cast", "do not insert");
			options.put("org.eclipse.cdt.core.formatter.indent_access_specifier_compare_to_type_header", "false");
			options.put("org.eclipse.cdt.core.formatter.insert_space_before_opening_brace_in_type_declaration",
					"insert");
			options.put("org.eclipse.cdt.core.formatter.insert_space_after_colon_in_labeled_statement", "insert");
			options.put("org.eclipse.cdt.core.formatter.continuation_indentation_for_array_initializer", "2");
			options.put("org.eclipse.cdt.core.formatter.insert_space_after_comma_in_method_declaration_parameters",
					"insert");
			options.put("org.eclipse.cdt.core.formatter.insert_space_after_semicolon_in_for", "insert");
			options.put("org.eclipse.cdt.core.formatter.insert_space_before_closing_paren_in_method_invocation",
					"do not insert");
			options.put("org.eclipse.cdt.core.formatter.indent_body_declarations_compare_to_namespace_header", "true");
			options.put("org.eclipse.cdt.core.formatter.insert_space_after_closing_brace_in_block", "insert");
			options.put("org.eclipse.cdt.core.formatter.insert_space_after_assignment_operator", "insert");
			options.put("org.eclipse.cdt.core.formatter.alignment_for_compact_if", "0");
			options.put("org.eclipse.cdt.core.formatter.insert_space_before_opening_brace_in_array_initializer",
					"insert");
			options.put("org.eclipse.cdt.core.formatter.insert_new_line_at_end_of_file_if_missing", "do not insert");
			options.put("org.eclipse.cdt.core.formatter.insert_space_after_comma_in_template_parameters", "insert");
			options.put("org.eclipse.cdt.core.formatter.insert_space_after_comma_in_expression_list", "insert");
			options.put("org.eclipse.cdt.core.formatter.insert_space_before_question_in_conditional", "insert");
			options.put("org.eclipse.cdt.core.formatter.insert_space_before_opening_paren_in_exception_specification",
					"insert");
			options.put("org.eclipse.cdt.core.formatter.insert_space_before_binary_operator", "insert");
			options.put("org.eclipse.cdt.core.formatter.insert_new_line_before_identifier_in_function_declaration",
					"do not insert");
			options.put("org.eclipse.cdt.core.formatter.alignment_for_base_clause_in_type_declaration", "80");
			options.put("org.eclipse.cdt.core.formatter.insert_space_before_comma_in_method_declaration_throws",
					"do not insert");
			options.put("org.eclipse.cdt.core.formatter.insert_space_between_empty_parens_in_exception_specification",
					"do not insert");
			options.put("org.eclipse.cdt.core.formatter.insert_space_before_comma_in_method_invocation_arguments",
					"do not insert");
			options.put("org.eclipse.cdt.core.formatter.indent_declaration_compare_to_template_header", "false");
			options.put("org.eclipse.cdt.core.formatter.insert_space_after_unary_operator", "do not insert");
			options.put("org.eclipse.cdt.core.formatter.insert_space_before_opening_paren_in_switch", "insert");
			options.put("org.eclipse.cdt.core.formatter.indent_statements_compare_to_body", "true");
			options.put("org.eclipse.cdt.core.formatter.insert_space_after_comma_in_method_declaration_throws",
					"insert");
			options.put("org.eclipse.cdt.core.formatter.indent_statements_compare_to_block", "true");
			options.put("org.eclipse.cdt.core.formatter.insert_space_before_comma_in_template_arguments",
					"do not insert");
			options
					.put("org.eclipse.cdt.core.formatter.insert_new_line_before_catch_in_try_statement",
							"do not insert");
			options.put("org.eclipse.cdt.core.formatter.alignment_for_throws_clause_in_method_declaration", "16");
			options.put("org.eclipse.cdt.core.formatter.insert_space_before_opening_paren_in_method_invocation",
					"do not insert");
			options.put("org.eclipse.cdt.core.formatter.insert_space_after_closing_paren_in_cast", "insert");
			options.put("org.eclipse.cdt.core.formatter.insert_space_before_closing_paren_in_catch", "do not insert");
			options.put(
					"org.eclipse.cdt.core.formatter.insert_space_before_opening_angle_bracket_in_template_parameters",
					"do not insert");
			options.put("org.eclipse.cdt.core.formatter.tabulation.char", "space");
			options.put(
					"org.eclipse.cdt.core.formatter.insert_space_before_closing_angle_bracket_in_template_parameters",
					"insert");
			options.put("org.eclipse.cdt.core.formatter.insert_space_after_opening_paren_in_while", "do not insert");
			options.put("org.eclipse.cdt.core.formatter.insert_space_after_comma_in_method_invocation_arguments",
					"insert");
			options.put("org.eclipse.cdt.core.formatter.brace_position_for_block_in_case", "next_line");
			options.put("org.eclipse.cdt.core.formatter.compact_else_if", "true");
			options.put("org.eclipse.cdt.core.formatter.insert_space_after_postfix_operator", "do not insert");
			options.put("org.eclipse.cdt.core.formatter.insert_space_after_colon_in_base_clause", "insert");
			options.put("org.eclipse.cdt.core.formatter.insert_new_line_after_template_declaration", "do not insert");
			options.put("org.eclipse.cdt.core.formatter.insert_space_after_opening_paren_in_catch", "do not insert");
			options.put("org.eclipse.cdt.core.formatter.keep_then_statement_on_same_line", "false");
			options.put("org.eclipse.cdt.core.formatter.brace_position_for_switch", "next_line");
			options.put("org.eclipse.cdt.core.formatter.insert_space_before_opening_paren_in_if", "insert");
			options.put("org.eclipse.cdt.core.formatter.insert_space_after_opening_paren_in_switch", "do not insert");
			options.put("org.eclipse.cdt.core.formatter.keep_imple_if_on_one_line", "false");
			options.put("org.eclipse.cdt.core.formatter.insert_new_line_after_opening_brace_in_array_initializer",
					"do not insert");
			options.put("org.eclipse.cdt.core.formatter.indentation.size", "4");
			options.put("org.eclipse.cdt.core.formatter.brace_position_for_namespace_declaration", "next_line");
			options.put("org.eclipse.cdt.core.formatter.insert_space_after_colon_in_conditional", "insert");
			options.put("org.eclipse.cdt.core.formatter.insert_space_before_comma_in_enum_declarations",
					"do not insert");
			options.put("org.eclipse.cdt.core.formatter.insert_space_after_prefix_operator", "do not insert");
			options.put(
					"org.eclipse.cdt.core.formatter.insert_space_before_closing_angle_bracket_in_template_arguments",
					"insert");
			options.put("org.eclipse.cdt.core.formatter.brace_position_for_array_initializer", "next_line");
			options.put("org.eclipse.cdt.core.formatter.insert_space_before_colon_in_case", "do not insert");
			options.put("org.eclipse.cdt.core.formatter.insert_space_before_opening_paren_in_catch", "insert");
			options.put("org.eclipse.cdt.core.formatter.insert_space_before_opening_brace_in_namespace_declaration",
					"insert");
			options.put("org.eclipse.cdt.core.formatter.insert_space_before_postfix_operator", "do not insert");
			options.put("org.eclipse.cdt.core.formatter.insert_space_before_closing_bracket", "do not insert");
			options.put("org.eclipse.cdt.core.formatter.insert_new_line_before_while_in_do_statement", "do not insert");
			options.put("org.eclipse.cdt.core.formatter.insert_space_before_opening_paren_in_for", "insert");
			options.put(
					"org.eclipse.cdt.core.formatter.insert_space_after_closing_angle_bracket_in_template_parameters",
					"insert");
			options.put(
					"org.eclipse.cdt.core.formatter.insert_space_after_opening_angle_bracket_in_template_arguments",
					"insert");

			codeFormatter = ToolFactory.createDefaultCodeFormatter(options);
		}
		return codeFormatter;
	}

	/**
	 * {@inheritDoc}
	 */
	public void afterClose(final FileHandle impl) {
		// do nothing here
	}
}
