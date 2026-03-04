/*
 * exNN.c —  Imprimir o caminho até o elemento 
 *
 * Lista 16 — Estruturas de Informação
 * Autor: Pedro Gomes
 * Data:  04/03/2026
 *
 * Enunciado:
 *   Imprimir todos os elemento no caminho até o elemento k
 *
 * Entradas:
 *   - ponteiro p apontando para a raiz da arvore
     - inteiro k a ser buscado
 *
 * Saída esperada:
 *   - inteiros contidos nos nos da arvore ate o k desejado
 *
 * Hipóteses assumidas:
 *   - [se o enunciado for ambíguo, registre aqui]
 *
 * Pseudocódigo:
 *   [opcional — escreva antes de implementar]
 */

#include <stdio.h>
#include "bst.h"


void imprime_caminho_rec(RegInt* p,int k)
{
    if (p == NULL) return;
    printf("%d ",p->info);
    if (p->info == k) return;
    if (p->info < k) imprime_caminho_rec(p->dir,k);
    if (p->info > k) imprime_caminho_rec(p->esq,k);

}

/* ---------------------------------------------------------
 * main — monta a árvore de exemplo e testa a função
 * --------------------------------------------------------- */
int main(void) {
    RegInt *raiz = NULL;

    // raiz balanceada com 2,4,6,8,11,13,14,25,27,28,35,40,45
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

    int k;
    printf("Digite o valor de k: ");
    scanf("%d", &k);
    imprime_caminho_rec(raiz,k);

    bst_liberar_arvore(raiz);
    return 0;
}