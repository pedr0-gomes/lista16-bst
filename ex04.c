/*
 * exNN.c —  Imprimir todas as folhas da árvore
 *
 * Lista 16 — Estruturas de Informação
 * Autor: Pedro Gomes
 * Data:  04/03/2026
 *
 * Enunciado:
 *    Imprimir todas as folhas da arvore
 *
 * Entradas:
 *   - ponteiro p que aponta para raiz da arvore
 *
 * Saída esperada:
 *   - inteiros contidos nas folhas da arvore
 *
 * Hipóteses assumidas:
 *   - [se o enunciado for ambíguo, registre aqui]
 *
 * Pseudocódigo:
 *   [opcional — escreva antes de implementar]
 */

#include <stdio.h>
#include "bst.h"

void imprime_folhas_rec(RegInt* p)
{
    if (p == NULL) return;
    if (p->esq == NULL && p->dir == NULL)
    {
        printf("%d ",p->info);
    }
    imprime_folhas_rec(p->esq);
    imprime_folhas_rec(p->dir);
}
/* TODO: implementar */

/* ---------------------------------------------------------
 * main — monta a árvore de exemplo e testa a função
 * --------------------------------------------------------- */
int main(void) {
    RegInt *raiz = NULL;

    raiz = bst_inserir_no(raiz, 25);
    raiz = bst_inserir_no(raiz, 13);
    raiz = bst_inserir_no(raiz, 40);
    raiz = bst_inserir_no(raiz, 8);
    raiz = bst_inserir_no(raiz, 14);
    raiz = bst_inserir_no(raiz, 35);
    raiz = bst_inserir_no(raiz, 45);
    raiz = bst_inserir_no(raiz, 2);
    raiz = bst_inserir_no(raiz, 11);
    raiz = bst_inserir_no(raiz, 27);
    raiz = bst_inserir_no(raiz, 28);
    raiz = bst_inserir_no(raiz, 4);
    raiz = bst_inserir_no(raiz, 6);

    imprime_folhas_rec(raiz);

    bst_liberar_arvore(raiz);
    return 0;
}