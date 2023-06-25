/*
Faça um programa que receba vários números e que calcule e mostre:
- A quantidade de números inferiores a 35;
- A média dos números positivos;
- A porcentagem de números entre 50 e 100 entre todos os números digitados;
- A porcentagem de números entre 10 e 20 entre os números menores que 50;
*/

#include <stdio.h>

int main() {
    int qntdTotalNumeros, numerosInferiores35, numerosInferiores50 , mediaPositivos, primPorcentagem, segPorcentagem, numAtual;

    qntdTotalNumeros = 1;
    numerosInferiores35 = 0; // Quantidade de números inferiores a 35
    mediaPositivos = 0; // Média dos números positivos
    primPorcentagem = 0; // Porcentagem de números entre 50 e 100 entre todos os números digitados
    segPorcentagem = 0; // Porcentagem de números entre 10 e 20 entre os números menores que 50

    while(1) {
        printf("Insira o número %d: ", qntdTotalNumeros);
        scanf("%d", &numAtual);

        // Números inferiores a 35 
        if(numAtual < 35) {
            numerosInferiores35++;
        }

        // Média dos números positivos
        if(numAtual > 0) {
            mediaPositivos += numAtual;
        }

        if(numAtual > 50 && numAtual < 100) {
            // Quantidade de números entre 50 e 100 entre todos os números digitados
            primPorcentagem++;
        }

        // Quantidades de números entre 10 e 20 entre os números menores que 50
        if(numAtual < 50) {
            // Quantidades de números inferiores a 50
            numerosInferiores50++;
        }

        if(numAtual > 10 && numAtual < 20) {
            // Quantidade de números entre 10 e 20
            segPorcentagem++;
        }

        qntdTotalNumeros += 1;
    }
    
    mediaPositivos = mediaPositivos / qntdTotalNumeros;

    primPorcentagem = (primPorcentagem / qntdTotalNumeros);

    segPorcentagem = (segPorcentagem / numerosInferiores50);

    printf("Números < 35: %d | Média dos Números > 0: %d | Porcentagem 50 < num < 100: %d | Porcentagem 10 < num < 20: %d.", numerosInferiores35, mediaPositivos, primPorcentagem, segPorcentagem);

    printf("Programa Encerrado.");

    return 0;
}