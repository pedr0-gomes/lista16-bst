/*
 * bst.c — Implementação do TAD BST
 *
 * Lista 16 — Estruturas de Informação
 * Autor: Pedro Gomes
 * Data:  03/03/2026
 */

#include <stdio.h>
#include <stdlib.h>
#include "bst.h"

RegInt *bst_criar_no(int valor) {
    RegInt *no = (RegInt *)malloc(sizeof(RegInt));
    if (no == NULL) {
        fprintf(stderr, "Erro: malloc falhou em bst_criar_no.\n");
        exit(EXIT_FAILURE);
    }
    no->info = valor;
    no->esq  = NULL;
    no->dir  = NULL;
    return no;
}

RegInt *bst_inserir_no(RegInt *raiz, int valor) {
    if (raiz == NULL)
        return bst_criar_no(valor);
    if (valor < raiz->info)
        raiz->esq = bst_inserir_no(raiz->esq, valor);
    else if (valor > raiz->info)
        raiz->dir = bst_inserir_no(raiz->dir, valor);
    /* valor == raiz->info: ignora duplicata */
    return raiz;
}

void bst_liberar_arvore(RegInt *raiz) {
    if (raiz == NULL) return;
    bst_liberar_arvore(raiz->esq);
    bst_liberar_arvore(raiz->dir);
    free(raiz);
}

void bst_imprimir_in_order(RegInt *raiz) {
    if (raiz == NULL) return;
    bst_imprimir_in_order(raiz->esq);
    printf("%d ", raiz->info);
    bst_imprimir_in_order(raiz->dir);
}