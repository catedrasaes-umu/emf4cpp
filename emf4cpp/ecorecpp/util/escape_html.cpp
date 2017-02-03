// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * serializer/html_encode.hpp
 * Copyright (C) INCHRON GmbH 2016 <matthias.doerfel@inchron.com>
 *
 * EMF4CPP is free software: you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * EMF4CPP is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "escape_html.hpp"

#include <iostream>
#include <string.h>

namespace ecorecpp
{
namespace util
{
namespace
{

struct Entity {
	const char* sequence;
	size_t length;
	char character;
};

const Entity entities[] = {
	{ "amp;", sizeof("amp;")-1, '&' },
	{ "quot;", sizeof("quot;")-1, '\"' },
	{ "apos;", sizeof("apos;")-1, '\'' },
	{ "lt;", sizeof("lt;")-1, '<' },
	{ "gt;", sizeof("gt;")-1, '>' },
	{ 0, 0, '\0' }
};

} // end anonymous namespace


void unescape_html(std::string& data) {
	std::string buffer;
    buffer.reserve(data.size());
    for (size_t pos = 0; pos != data.size(); ++pos) {
		if (data[pos] == '&') {
			const Entity* entity = entities;
			while (entity->sequence) {
				if (strncmp(entity->sequence, &data[pos+1], entity->length) == 0) {
					buffer.append(&entity->character, 1);
					pos += entity->length;
					break;
				}
				entity++;
			}
		} else
			buffer.append(&data[pos], 1); 
	}
    data.swap(buffer);
}


/*
 * This encoding function has been suggested by
 * Giovanni Funchal http://stackoverflow.com/users/55935/giovanni-funchal
 * in his answer http://stackoverflow.com/a/5665377
 * at the Stack Exchange Network.
 *
 * All subscriber content of the Stack Exchange Network is licensed under the
 * Creative Commons Attribution Share Alike license, see
 * https://creativecommons.org/licenses/by-sa/3.0/
 *
 * Changes made:
 * - renamed to escape_html()
 * - reserved 12.5% more space, as suggested in the same answer
 *   by Omer Mor http://stackoverflow.com/users/61061/omer-mor
 */
void escape_html(std::string& data) {
    std::string buffer;
    buffer.reserve(data.size() + (data.size() >> 8));
    for (size_t pos = 0; pos != data.size(); ++pos) {
        switch(data[pos]) {
            case '&':  buffer.append("&amp;");       break;
            case '\"': buffer.append("&quot;");      break;
            case '\'': buffer.append("&apos;");      break;
            case '<':  buffer.append("&lt;");        break;
            case '>':  buffer.append("&gt;");        break;
            default:   buffer.append(&data[pos], 1); break;
        }
    }
    data.swap(buffer);
}

} // util
} // ecorecpp
