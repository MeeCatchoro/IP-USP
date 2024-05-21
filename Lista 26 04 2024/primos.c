#include <stdio.h>

int main()
{
    short int n = 0, i, j, primos = 0, p;
    printf("Digite quantos numeros inteiros positivos voce quer testar\n");
    scanf("%hd", &n);
    
    short int num[n];
    
    for(i=0; i < n; i++){
        printf("Digite um numero inteiro positivo\n");
        scanf("%hd", &num[i]);
    }
    
    for(i=0; i < n; i++){
        p = 0;
        if(num[i] == 2){
            primos++;
        }
        else if(num[i] != 1){
            for(j = 2; j < num[i]; j++){
                if( (num[i]%j) == 0){
                    p = 1;
                }
            }
            if(p == 0){
                primos++;
            }
        }
    }
    if(primos == 1){
        printf("%d numero e primo", primos);
    }
    else{
        printf("%d numeros sao primos", primos);
    }
    
    return 0;
}