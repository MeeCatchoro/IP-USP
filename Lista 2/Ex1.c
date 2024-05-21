#include <stdio.h> 
#include <limits.h>

int main(){
	
	int n, i, a, max = 0, min = INT_MAX, total = 0;
	
	printf("Digite quantos numeros inteiros voce quer comparar \n");
	scanf("%d", &n);
	
	
	for(i = 0; i < n; i++){
		printf("Digite um numero inteiro maior que 0 \n");
		scanf("%d", &a);
		total += a;
		
		if (a > 0){
			if(a >= max){
				max = a;
			}
			if(a <= min){
				min = a;
			}
		} 
		else{
			printf("Valor inserido inválido \n");
			i --;
		}

	}
	
	printf("Maior valor: %d\n", max);
	printf("Menor valor: %d\n", min);
	printf("Soma de todos os valores: %d\n", total);	
	printf("Media de todos os valores: %d\n", total/n);
	
	return 0;
}
