#include <stdio.h>
 
int main() {
 
   short tamM, i, j, vaiUm, fimUm;
	
	while(scanf("%hd", &tamM) != EOF){
		
		short matriz[tamM][tamM];
		
		for(i = 0; i < tamM; i++)
			for(j = 0; j < tamM; j++){
				if(i == j) matriz[i][j] = 2;
				else if(i + j == tamM-1) matriz[i][j] = 3;
				else matriz[i][j] = 0;
			}
		
		vaiUm = tamM/3;
		fimUm = tamM-vaiUm;
		
		for(i = vaiUm; i < fimUm; i++)
			for(j = vaiUm; j < fimUm; j++){
				 matriz[i][j] = 1;
				
			}
		
		matriz[tamM/2][tamM/2] = 4;
		
		for(i = 0; i < tamM; i++){
			 for(j = 0; j < tamM; j++)
				 printf("%hd", matriz[i][j]);			 
			 
			 printf("\n");					
		 }
		 printf("\n");
				
	}
	return 0;
}