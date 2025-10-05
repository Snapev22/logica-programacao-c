#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(void){
	
	char produto[100];
	char formaPagamento;
	float preco;
	float precoFinal;
	int codigo;
	int qtd;
	
	printf("Digite o codigo do produto que deseja:\n"
           "1- Vaso de porcelana, preco = 125.10\n"
           "2- Caneta tinteiro, preco = 95.10\n"
           "3- Pierro, preco = 254.50\n"
           "4- Tamborim, preco = 850.40\n");
    scanf("%i", &codigo);
	printf("Digite a quantidade desejada do produto: ");
    scanf("%i", &qtd);
    
    if(codigo == 1){
    	strcpy(produto, "Vaso de porcelana");
    	preco = 125.10;
	}else if(codigo == 2){
    	strcpy(produto, "Caneta tinteiro");
    	preco = 95.10;
	}else if(codigo == 3){
    	strcpy(produto, "Pierro");
    	preco = 254.50;
	}else if(codigo == 4){
    	strcpy(produto, "Tamborim");
    	preco = 850.40;
    
	}else {
		printf("Codigo inexistente tente novamente.");
		return 1;		
	}
		
	precoFinal = preco * qtd;
	
	printf("Escolha a forma de pagamento: \n"
           "D para dinheiro (possui desconto de 10%) \n"
           "C para cartão (sem descontos): ");
    scanf(" %c", &formaPagamento);
	
	if(formaPagamento == 'D' || formaPagamento == 'd') {
   		 precoFinal -= precoFinal * 0.10;
	}else {
		precoFinal = preco;
	}
	
	printf("\nProduto escolhido: %s\n", produto);
    printf("Quantidade: %d\n", qtd);
    printf("Valor final da compra: R$ %.2f\n", precoFinal);
	
	return 0;
}











