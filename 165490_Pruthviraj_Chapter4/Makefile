# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -Wno-implicit-fallthrough
LDFLAGS = -lm -g

# Rule to run specific exercises
.PHONY: run
run:
	$(CC) $(CFLAGS) -o $(EXE:.c=.out) $(EXE) $(LDFLAGS)
	./$(EXE:.c=.out)

# Clean rule
.PHONY: clean
clean:
	rm -f $(shell find . -type f -name '*.out')

