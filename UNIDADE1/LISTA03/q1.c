#include <stdio.h>
#include <stdlib.h>

/*entrada: tamanho do vetor
           elementos do vetor
- alocar dinamicamente vetor
- obter vetor inverso
saida: vetor na ordem inversa*/

int main(void){
    int tamanho;
    printf("informe o tamanho do vetor:\t");
    scanf("%d", &tamanho);
    int *vetor = (int *)malloc(tamanho * sizeof(int));
    if (vetor == NULL){
        printf("no memory");
        exit(1);
    }
    else{
        printf("vetor alocado com sucesso!");
    }
    // elementos do vetor
    printf("digitar elementos do vetor:\n");
    for (int count = 0; count < tamanho; count++){
        scanf("%d", &vetor[count]);
    }
    // imprime vetor inverso
    int count;
    printf("vetor inverso: \n");
    for (count = tamanho - 1; count >= 0; count--){
        printf("%d\t", vetor[count]);
    }
    return 0;
}