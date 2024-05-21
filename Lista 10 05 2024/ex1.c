#include <stdio.h>

int repeticoes (int n, int lista[]){
	
	int i, pnum[n], num, rep = 0, cont = 0;
	
	printf("Digite qual numero voce quer saber se ja existe dentro do vetor\n");
	scanf("%d", &num);
	
	for(i = 0; i < n; i++){
		if(num == lista[i]){
			rep++;
			pnum[cont] = i;
			cont++;
		}
	}
	
	printf("O numero aparece %d vez(es) no vetor na(s) posicao(oes) ", rep);
	for(i = 0; i < cont; i++){
		printf("%d  ", pnum[i]);
	}
	
	return 0;
}

int main(){
	
	int n, i, max, pmax = 0, min, pmin = 0;
	float total;
	
	
	printf("Digite quantos numeros voce quer colocar dentro do vetor (maximo de 20 numeros)\n");
	scanf("%d", &n);
	int lista[n];
	
	if(n > 20){
		printf("A quantidade de numeros e maior que 20");
		return 0;
	}
	
	for(i = 0; i < n; i++){
		int a;
		printf("digite um numero inteiro \n");
		scanf("%d", &a);
		lista[i] = a;
	}
	
	max = lista[0];
	min = lista[0];
	
	for(i = 0; i < n; i++){
		if(max < lista[i]){
			max = lista[i];
			pmax = i;
		}
		if(min > lista[i]){
			min = lista[i];
			pmin = i;
		}
		total = total + lista[i];
	}
	
	printf("O maior numero e %d e a sua posicao no vetor e %d\n", max, pmax);
	printf("O menor numero e %d e a sua posicao no vetor e %d\n", min, pmin);
	printf("A soma de todos os valores e %f\n", total);
	printf("A media de todos os valores e %f\n", (total/n));
	
	repeticoes(n, lista);
	
	return 0;
}

