/*
 * bst.h — Interface do TAD Árvore Binária de Busca (BST)
 *
 * Lista 16 — Estruturas de Informação
 * Autor: Pedro Gomes
 * Data:  03/03/2026
 *
 * Fornece a struct RegInt e as operações base da BST.
 * Funções específicas de cada exercício ficam no próprio .c.
 */

#ifndef BST_H
#define BST_H

/* ---------------------------------------------------------
 * Estrutura do nó
 * --------------------------------------------------------- */
typedef struct RegInt {
    int            info;
    struct RegInt *esq;
    struct RegInt *dir;
} RegInt;

/* ---------------------------------------------------------
 * Protótipos — operações base
 * --------------------------------------------------------- */

/* Aloca e retorna um novo nó com o valor informado. */
RegInt *bst_criar_no(int valor);

/* Insere valor na BST respeitando a propriedade de ordem.
 * Retorna a nova raiz. */
RegInt *bst_inserir_no(RegInt *raiz, int valor);

/* Libera toda a memória da árvore. */
void bst_liberar_arvore(RegInt *raiz);

/* Imprime os elementos em ordem crescente (in-order). */
void bst_imprimir_in_order(RegInt *raiz);

#endif /* BST_H */