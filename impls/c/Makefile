CC = gcc
FLAGS = -Wall -Werror -Wextra
DEBUG = -ggdb
BIN = step0_repl

step0_repl: step0_repl.c linenoise.c
	$(CC) $(FLAGS) $^ -o $@ $(DEBUG)

step1_read_print: step1_read_print.c linenoise.c
	$(CC) $(FLAGS) $^ -o $@ $(DEBUG)

clean:
	rm history.txt *.o $(BIN)