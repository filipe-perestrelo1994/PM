#include <stdio.h>

main()
{
int numero, factorial;

printf("Digite um n�mero:\n");

scanf("%d", &numero);

	if(numero == 0){
	
		printf("O factorial de 0 � 1");
	}
	
	if(numero < 0){
		
		printf("Numero negativo");
		
		return;
	}
	
	if(numero == 1){
		
		printf("O factorial de 1 � 1");
	}
	
	if(numero > 1){
	printf("O factorial de %d=%d", numero, numero);
	for(factorial=1; numero>1; numero=numero-1){
 		printf("*%d", numero-1);
 		factorial=factorial*numero;
 		}
 		printf("=%d", factorial);
			 
	
	}
		
}
