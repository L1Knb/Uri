#include <stdio.h>

void selectionSort(int *, int);

int main(){
	int n, i;
	
	while(scanf("%d", &n) != EOF){		
		int cod[n];
        for(i = 0; i < n; i++)
            scanf("%d", &cod[i]);			
	    
        selectionSort(cod, n);

        for(i = 0; i < n; i++)
            printf("%04d\n", cod[i]);	
	}
	
	return 0;
}

void selectionSort(int *cod, int n){
	int i, j, aux, menor;
	
	for(i = 0; i < n; i++){
		menor = i;
		for(j = i+1; j < n; j++)
			if(cod[j] < cod[menor]) menor = j;
		
		aux = cod[i];
		cod[i] = cod[menor];
		cod[menor] = aux;
	}
}