#include<stdio.h>

main()
{
	unsigned int num, i, n, total;
	
	printf("introduza um n�mero INTEIRO E POSITIVO\n");
	
	scanf("%hd", &num);
	
	for (i=0; i<=num; i=i+2){
		printf("%hd ",i);
	}
	total=0;
			for(n=1; n<=num; n=n+2){
				total=total+n;
			}
	printf("A soma de todos os n�meros �mpares interm�dios � %hd", total);
}
