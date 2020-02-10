
CC=gcc
CFLAGS=-fopenmp

pi : pi_program
	$(CC) $(CFLAGS) pi_program.c -o pi_program

clean:
	rm pi_program
