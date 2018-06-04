#!/bin/bash
pdflatex report.tex
pdflatex report.tex
rm -rf *.aux *.log *.toc *.out
