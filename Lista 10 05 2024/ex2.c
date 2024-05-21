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
	
	int a = 0, n = 0, i, max, pmax = 0, min, pmin = 0, total = 0;
	int listaOld[20];
	printf("Insira no maximo 20 numeros e digite um numero negativo quando quiser parar");
	
	
	while (a >= 0 && a < 20){
		printf("digite um numero inteiro \n");
		scanf("%d", &a);
		if(a >= 0){
			listaOld[n] = a;
			n++;
		}
	}
	
	int lista[n];
	for(i = 0; i < n; i++){
		lista[i] = listaOld[i];
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
	printf("A soma de todos os valores e %d\n", total);
	printf("A media de todos os valores e %d\n", (total/n));
	
	
	repeticoes(n, lista);
	
	return 0;
}

