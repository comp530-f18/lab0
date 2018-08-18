
all: ex2

ex2: ex2.c
	gcc ex2.c -o ex2 -g

clean:
	rm ex2 
