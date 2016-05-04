# flags
CFLAGS=-Wall -g

# source files
SOURCES=ex24.c
EXECUTABLES=$(SOURCES:.c=)
DSYMS=$(SOURCES:.c=.dSYM)

# preferred compiler
CC = clang

all: $(EXECUTABLES)

clean:
	rm -f $(EXECUTABLES)
	rm -rf $(DSYMS)
