#include <stdio.h>

int main(){
    short int n = 0, m = 0, o = n, casas = 0, i = 0, j = 0, rep = 0;
    printf("Digite o numero inteiro positivo maior que zero\n");
    scanf("%hd", &n);
    
    printf("Digite o numero inteiro positivo de um unico digito\n");
    scanf("%hd", &m);
    
    o = n;
    
    while(o >= 1){
        casas++;
        o = o/10;
    }
    
    short int num[casas];
    
    for(i = 0; i < casas; i++){
        num[casas-1-i] = n%10;
        n = n/10;
    }
    
    for(i = 0; i < casas; i++){
        if(j == 0){
            if(num[i]==m){
                j++;
            }
        }
        else if(j==1){
            if(num[i]==m){
                rep++;
            }
            else{
                j--;
            }
        }
        
    }
    
    printf("%hd", rep);
    return 0;
}