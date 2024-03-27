PHONY: compile run

compile:
	mpicc src/main.c -o bin/ompi_testing

run:
	mpirun bin/ompi_testing
