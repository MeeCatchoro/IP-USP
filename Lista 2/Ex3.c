#include <stdio.h>

int main(){
	int n, i, x, a = 0, b = 0, c = 0;
	
	printf("Digite quantos numeros inteiros voce quer testar \n");
	scanf("%d", &n);
	
	
	for(i = 0; i < n; i++){
		printf("Digite um numero inteiro \n");
		scanf("%d", &x);
		if (x % 4 == 0){
			a ++;
		}
		if (x % 7 == 0){
			b ++;
		}
		if (x % 13 == 0){
			c ++;
		} 
	}
	printf("A quantidade de numeros divisiveis:\n");
	printf("por 4: %d\n", a);
	printf("por 7: %d\n", b);
	printf("por 13: %d\n", c);
	
	return 0;
}
