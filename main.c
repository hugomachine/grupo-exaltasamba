#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* aloc(){
    int *vet;
    if((vet=(int*) calloc(1000,sizeof(int)))==NULL) exit(1);
    return vet;
}
void preenche(int* vet){
    srand((unsigned)time(NULL));
    int i=0,k=0;
    for(i=0;i<1000;i++){
        printf("\n");
        for(k=0;k<10;k++){
        vet[i]=rand()%100000;
        printf("%d\t",vet[i]);
        i++;
    }}

}
void achamediana(int *vet){
    int i=0;
    float mediana;
    mediana=(vet[499]+vet[500])/2;
    printf("MEDIANA=%.2f",mediana);
}
void acha_menor_maior(int* vet)
{
int i=0;
int*menor,*maior;

 menor = vet+i;
 maior = vet+i;

 for(i=0;i<1000;i++)
 {
     if(*menor>*(vet+i)&& *(vet+i)!= 0)
         menor = (vet+i);
     if(*maior<*(vet+i))
        maior = (vet+i);
 }
    printf("\n\nO maior numero do vetor eh: %d",*maior);
    printf("\nO menor numero do vetor eh: %d\n\n",*menor);
}

void tirarmedia(int* vet){
    int i=0,soma=0;
    float media;
    for(i=0;i<1000;i++){
        soma+=vet[i];
    }
    media=soma/1000;
    printf("\n\nMedia dos valores do vetor: %.2f\n\n ",media);
}
int main()
{
    int *vet;
    vet=aloc();
    preenche(vet);
    acha_menor_maior(vet);
    tirarmedia(vet);
    achamediana(vet);
    return 0;
}
