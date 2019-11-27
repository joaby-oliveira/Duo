#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <ctype.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int alt = 501, larg = 501;
	
	while(isalnum(str[alt])){
    printf("");
	scanf("%i", &alt);

	printf("");
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
}
