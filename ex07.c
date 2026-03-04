/*
 * ex07.c — Contar o numero elementos impares no nivel k
 *
 * Lista 16 — Estruturas de Informação
 * Autor: Pedro Gomes
 * Data:  04/03/2026
 *
 * Enunciado:
 *   Contar o n´umero elementos ´ımpares no n´ıvel k
 *
 * Entradas:
 *   - ponteiro p para a raiz da arvore
     - inteiro k que representa o nível desejado
 *
 * Saída esperada:
 *   - inteiro que contém a quantidade de elementos impares no nivel k
 *
 * Hipóteses assumidas:
 *   - [se o enunciado for ambíguo, registre aqui]
 *
 * Pseudocódigo:
 *   [opcional — escreva antes de implementar]
 */

#include <stdio.h>
#include "bst.h"


int conta_impares_nivel_rec(RegInt* p,int k)
{
    if (p == NULL) return 0;
    if (k == 1)
    {
        if (p->info % 2 != 0) return 1;
        return 0;
    }
    int c1 = conta_impares_nivel_rec(p->esq,k-1);
    int c2 = conta_impares_nivel_rec(p->dir,k-1);
    return (c1+c2);

}
/* ---------------------------------------------------------
 * main — monta a árvore de exemplo e testa a função
 * --------------------------------------------------------- */
int main(void) {
    RegInt *raiz = NULL;

    // construir arvore balanceada com 2,4,6,8,11,13,14,25,27,28,35,40,45
    // a arvore não esta balanceada, insira adequadamente para a arvore ficar balanceada
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
    printf("Digite o nível k: ");
    scanf("%d", &k);
    int resultado = conta_impares_nivel_rec(raiz, k);
    printf("Número de elementos ímpares no nível %d: %d\n", k, resultado);

    bst_liberar_arvore(raiz);
    return 0;
}