#include <stdio.h>
#include <stdlib.h>
main(){
	int coluna, linha, cbarco, lbarco;
	int dical, dicac;
	int cbarcoj2, lbarcoj2;
	
	printf("Jogador 1 \n Defina o local do barco");
	printf("qual a coluna do barco de 1 a 10: ");
	scanf("%d",&cbarco);
	printf("qual a linha do barco de 1 a 5: ");
	scanf("%d",&lbarco);
	
	for(linha=1; linha<=5; linha++){
		
		for(coluna=1; coluna<=10; coluna++){
			if (linha == lbarco && coluna == cbarco){
				printf(" B ");
			}else{
				printf(" ~ ");	
			}	
		}
		printf(" \n");
		
	}
	system("pause");
	system("cls");
	while(1){
		printf("\n\nJogador 2 \n Acerte o Barco\n");
		printf("qual a coluna do barco de 1 a 10: ");
		scanf("%d",&cbarcoj2);
		printf("qual a linha do barco de 1 a 5: ");
		scanf("%d",&lbarcoj2);
		
		for(linha=1; linha<=5; linha++){
			
			
			for(coluna=1; coluna<=10; coluna++){
				if (linha == lbarcoj2 && coluna == cbarcoj2){
					
					if(cbarco == cbarcoj2 && lbarco == lbarcoj2){
						printf(" B ");
					}else{
						printf(" * ");
					}
					
				}else{
					printf(" ~ ");	
				}	
			}
			printf(" \n");
			
		}
		if(cbarco != cbarcoj2 && lbarco != lbarcoj2){
			printf("você errou!\n\n");
			printf("Dica: \n\n");
			dical = lbarco - lbarcoj2;
			dicac = cbarco - cbarcoj2;
			if(dicac>0){
				printf("O barco esta mais para direita e ");
			}else{
				printf("O barco esta mais para esquerda e ");	
			}
			
			if(dical>0){
				printf("mais para baixo\n\n");
			}else{
				printf("mais para cima\n\n");	
			}
		}else{
		}
		
	}
	printf("\n\nParabens Jogador 2 você acerou!\n\n");

	
	system("pause");
}

