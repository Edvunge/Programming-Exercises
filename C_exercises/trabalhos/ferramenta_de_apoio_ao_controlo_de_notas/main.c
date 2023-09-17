#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// definição da função
void nota_is_valid();
void array_nr_of_students();


int main(void){
    array_nr_of_students();
    return 0;
}

// 3dv6ldo_vung3
// a) Escrever uma função para verificar se a nota é válida (notas de 0.00 a 20.00).
void nota_is_valid(){
    double note;

    if(note >= 0.00 && note <= 20.00){
        printf("\nNota e valida.");
    } else {
        printf("\nNota nao e valida.");
    }
}



/*
b) Criar um array onde seja possível armazenar os seguintes dados:

	a. Nr. do Aluno

	b. Nota

	Escrever uma função que leia este array. O número máximo de alunos é 50. 
	Este número pode ser alterado no código e não na execução do programa.
*/

// Declare an array of four integers:
int numbers_Of_Students[50];
int notas[100];

void array_nr_of_students() {

    // Inicialize a semente do gerador de números aleatórios com o tempo atual
    srand(time(NULL));

    // Declare um array para armazenar os números aleatórios
    numbers_Of_Students;

    // Preencha o array com números aleatórios
    for (int i = 0; i < 50; i++) {
        numbers_Of_Students[i] = rand() % 100;
    }

    // Imprima os números aleatórios
    for (int i = 0; i < 50; i++) {
        printf("%d\n", numbers_Of_Students[i]);
    }  
}


//  c) Refazer a alínea a), agora com o array referido em b).











