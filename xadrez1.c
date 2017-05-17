#include <stdio.h>
#include<stdlib.h>

typedef struct {
char file, rank;
}SQUARE;


typedef struct{
int state;
int type;
char color;
SQUARE square;
}PIECE;

void menu();
void Jogar();
void showBoard(PIECE pieces[32]){
	char piece;
	int i, j;
	int board[10][10] = {-1, 1, 2, 3, 4, 5, 6, 7, 8, -1,
	    16, 0, 0,0, 0, 0, 0, 0, 0, 16,
	    15, 0, 0, 0, 0, 0, 0, 0, 0, 15,
	    14, 0, 0, 0, 0, 0, 0, 0, 0, 14,
	    13, 0, 0, 0, 0, 0, 0, 0, 0, 13,
	    12, 0, 0, 0, 0, 0, 0, 0, 0, 12,
	    11, 0, 0, 0, 0, 0, 0, 0, 0, 11,
	    10, 0, 0, 0, 0, 0, 0, 0, 0, 10,
	    9, 0, 0, 0, 0, 0, 0, 0, 0, 9,
	    -1, 1, 2, 3, 4, 5, 6, 7, 8, -1
	};
	int pieceIndex =  0;
	int pieceSquare[2];
	for (pieceIndex = 0; pieceIndex < 32; pieceIndex++){
		if(pieces[pieceIndex].state==1){
			pieceSquare[0] = pieces[pieceIndex].square.file - 'a' + 1;
			pieceSquare[1] = '8' - pieces[pieceIndex].square.rank  + 1;
			board[ pieceSquare[1] ][ pieceSquare[0] ] = ( pieces[pieceIndex].color == 'w' ? pieces[pieceIndex].type : -pieces[pieceIndex].type) ;
		}
	}
	    for (i = 0; i < 10; i++) {
	        printf("\n");
	        for (j = 0; j < 10; j++) {
	            switch (board[i][j]) {
	                case -1:
	                    piece = ' ';
	                    break;
	                case 0:
	                    piece = ' ';
	                    break;
	                case 1:
	                    piece = 'a';
	                    break;
	                case 2:
	                    piece = 'b';
	                    break;
	                case 3:
	                    piece = 'c';
	                    break;
	                case 4:
	                    piece = 'd';
	                    break;
	                case 5:
	                    piece = 'e';
	                    break;
	                case 6:
	                    piece = 'f';
	                    break;
	                case 7:
	                    piece = 'g';
	                    break;
	                case 8:
	                    piece = 'h';
	                    break;
	                case 9:
	                    piece = '1';
	                    break;
	                case 10:
	                    piece = '2';
	                    break;
	                case 11:
	                    piece = '3';
	                    break;
	                case 12:
	                    piece = '4';
	                    break;
	                case 13:
	                    piece = '5';
	                    break;
	                case 14:
	                    piece = '6';
	                    break;
	                case 15:
	                    piece = '7';
	                    break;
	                case 16:
	                    piece = '8';
	                    break;
	                case 100:
	                    piece = 'P';
	                    break;
	                case 300:
	                    piece = 'N';
	                    break;
	                case 305:
	                    piece = 'B';
	                    break;
	                case 500:
	                    piece = 'R';
	                    break;
	                case 900:
	                    piece = 'Q';
	                    break;
	                case 2000:
	                    piece = 'K';
	                    break;
	                case -100:
	                    piece = 'p';
	                    break;
	                case -300:
	                    piece = 'n';
	                    break;
	                case -305:
	                    piece = 'b';
	                    break;
	                case -500:
	                    piece = 'r';
	                    break;
	                case -900:
	                    piece = 'q';
	                    break;
	                case -2000:
	                    piece = 'k';
	                    break;
	            }
	            if ((i != 0 && j != 0) && (i != 9 && j != 9)) {
	                if (((j % 2 != 0 && i % 2 != 0) || (i % 2 == 0 && j % 2 == 0)))
	                    printf("%c[%d;%dm %c %c[%dm", 27, (piece<'a')?36:35, 47, piece, 27, 0); //branco
	                else
	                    printf("%c[%d;%dm %c %c[%dm", 27, (piece<'a')?36:35, 40, piece, 27, 0); //preto
	            } else printf("%c[%d;%dm %c %c[%dm", 27, 37, 44, piece, 27, 0); // branco

	        }
	    }
	    printf("\n\n");
}


/*Funções*/

/*Função continuar/jogar*/

void continua(PIECE j[32]){
	showBoard(j);
	Jogar(j);
	
	
}
/*void cavalo(PIECE v[32]){
	printf("bla");
}
*/
 w(PIECE v[32]){
	 int j;
	 char nome[20];
	
			printf("Jogador branco introduza a posicao de origem no formato File,Rank ou s para sair\n");
			printf("Origem:");gets(nome);
		
			if (nome[0]=='s'){
				menu(v);
			}
			else {
					if ((nome[0]>='a' && nome[0]<='h')&&(nome[2]>='1' && nome[2]<='8')){
					for(j=0;j<32;j++)
						if ((v[j].square.rank==nome[2]) && (v[j].square.file==nome[0]) && (v[j].color=='w'))
						{
							
						switch(v[j].type){
								case 100: printf("Peca seleccionada: PAWN\n");break;
	                			case 300:printf("Peca seleccionada: KNIGHT\n");break;
	                			case 305:printf("Peca seleccionada: BISHOP\n");break;
	               				case 500:printf("Peca seleccionada: ROOK\n");break;
	                  			case 900:printf("Peca seleccionada: QUEEN\n");break;
	                			case 2000:printf("Peca seleccionada: KING\n");break;
				            }
			            
					           printf("Destino:"); gets(nome);
					          
				         }
				     	      
			    		
		    		
			    		else { 
				     		w(v);		
						}
				}
		}			
}			
 b(PIECE v[32]){
	int j;
	char nome[20];
	 		
			printf("Jogador preto introduza a posicao de origem no formato File,Rank ou s para sair\n");
			printf("Origem:");gets(nome);
		
			if (nome[0]=='s'){
				menu(v);
			}
			else {
					if ((nome[0]>='a' && nome[0]<='h')&&(nome[2]>='1' && nome[2]<='8')){
					for(j=0;j<32;j++)
						if ((v[j].square.rank==nome[2]) && (v[j].square.file==nome[0]) && (v[j].color=='w'))
						{
							
						switch(v[j].type){
								case -100: printf("Peca seleccionada: PAWN\n");break;
	                			case -300:printf("Peca seleccionada: KNIGHT\n");break;
	                			case -305:printf("Peca seleccionada: BISHOP\n");break;
	               				case -500:printf("Peca seleccionada: ROOK\n");break;
	                  			case -900:printf("Peca seleccionada: QUEEN\n");break;
	                			case -2000:printf("Peca seleccionada: KING\n");break;
				            }
			            
					           printf("Destino:"); gets(nome);
					          
				            }
				     	      
			    		}
		    		
			    else { 
				    b(v) ;		
						
    			}
			}
	
			
} 
	
	
/*Função Jogar*/
void Jogar(PIECE v[32]){
	int i=1;
	
	while(1){
		if (i%2){
			 w(v);
			
		    }		
	    else {
		    b(v);
		    
		}
		
		i++;
	}
}		 	
		 

			
/*Função novo jogo*/						
void novojogo(PIECE v[32]){
	FILE *fg;
	PIECE b[32];
	fg = fopen("StartGame","r");
	int i;
	
	if (fg==NULL){
		printf("Impossivel abrir o ficheiro");
	}
	else {
		for(i=0;i<32;i++){
		  fscanf(fg,"%c;%c;%d;%d;%c/\n", &v[i].square.file, &v[i].square.rank, &v[i].state, &v[i].type, &v[i].color);
		
		}
	
			showBoard(v);
			Jogar(v);
    }
   
    fclose(fg);
    
    
}
/*Função Salvar jogo*/

void salvar(PIECE s[32]){
	FILE *gi;
	char nome[100];
	
	int i;
	
			printf("Introduza o nome do ficheiro a salvar\n");
    		scanf("%s",&nome);
    		
    			gi = fopen(nome,"w");
				for(i=0;i<32;i++){
		   			fscanf(gi,"%c;%c;%d;%d;%c/\n", &s[i].square.file, &s[i].square.rank, &s[i].state, &s[i].type, &s[i].color);
    			}
    			fclose(gi);
    	

}

/*Função carregar jogo*//*jogar*/
void carregarjogo(PIECE b[32]){
	FILE *jk;
	char c[100];	
	int i;
		printf("Escolha o nome do ficheiro a carregar:\n");
		scanf("%s",&c);
		
		jk = fopen(c,"r");
		
		if (jk==NULL){
			printf("Ficheiro Invalido");
		}
		else {
			printf("Ficheiro carregado com sucesso!Continue o seu jogo\n");
				for(i=0;i<32;i++){
		  			fscanf(jk,"%c;%c;%d;%d;%c/\n", &b[i].square.file, &b[i].square.rank, &b[i].state, &b[i].type, &b[i].color);
				}
			showBoard(b);
		}
		fclose(jk);
		}
		
		
		

			
		    
			
			
	

void menu(PIECE v[32]){
	
	
	 char opcao[100];
	
	
   			printf("*Jogo de Xadrez*\n");
			printf("0 - Sair \n");
			printf("1 - Novo Jogo \n");
			printf("2 - Carregar Jogo\n");
			printf("3 - Salvar Jogo\n");
			printf("4 - Continuar Jogo\n");
			gets(opcao);
	
			switch(opcao[0]){
							case '0': exit(1);break;
							case '1': novojogo(v);break;
							case '2': carregarjogo(v);break;
							case '3': salvar(v);break;
							case '4':continua(v);break;
							default: menu(v);break;
						}
						
		
}	
main(){
	char i;
	PIECE p[32];
	
	menu(p);
   
	

}



























