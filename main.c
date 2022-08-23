#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int* aloc(){
    int *vet,i=0;
    if((vet=(int*) calloc(1000,sizeof(int)))==NULL) exit(1);
    return vet;
}
void preenche(int* vet){
    srand((unsigned)time(NULL));
    int i=0,k=0;
    for(i=0;i<1000;i++){
        printf("\n");
        for(k=0;k<20;k++){
        vet[i]=rand()%100000;printf("%d\t",vet[i]);
        i++;
    }}

}
int main()
{
    int *vet;
    vet=aloc();
    preenche(vet);

    return 0;
}
