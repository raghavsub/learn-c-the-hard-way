# flags
CFLAGS=-Wall -g

# source files
SOURCE=ex22_main.c
EXECUTABLE=$(SOURCE:.c=)
DSYM=$(SOURCE:.c=.dSYM)

# preferred compiler
CC = clang

all: $(EXECUTABLE)

ex22_main: ex22.o

clean:
	rm -f $(EXECUTABLE)
	rm -rf $(DSYM)
	rm -f ex22.o
