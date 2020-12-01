CC = gcc
CFLAGS = -W -Wall
LDFLAGS =
EXEC = prog
SRCS = srcs/
HEADS = headers/
SRC = $(SRCS)node.c $(SRCS)main.c
OBJ = $(SRC:.c=.o)

all: $(EXEC)

prog: $(OBJ)
	@$(CC) -o $@ $^ $(LDFLAGS)

main.o: $(HEADS)node.h $(HEADS)cell.h $(HEADS)token.h

%.o: %.c
	@$(CC) -o $@ -c $< $(CFLAGS)

.PHONY: clean mrproper

clean:
	@rm -rf *.o

mrproper: clean
	@rm -rf $(EXEC)
