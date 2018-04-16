#include <stdio.h>
#include <stdlib.h>
int * new_array(int len){
	int *array;
	int i;
	array = (int*)malloc(sizeof(int)*len);
	for(i=0;i<len;i++){
		printf("Qual eh o elemento %d : \n",i+1);
		scanf("%d",&array[i]);
		}
	return array;
}

int main(){
	int tamanho;
	printf("Diga o tamanho do vetor: ");
	scanf("%d",&tamanho);
	int *vetor;
	vetor = new_array(tamanho);	
}
