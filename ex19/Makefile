# flags
CFLAGS=-Wall -g

# source files
SOURCE=ex19.c
EXECUTABLE=$(SOURCE:.c=)
DSYM=$(SOURCE:.c=.dSYM)

# preferred compiler
CC = cc

all: $(EXECUTABLE)

main: game.o object.o

clean:
	rm -f $(EXECUTABLE)
	rm -rf $(DSYM)
	rm -f object.o
	rm -f game.o
