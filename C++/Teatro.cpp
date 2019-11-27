#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	char chair[20][25];
	int alt = 0, larg = 0;
	
    printf("");
	scanf("%i", &alt);

	printf("");
	scanf("%i", &larg);

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
}
