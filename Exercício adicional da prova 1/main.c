#include <stdio.h>

int main()
{
    //recebe a data
    char data[10];
    printf("Insira uma data no exemplo 'DD/MM/AAAA' exemplo: '23/04/0003' não se esqueça do '/' \n");
    scanf("%s", data);
    
    //separa o dia, mês e ano em ints
    int i, dia = 0, mes = 0, ano = 0;
    for(i = 0; i < 2; i++){
        dia = dia * 10 + (data[i] -48);
    }
    
    for(i = 3; i < 5; i++){
        mes = mes * 10 + (data[i] -48);
    }
    
    for(i = 6; i < 10; i++){
        ano = ano * 10 + (data[i] -48);
    }
    
    //verifica se a data é valida ou não
    int valido = 0;
    
    if(dia == 0 || mes == 0 || dia > 31 || mes > 12){
    }
    else if(mes == 2){
        if((ano%4) == 0){
            if(dia < 30){
                valido = 1;
            }
        }
        else{
            if(dia < 29){
                valido = 1;
            }
        }
    }
    else if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
        if(dia < 31){
            valido = 1;
        }
    }
    else if(dia <32){
        valido = 1;
    }
    
    //imprime se a data é valida ou não
    if(valido == 1){
        printf("A data existe");
    }
    else{
        printf("A data não existe");
    }
    
    return 0;
}