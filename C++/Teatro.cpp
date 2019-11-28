#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int alt = 501, larg = 501, escolha, val_sala, val_ingresso;
	
	while(alt * larg > 500){
    printf("Digite a altura: ");
	scanf("%i", &alt);

	printf("\nDigite a largura: ");
	scanf("%i", &larg);
}
    char chair[alt][larg];

    larg = larg - 1;
	alt = alt - 1;

	for(int i = 0; i <= alt; i++){
		for(int j = 0; j <= larg; j++){
			chair[i][j] = ' ' ;

		}
	}
	for(int i = 0; i <= alt; i++){
		for(int j = 0; j <= larg; j++){
            printf("| |");
			if(j == larg){
				printf("\n");
			}
		}
	}

	printf("Digite o número correspondente ao que deseja fazer.\n");
	printf("[1]Abrir um espetáculo\n[2]Verificar um espetáculo\n[3]Encerrar um espetáculo\n");
	scanf("%i", &escolha);
	switch(escolha){
		case 1:
			printf("Digite o número correspondente à função que deseja: \n");	
			printf("[1]Informar o tamanho da sala e o valor do ingresso. \n");
			scanf("%i", &escolha);
			switch(escolha){
				case 1:
					printf("Digite o tamanho da sala: ");
					scanf("%i", &val_sala);
					printf("\nDigite o valor do ingresso: ");
					scanf("%i", &val_ingresso);
					break;
					}
					break;
		case 2:
			printf("Digite o número correspondente à função que deseja: \n");	
			printf("[1]Verificar mapa do teatro\n[2]Verificar parciais\n[3]Vender um lugar");
			scanf("%i", &escolha);
			switch (escolha){
				case 1:
					printf("Digite o numero da função desejada:");
					printf("[1]Inteira [2]Meia: ");
					scanf("%i", &escolha);
					switch(escolha){
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
