# include <unistd.h>
# include <string.h>
# include <stdio.h>
# include <stdlib.h>

char ** parse_args(char * line);

int main(int argc, char * argv[]) {
  char ** args = parse_args(argv[1]);
	int i;
	execvp(args[0], args);
}

char ** parse_args(char * line) {
	char ** args = calloc(100, 1);
	int i;
	for (i = 0; line != NULL; i++) {
		args[i] = calloc(10, 1);
		args[i] = strsep(&line, " ");
	}
	args[i] = NULL;
	return args;
}
