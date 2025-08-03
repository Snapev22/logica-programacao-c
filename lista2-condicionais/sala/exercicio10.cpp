#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

//Lê um número de 1 a 12 e exibe o nome do mês correspondente, utilizando a estrutura switch-case.

int main(void){
            
    int mes;
      
    printf("Digite o numero correspondente ao mes: ");
    scanf("%i", &mes);
      
    switch(mes){
        case 1: 
            printf("O mes %i corresponde ao mes de janeiro: ", mes);
            break;
        case 2: 
             printf("O mes %i corresponde ao mes de fevereiro: ", mes);
            break;
        case 3: 
            printf("O mes %i corresponde ao mes de março: ", mes);
            break;
        case 4: 
            printf("O mes %i corresponde ao mes de abril: ", mes);
            break;
        case 5: 
            printf("O mes %i corresponde ao mes de maio: ", mes);
            break;
        case 6: 
        	printf("O mes %i corresponde ao mes de junho: ", mes);
            break;
        case 7: 
            printf("O mes %i corresponde ao mes de julho: ", mes);
            break;
        case 8: 
            printf("O mes %i corresponde ao mes de agosto: ", mes);
            break;
        case 9: 
            printf("O mes %i corresponde ao mes de setembro: ", mes);
            break;
        case 10: 
            printf("O mes %i corresponde ao mes de outuburo: ", mes);
            break;
        case 11: 
            printf("O mes %i corresponde ao mes de novembro: ", mes);
            break;
        case 12: 
            printf("O mes %i corresponde ao mes de dezembro: ", mes);
           break;
        default:
            printf("O numero digitado não corresponde a nenhum mês, tente novamente.");
            break;
      }
}

