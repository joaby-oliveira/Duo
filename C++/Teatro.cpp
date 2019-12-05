/*Autores: Joaby Oliveira, Adrian Jaquier;
  Data: 04/12/2019;
  Função: Sistema de um teatro.
*/


#include <stdio.h>
#include <windows.h>
#include <locale.h>

void charge() {
	for(int i = 0; i < 2; i++){
		printf("Carregando.\n");
		Sleep(400);
		system("cls");
		printf("Carregando..\n");
		Sleep(400);
		system("cls");
		/* TODO (jooj#1#): Colocar validação nos lugares com M ou I 
		                   respectivamente à meia ou inteira */
		/* TODO (jooj#1#): Colocar sistema de meia e inteir */
		printf("Carregando...\n");
		Sleep(400);
		system("cls");
	}
}

 
void charge ();

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int height = 50, width = 10, choice, col, row;
	float valTicket, totTicket;
    char chair[25][20];
	bool broke = false;
//		charge();
		
		for(int i = 0; i <= 24; i++){
			for(int j = 0; j <= 19; j++){
				chair[i][j] = 'L';
			}
		}
		
		printf("\n---------------------------TEATHSYS---------------------------\n");
		
		
		for(int i = 0; i < 25; i++){	
			for(int j = 0; j <= 18; j++){
	            printf("|%c|", chair[i][j]);
				if(j == 18){
					printf("\n");
				}
			}
		}

		printf("\n---------------------------TEATHSYS---------------------------\n");
		
		/*Modify by Adrian: Seats dimension changed to 25x20*/
		Sleep(500);
		system("pause");
		system("cls");
//		charge();
	do{
		system	("cls");
		printf("SEJA BEM VINDO AO TEATHSYS");
		printf("\n[1]Abrir um espetáculo\n[2]Verificar um espetáculo\n[3]Encerrar um espetáculo");
		printf("\nDigite o número correspondente ao que deseja fazer: ");
		scanf("%i", &choice);
		Sleep(500);
		system("cls");
		switch(choice){
			case 1:
				printf("[1]Informar o tamanho da sala e o valor do ingresso.");
				printf("\nDigite o número correspondente à função que deseja: ");	
				scanf("%i", &choice);
				Sleep(500);
				system("cls");
				if (chair [0][0] != 'O'){
					switch(choice){
					case 1:
						do{	
						    printf("Lotação máxima de 500 pessoas. \nDisponíveis 25 Fileiras com 20 Cadeiras em cada.");
							printf("\nDigite a quantidade de fileiras [Max. 25]: ");
							scanf("%i", &height);
							Sleep(500);
							system("cls");
							if(height > 25){
								printf("Inválido!!! Digite a quantidade de fileiras [Max. 25]: ");
								scanf("%i", &height);
								Sleep(500);
								system("cls");
							}
							
							printf("\nDigite quantas cadeiras quer em cada fileira [Max. 20]: ");
							scanf("%i", &width);
						   	Sleep(500);
							system("cls");
						   	if(width > 20){
						   		printf("\nInválido!!! \nDigite quantas cadeiras quer em cada fileira [Max. 20]: ");
								scanf("%i", &width);
								Sleep(500);
								system("cls");
							   }
						   	while(height * width > 500){
								printf("Lotação máxima: 500 pessoas. \nInsira um tamanho menor\n");
								printf("Digite a quantidade de fileiras: ");
								scanf("%i", &height);
								Sleep(500);
								system("cls");
								printf("\nDigite quantas cadeiras quer em cada fileira: ");
								scanf("%i", &width);
							}
	//					    width = width - 1;
	//						height = height - 1;
							
								for(int i = 0; i < height; i++){
									for(int j = 0; j < width; j++){
										chair[i][j] = 'O';
									}
								}
							
							for(int i = 0; i <= 24; i++){
								for(int j = 0; j <= 19; j++){
						            printf("|%c|", chair[i][j]);
									if(j == 19){
										printf("\n");
									}
								}
							}
							
						}while(height * width > 500);
						Sleep(500);
						system("pause");
						system("cls");
						charge ();
						system("cls");
						
						printf("\nDigite o valor do ingresso: ");
						scanf("%f", &valTicket);
						totTicket = 0;
						printf("O valor total dos ingressos é: R$ %.2f \n", totTicket);
						Sleep(200);
						system("cls");
						charge();
						break;
						
						}
						
				
				}
				else{
					printf("O teatro ja existe\n");
					Sleep(800);
					break;
				}
		break;
			case 2:
	
				printf("[1]Verificar mapa do teatro\n[2]Verificar parciais\n[3]Vender um lugar\n[4]Ver o valor total arrecadado");
				printf("\nDigite o número correspondente à função que deseja: ");	
				scanf("%i", &choice);
				switch (choice){
					case 1:          
						printf("---------------------------TEATHSYS---------------------------\n");
						for(int i = 0; i < 25; i++){	
							for(int j = 0; j <= 18; j++){
					            printf("|%c|", chair[i][j]);
								if(j == 18){
									printf("\n");
								}
							}
						}
						printf("---------------------------TEATHSYS---------------------------\n");
						
						Sleep(200);
						system("pause");
						system("cls");
						charge ();	
						printf("Mapa verificado com sucesso!");
						break;
					
					case 2:
						/* TODO (#1#): Limpar tela ao pedir a função 2/3 */
						/* TODO (#1#): Adcionar as parciais
						               
						               
						                */
						/* TODO (#1#): Alinhar mapa do switch 2/1 */
						/* TODO (#1#): Apresentação melhor do sistema...
 */
						printf("Parciais verificadas com sucesso!");
						break;
					
					case 3:
						printf("[1]Inteira [2]Meia: ");
						printf("\nDigite o numero da função desejada: ");
						scanf("%i", &choice);
						switch(choice){
							case 1:
								
								printf("---------------------------TEATHSYS---------------------------\n");
								for(int i = 0; i < 25; i++){	
									for(int j = 0; j <= 18; j++){
						    	        printf("|%c|", chair[i][j]);
										if(j == 18){
										printf("\n");
										}
									}
								}		
								printf("---------------------------TEATHSYS---------------------------\n");
								
								printf("Digite a coluna da cadeira que deseja usar: ");
								scanf("%i", &col);
								
								printf("Digite a linha da cadeira que deseja usar: ");
								scanf("%i", &row);
								
								if(chair [col-1][row-1] == 'O'){
									chair [col-1][row-1] = 'I';
								}
								else{
									printf("Por favor, digite valores que correspondem a lugares com a letra 'O'\n(Que estão disponíveis para utilização)");
									system("pause");
									break;
								}
								
								
								totTicket = totTicket + valTicket;
								printf("Inteira escolhida com sucesso!");
								
								break;
							case 2:
								printf("Digite a coluna da cadeira que deseja usar: ");
								scanf("%i", &col);
								
								printf("Digite a linha da cadeira que deseja usar: ");
								scanf("%i", &row);
								
								if(chair [col-1][row-1] == 'O'){
									chair [col-1][row-1] = 'M';
								}
								else{
									printf("Por favor, digite valores que correspondem a lugares com a letra 'O'\n(Que estão disponíveis para utilização)");
									system("pause");
									break;
								}
								
								totTicket = totTicket + (valTicket / 2);
								
								printf("Meia escolhida com sucesso!");
								break;
						}
					case 4:
						printf("O valor total é de %.2f\n", totTicket);
						Sleep(1000);
						system("pause");
				}
				break;
			case 3:
				for(int i = 0; i <= 24; i++){
					for(int j = 0; j <= 19; j++){
						chair[i][j] = 'L';
					}
				}
				charge ();
				printf("Programa encerrado com sucesso.");
				Sleep(2000);
				break;
		}
	}while(choice != 1 || choice != 2 || choice != 3);
}





