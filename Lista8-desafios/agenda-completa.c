#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h> 

//Sistema de agenda com cadastro, pesquisa por nome, ordenação alfabética, alteração e remoção de registros.
//Utiliza struct para armazenar nome, endereço e telefone de até 5 pessoas.

#define MAX_PESSOAS 5
typedef struct pessoa{
	char nome[20];
	char endereco[50];	
	char telefone[20];
	
}Pessoa;

/* --- Prototypes --- */
Pessoa lerPessoa(void);
void cadastraPessoa(Pessoa pessoas[], int *qtdCadastro, Pessoa nova);
void pesquisaPorNome(Pessoa pessoas[], int qtdCadastro, const char *nome);
void alteraRegistro(Pessoa pessoas[], const char *nome, int qtdCadastro);
void removerPessoa(Pessoa pessoas[], int *qtdCadastro, int indice);
void ordemAlfabetica(Pessoa pessoas[], int qtdCadastro);
int menuDeOpcoes(void);

/* --- Implementations --- */

Pessoa lerPessoa(){
	Pessoa p;
	
		printf("Digite o nome: ");
		fgets(p.nome,sizeof(p.nome),stdin);
		p.nome[strcspn(p.nome, "\n")] = '\0';	
		
		printf("Digite seu endereço: ");
		fgets(p.endereco,sizeof(p.endereco), stdin);
		p.endereco[strcspn(p.endereco, "\n")] = '\0';
		
		printf("Digite seu telefone: ");
		fgets(p.telefone,sizeof(p.telefone), stdin);
		p.telefone[strcspn(p.telefone, "\n")] = '\0';
		
		return p;
}

int buscaRegistroPorIndice(int qtdCadastro, int indice){
	if(indice <0 || indice >= qtdCadastro){
		printf("indice invalido!\n");
		return 0;
	}
	return 1;
}

void cadastraPessoa(Pessoa pessoas[], int *qtdCadastro, Pessoa p){
    pessoas[*qtdCadastro] = p;
    (*qtdCadastro)++;
    printf("Pessoa cadastrada com sucesso!\n");
}

void pesquisaPorNome(Pessoa pessoas[], int qtdCadastro, const char *nome){
	int encontrou = 0;
	
	for(int i = 0;i < qtdCadastro;i++){
		if(strcmp(pessoas[i].nome, nome) == 0){
			printf("\n[Pessoa encontrada - indice %d]\nNome: %s\nEndereco: %s\nTelefone: %s\n",
			i,pessoas[i].nome, pessoas[i].endereco, pessoas[i].telefone);
			encontrou = 1;
		}
	}
	if(!encontrou){
		printf("Pessoa não cadastrada\n");
	}
}

void alteraRegistro(Pessoa pessoas[], const char *nome, int qtdCadastro){
	
	int encontrado = 0;
	for(int i = 0;i < qtdCadastro;i++){
		if(strcmp(pessoas[i].nome, nome) == 0){
			printf("Digite o novo nome: ");
    		fgets(pessoas[i].nome, sizeof(pessoas[i].nome), stdin);
    		pessoas[i].nome[strcspn(pessoas[i].nome, "\n")] = '\0';

    		printf("Digite o novo endereco: ");
    		fgets(pessoas[i].endereco, sizeof(pessoas[i].endereco), stdin);
    		pessoas[i].endereco[strcspn(pessoas[i].endereco, "\n")] = '\0';

    		printf("Digite o novo telefone: ");
    		fgets(pessoas[i].telefone, sizeof(pessoas[i].telefone), stdin);
    		pessoas[i].telefone[strcspn(pessoas[i].telefone, "\n")] = '\0';
			
			encontrado = 1;	
			printf("Alterado com sucesso!\n");
			break;
		}
	}	
 	if(!encontrado){
 		printf("Pessoa não econtrada!\n");
	 }
}

void removerPessoa(Pessoa pessoas[], int *qtdCadastro, int indice){
	
	if(!buscaRegistroPorIndice(*qtdCadastro, indice))return;
	
	for(int i = indice;i < *qtdCadastro - 1;i++){
		pessoas[i] = pessoas[i + 1];
	}
	(*qtdCadastro)--;
	
	printf("Pessoa removida com sucesso.\n");
}

void ordemAlfabetica(Pessoa cadastradas[], int qtdCadastro){

	Pessoa temp;
	
	for(int i = 0;i < qtdCadastro;i++){
		for(int j = 0;j < qtdCadastro - i - 1;j++){
			if(strcmp(cadastradas[j].nome, cadastradas[j + 1].nome) > 0){
				temp = cadastradas[j];
				cadastradas[j] = cadastradas[j + 1];
				cadastradas[j + 1] = temp;	
			}
			
		}
	}
	
	printf("\n--- Pessoas em ordem alfabética ---\n");
	for (int i = 0; i < qtdCadastro; i++) {
        printf("\nNome: %s\nEndereco: %s\nTelefone: %s\n",
            cadastradas[i].nome,
            cadastradas[i].endereco,
			cadastradas[i].telefone);
	}
}

/* Método principal */ 

int menuDeOpcoes(){
	
	int opcao = 0;
	printf("\nMenu de cadastro\n"
			"1 - Cadastro.\n"
			"2 - Pesquisa por nome.\n"
			"3 - Exibir cadastros em ordem alfabetica.\n"
			"4 - Alterar registro digitado com erro.\n"
			"5 - Remover cadastro.\n"
			"6 - Sair do programa.\n"
			"\nEscolha uma opcao: ");
			scanf("%i", &opcao);
			getchar();
			
			return opcao;
}
int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	Pessoa pessoas[MAX_PESSOAS];
	int qtdCadastro = 0;
	int opcao;
	
	while(1){
				
		opcao = menuDeOpcoes();
		if(opcao == 6){
			break;
		}
		
		switch(opcao){
			case 1:{
				if (qtdCadastro >= MAX_PESSOAS) {
                    printf("Numero maximo de pessoas cadastradas.\n");
                    break;
            	}
				Pessoa nova = lerPessoa();
				cadastraPessoa(pessoas,&qtdCadastro,nova);
				break;
			}
			
			case 2:{
				if(qtdCadastro == 0){
					printf("Nenhum cadastro existente.\n");
					break;
				}
				char nomeBusca[20];
				printf("Digite o nome para pesquisar: ");
                fgets(nomeBusca, sizeof nomeBusca, stdin);
                nomeBusca[strcspn(nomeBusca, "\n")] = '\0';
                pesquisaPorNome(pessoas, qtdCadastro, nomeBusca);
                break;
			}
				
            case 3:
				ordemAlfabetica(pessoas, qtdCadastro);
				break;
			case  4:{
				if(qtdCadastro == 0){
					printf("Nenhum cadastro para alterar.\n");
				}
				char nomeAlterar[20];
				printf("Digite o nome para alterar: ");
				fgets(nomeAlterar, sizeof nomeAlterar, stdin);
				nomeAlterar[strcspn(nomeAlterar, "\n")] = '\0';
				alteraRegistro(pessoas, nomeAlterar, qtdCadastro);
				break;			
			}
			case 5:{
				if(qtdCadastro == 0){
					printf("Não há cadastros para remover.\n");
				}
				int numRegistro = 0;
				printf("Digite o número do registro que deseja remover: ");
				scanf("%i",&numRegistro);
				getchar();
				removerPessoa(pessoas, &qtdCadastro, numRegistro);
				break;
			}
			default:
				printf("Opção inválida tente novamente.\n");
		}
		printf("\n\nPressione qualquer tecla para continuar...");
		getch();            
		system("cls");  
		opcao = 0;
	}
	printf("Programa encerrado :)");
}

