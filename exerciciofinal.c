 #include <stdio.h>
 #include <stdlib.h>
 
 main()
 
 {
	 char valor;
	 int a2=1, c;
	 float conjunto=100, total=0;
	 printf("Deve introduzir 5 algarismos desta forma: c c c, c c");
	 while(a2=<6){
	if (a2=4){
		printf("Introduza uma vírgula");
		scanf("%c", &valor);
			if (valor!=','){
			printf("ERRO! Devia digitar uma vírgula);
			exit(1);
			}
	}
	else{
		printf("introduza o %dº algarismo", a2);
		scanf("%c", &valor);
			if(valor >= '0' && valor <= '9') {
			c = (int)valor - '0';
			total=total + c*conjunto;
			conjunto=conjunto/10;
			}
			else{
			printf("Erro! Devia digitar um algarismo");
			exit(1);
			}
		}
		a2=a2+1;
	}
	printf("%f", total);
	printf("%E", total);
}