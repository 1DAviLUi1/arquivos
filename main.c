#include <stdio.h>

int main(){
    char escolha;
    printf("digite 1 Controle de Estoque \n 2 para Controle de Venda \n 3 Controle Financeiro \n 4 voltar ");
    scanf(" %c" , &escolha);
      do{
        printf("digite uma idade valida!");
        scanf(" %c", &escolha);
    }while(escolha != '1' && escolha != '2'&& escolha != '3'&&escolha != '4');
    
    switch (escolha){
        case '1':
            printf("Bem vindo ao Controle de Estoque!");
            break;
        
        case '2':
            printf("Bem vindo ao Controle de Venda!");
            break;
        
        case '3':
            printf("Bem vindo ao Controle Financeiro!");
            break;
        
        case '4':
            printf("Voltar ao menu principal");
            break;
        
        default:
            printf("opção invalida\n");
            break;
    }
    return 0;
}