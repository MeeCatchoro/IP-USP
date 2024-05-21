#include <stdio.h>

int isPalindromo(short int n){
    
    short int m = n, casas = 0, i;
    
    while(n >= 1){
        casas++;
        n = n/10;
    }
    
    short int num[casas], inv[casas];
    
    for(i = 0; i < casas; i++){
        num[casas-1-i] = m%10;
        inv[i] = m%10;
        m = m/10;
    }
    
    for(i = 0; i < casas; i++){
        if(num[i] != inv[i]){
            return 0;
        }
    }
    return 1;
}

int main(){
    short int n = 0;
    printf("Digite o numero inteiro positivo que voce quer testar\n");
    scanf("%hd", &n);
    
    printf("%d", isPalindromo(n));
    
    return 0;
}