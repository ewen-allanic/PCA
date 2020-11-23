CC = gcc
CFLAGS = -W -Wall
LDFLAGS =
EXEC = prog
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

all: $(EXEC)

prog: $(OBJ)
	@$(CC) -o $@ $^ $(LDFLAGS)

main.o: node.h

%.o: %.c
	@$(CC) -o $@ -c $< $(CFLAGS)

.PHONY: clean mrproper

clean:
	@rm -rf *.o

mrproper: clean
	@rm -rf $(EXEC)
