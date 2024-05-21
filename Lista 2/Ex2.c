#include <stdio.h> 

int main(){
	int n;
	printf("Digite um valor menor que 10000 \n");
	scanf("%d", &n);
	
	if(n >= 10000 || n <= 0){
		printf("O valor inserido nao e valido");
	}
	else{
		printf("O valor da casa na unidade: %d\n", n%10);
		n /= 10;
		printf("O valor da casa nas dezenas: %d\n", n%10);
		n /= 10;
		printf("O valor da casa nas centenas: %d\n", n%10);
		n /= 10;
		printf("O valor da casa nas milhares: %d\n", n%10);
		n /= 10;
	}
	
	return 0;
}
