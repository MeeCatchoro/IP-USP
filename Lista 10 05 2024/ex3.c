#include <stdio.h>

int main(){
	int n, o, i, j, rep;
	
	printf("Digite quantos numeros voce quer colocar dentro do primeiro vetor (maximo de 20 numeros e nao pode haver numeros repetidos)\n");
	scanf("%d", &n);
	int listaA[n];
	
	if(n > 20){
		printf("A quantidade de numeros e maior que 20");
		return 0;
	}
	
	for(i = 0; i < n; i++){
		int a;
		printf("digite um numero inteiro \n");
		scanf("%d", &a);
		listaA[i] = a;
	}
	
	printf("Digite quantos numeros voce quer colocar dentro do segundo vetor (maximo de 20 numeros)\n");
	scanf("%d", &o);
	int listaB[o];
	
	if(o > 20){
		printf("A quantidade de numeros e maior que 20");
		return 0;
	}
	
	for(i = 0; i < o; i++){
		int a;
		printf("digite um numero inteiro \n");
		scanf("%d", &a);
		listaB[i] = a;
	}
	
	for(i = 0; i < n; i++){
		int a = 0;
		for(j = 0; j < o; j++){
			if(listaA[i] == listaB[j]){
				a++;
				rep++;
			}
		}
		if(a > 0){
			printf("O numero %d do primeiro vetor aparece %d vez(es) no segundo vetor\n", listaA[i], a);
			a = 0;
		}	
	}
	
	if(rep == 0){
		printf("Nenhum numero do primeiro vetor aparece no segundo vetor\n");
	}
	
	return 0;
}
