#include <stdio.h>
#include <windows.h>
#include <locale.h>
 
int main(){
	setlocale(LC_ALL, "portuguese");
	int height = 50, width = 10, choice, valTicket, totTicket;

//Recebe o valor de altura e largura
//	while(height * width > 500){
//    printf("Digite a altura: ");
//	scanf("%i", &height);
//
//	printf("\nDigite a largura: ");
//	scanf("%i", &width);
//}
//    width = width - 1;
//	height = height - 1;

    char chair[25][20];

	for(int i = 0; i <= 24; i++){
		for(int j = 0; j <= 19; j++){
			chair[i][j] = 'L';
		}
	}
	
	printf("---------------------------TEATHSYS---------------------------\n");
	
	printf("¦|%c|", chair[0][0]);
	for(int i = 0; i < 1; i++){	
		for(int j = 0; j <= 18; j++){
            printf("|%c|", chair[i][j]);
			if(j == 18){
				printf("¦\n¦");
			}
		}
	}
	
	for(int i = 0; i < 22; i++){	
		for(int j = 0; j <= 19; j++){
            printf("|%c|", chair[i][j]);
			if(j == 19){
				printf("¦\n¦");
			}
		}
	}
	
	for(int i = 0; i < 1; i++){	
		for(int j = 0; j <= 19; j++){
            printf("|%c|", chair[i][j]);
			if(j == 19){
				printf("¦\n");
			}
		}
	}
	
	printf("---------------------------TEATHSYS---------------------------\n");
	
	/*Modify by Adrian: Seats dimension changed to 25x20*/
	
	Sleep(3000);
	system("cls");

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
			switch(choice){
				case 1:
					do{	
					    printf("Lotação máxima de 500 pessoas. Disponíveis 25 Fileiras com 20 Cadeiras em cada.");
						printf("Digite a quantidade de fileiras [Max. 25]: ");
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
					   		printf("\nInválido!!! Digite quantas cadeiras quer em cada fileira [Max. 20]: ");
							scanf("%i", &width);
							Sleep(500);
							system("cls");
						   }
					   	while(height * width > 500){
							printf("Lotação máxima: 500 pessoas. Insira um tamanho menor\n");
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
					
					Sleep(10000);
					system("cls");
					
					printf("\nDigite o valor do ingresso: ");
					scanf("%i", &valTicket);
					totTicket = (height * width) * valTicket;
					printf("O valor total dos ingressos é: %i", totTicket);
					break;
					
					}
					
					break;
		case 2:
			/* TODO (Joaby#1#): Criar base da array com 20 ou 25 */
			/* TODO (Joaby#2#): A */
			
			printf("[1]Verificar mapa do teatro\n[2]Verificar parciais\n[3]Vender um lugar");
			printf("\nDigite o número correspondente à função que deseja: \n");	
			scanf("%i", &choice);
			switch (choice){
				case 1:
					printf("Mapa verificado com sucesso!");
					break;
				
				case 2:
					printf("Parciais verificadas com sucesso!");
					break;
				
				case 3:
					printf("[1]Inteira [2]Meia: ");
					printf("\nDigite o numero da função desejada: ");
					scanf("%i", &choice);
					switch(choice){
						case 1:
							printf("Inteira escolhida com sucesso!");
							break;
				
						case 2:
							printf("Meia escolhida com sucesso!");
							break;
					}
			}
			break;
		case 3:
			printf("Programa encerrado com sucesso.");
			break;
	}
}


