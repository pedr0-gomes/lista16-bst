CC     = gcc
CFLAGS = -Wall -Wextra -g

# Adicione cada exercício aqui conforme for criando
TARGETS = ex01 ex02 ex03 ex04 ex05 ex06 ex07 ex08 ex09 ex10 ex11 ex12 ex13

all: $(TARGETS)

# Regra genérica: cada exNN depende de exNN.c + bst.c
ex%: ex%.c bst.c bst.h
	$(CC) $(CFLAGS) -o $@ ex$*.c bst.c

clean:
	del *.exe 2>nul || true