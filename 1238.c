#include <stdio.h>
#include <string.h>

int main(){

	int numeroDeEntradas, tam1, tam2, menorTam, i, j;
	char frase1[50], frase2[50], resultado[numeroDeEntradas][100];

	scanf("%d", &numeroDeEntradas);
		
	for(i = 0; i < numeroDeEntradas; i++){
	
		scanf("%s", frase1);
		scanf("%s", frase2);
	
		tam1 = strlen(frase1);
		tam2 = strlen(frase2);
		
		if(tam1 > tam2) menorTam = tam2;
		else menorTam = tam1;
	
	
		//concatena até a menor string acabar
		for(j = 0; j < menorTam; j++){
		
			resultado[i][2*j] = frase1[j];
			resultado[i][2*j + 1] = frase2[j];
		
		}
		
		
		//aloca o resto da string maior
		if(menorTam == tam1 && menorTam == tam2){
			
			resultado[i][menorTam *2 ] = '\0';
			
			}else{
				if(menorTam == tam1){
		
					for(j = menorTam; j < tam2 +1; j++){
			
						resultado[i][2*menorTam + (j - menorTam)] = frase2[j];
			
					}
			
				}else{
			
					for(j = menorTam; j < tam1+1 ; j++){
			
						resultado[i][2*menorTam + (j - menorTam)] = frase1[j];
				
						}
			
					}
				}
	
		printf("%s\n", resultado[i]);
	
	}

return 0;
}
