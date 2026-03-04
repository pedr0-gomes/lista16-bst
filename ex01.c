/*
 * exNN.1 —  Impresssao na faixa
 *
 * Lista 16 — Estruturas de Informação
 * Autor: Pedro Gomes
 * Data:  04/03/2026
 *
 * Enunciado:
 *   Imprimir todos os elementos maiores que k e menores que l
 *
 * Entradas:
 *   - ponteiro p que aponta para a raiz
 *
 * Saída esperada:
 *   - impresao dos valores entre k e l
 *
 * Hipóteses assumidas:
 *   - [se o enunciado for ambíguo, registre aqui]
 *
 * Pseudocódigo:
 *   [opcional — escreva antes de implementar]
 */

#include <stdio.h>
#include "bst.h"

void imprime_faixa_rec(RegInt* p,int k,int l)
{
    if (p == NULL)
    {
        return;
    }
    if (p->info > k)
    {
        imprime_faixa_rec(p->esq,k,l);
    }
    if (p->info > k && p->info < l)
    {
        printf("%d ",p->info);
    }
    if (p->info < l)
    {
        imprime_faixa_rec(p->dir,k,l);
    }
}
/* TODO: implementar */

/* ---------------------------------------------------------
 * main — monta a árvore de exemplo e testa a função
 * --------------------------------------------------------- */
int main(void) {
    RegInt *raiz = NULL;

    /* Monte aqui a árvore do enunciado */
        // insira os elementos 3,8,9,10,11,15,20
        raiz = bst_inserir_no(raiz, 3);
        raiz = bst_inserir_no(raiz, 8);
        raiz = bst_inserir_no(raiz, 9);
        raiz = bst_inserir_no(raiz, 10);
        raiz = bst_inserir_no(raiz, 11);
        raiz = bst_inserir_no(raiz, 15);
        raiz = bst_inserir_no(raiz, 20);

        imprime_faixa_rec(raiz,8,17);
    /* Teste aqui a função do exercício */

    bst_liberar_arvore(raiz);
    return 0;
}