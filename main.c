/* 
 * Programa de Ordenação de Vetor
 * Descrição: Programa que lê 5 números inteiros e os ordena em ordem crescente
 * Linguagem: C
 * Compilador: GCC
 * Algoritmo de Ordenação: Bubble Sort (Método da Bolha)
 * Funcionalidades:
 *  - Entrada de 5 números
 *  - Ordenação crescente dos números
 *  - Exibição dos números ordenados
 * Data de criação: [Data atual]
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    // Configura o terminal para exibir caracteres em Português.
    setlocale(LC_ALL, "Portuguese");

    // Declaração de variáveis.
    int vetor[5];     // Vetor para armazenar 5 números inteiros.
    int auxiliar;     // Variável auxiliar para troca de valores durante a ordenação.

    // Laço para entrada de dados no vetor.
    for (int i = 0; i < 5; i++)
    {
        printf("Digite um número para a posição %d do vetor: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Algoritmo de ordenação Bubble Sort.
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j < 5; j++)
        {
            // Compara e troca elementos se estiverem fora de ordem.
            if (vetor[i] > vetor[j])
            {
                auxiliar = vetor[i];     // Armazena valor temporariamente.
                vetor[i] = vetor[j];     // Troca elementos de posição.
                vetor[j] = auxiliar;     // Completa a troca.
            }
        }
    }

    // Exibe os números ordenados.
    for (int i = 0; i < 5; i++)
    {
        printf("Posição %d, índice %d, número armazenado: %d\n", i + 1, i, vetor[i]);
    }
    return 0;
}
