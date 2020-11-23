CC = gcc
CFLAGS = -W
LDFLAGS =
EXEC = prog
SRC = main.c node.c
OBJ = $(SRC:.c=.o)

all: $(EXEC)

prog: $(OBJ)
		@$(CC) -o $@ $^ $(LDFLAGS)

%.o: %.c
		@$(CC) -o $@ -c $^ $(LDLFAGS)

main.o: node.h
