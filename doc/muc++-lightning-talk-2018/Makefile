

all: pdf

install: all


pdf: presentation.pdf


presentation.pdf: presentation.tex Makefile
	pdflatex $<
	pdflatex $<


clean:
	-rm *.toc *.snm *.nav *.out *.aux *.log
