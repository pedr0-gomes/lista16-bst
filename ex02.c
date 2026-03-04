/*
 * exNN.c — [Título do exercício]
 *
 * Lista 16 — Contando ımpares maiores que k
 * Autor: Pedro Gomes
 * Data: 04/03/2026

 * Enunciado:
 *   Contar a quantidade de elementos ´ımpares maiores do que k
 *
 * Entradas:
 *   - Ponteiro p que aponta para a raiz da arvore
     - inteiro k 
 *
 * Saída esperada:
 *   - Impares maiores que k
 *
 * Hipóteses assumidas:
 *   - [se o enunciado for ambíguo, registre aqui]
 *
 * Pseudocódigo:
 *   [opcional — escreva antes de implementar]
 */

#include <stdio.h>
#include "bst.h"

int conta_maiores_rec(RegInt* p,int k)
{
    if (p == NULL)
    {
        return 0;
    }
    int c1 = conta_maiores_rec(p->esq,k);
    int c2 = conta_maiores_rec(p->dir,k);
    if (p->info > k && (p->info % 2 != 0))
    {
        return (c1 + c2 + 1);
    }
    return c1 + c2;

}
/* TODO: implementar */

/* ---------------------------------------------------------
 * main — monta a árvore de exemplo e testa a função
 * --------------------------------------------------------- */
int main(void) {
    RegInt *raiz = NULL;

    // criar arvore com 2,4,6,8,11,13,14,25,27,28,35,40,45
    raiz = bst_inserir_no(raiz, 2);
    raiz = bst_inserir_no(raiz, 4);
    raiz = bst_inserir_no(raiz, 6);
    raiz = bst_inserir_no(raiz, 8);
    raiz = bst_inserir_no(raiz, 11);
    raiz = bst_inserir_no(raiz, 13);
    raiz = bst_inserir_no(raiz, 14);
    raiz = bst_inserir_no(raiz, 25);
    raiz = bst_inserir_no(raiz, 27);
    raiz = bst_inserir_no(raiz, 28);
    raiz = bst_inserir_no(raiz, 35);
    raiz = bst_inserir_no(raiz, 40);
    raiz = bst_inserir_no(raiz, 45);

    // ajuste para o usuario digitar o valor de k
    int k;
    printf("Digite o valor de k: ");
    scanf("%d", &k);
    printf("%d",conta_maiores_rec(raiz,k));

    bst_liberar_arvore(raiz);
    return 0;
}