all: main.c
	gcc main.c

run:
	./a.out "ls -a -l"

clean:
	rm a.out
	rm parse_args.o
