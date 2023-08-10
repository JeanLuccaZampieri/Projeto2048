 #include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#define cima 119
#define CIMA 87
#define setaCima 72
#define baixo 115
#define BAIXO 83
#define setaBaixo 80
#define esquerda 97
#define ESQUERDA 65
#define setaEsq 75
#define direita 100
#define DIREITA 68
#define setaDir 77

	int telefone =0, cont=0,x=48,check=10, quant=0, i =0, cs=0, cn=0, cont_2=0,cont_0=0;
	char c,log_c[11], resp1, resp2, idioma='1';
	char jogador[10], senha[10], idade[3], jogador_atual[30];
	int matriz_atual[4][4], cod_atual=1, save=0, pont=0, dificuldade=1;
	struct cadastro{
		char senha[13];
		char jogador[13], idade[3];
		int matriz_jog[4][4];
		int cod, pont,dificuldade;
	}cad_jog[100];
	struct ranking{
		char nome[10], idade[10];
		int pont;
	}rank[100];
	void gotoxy(int x, int y){
	COORD coord;
   	coord.X = x;
  	coord.Y = y;
  	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
	
void telaInicial(){
	printf("                ************************************************************************************** \n");
	printf("                *       *****   *****   **   **      *       *   *   **    *   *****     ****        *\n");
	printf("                *       *    *  *       * * * *       *     *    *   * *   *   *    *   *    *       *\n");
	printf("                *       *****   ***     *  *  *        *   *     *   *  *  *   *    *   *    *       *\n");
	printf("                *       *    *  *       *     *         * *      *   *   * *   *    *   *    *       *\n");
	printf("                *       *****   *****   *     *          *       *   *    **   *****     ****        *\n");
	printf("                *                                                                                    *\n");
	printf("                *                                                                                    *\n");
	printf("                *                                 ****     ****                                      *\n");
	printf("                *                                *    *   *    *                                     *\n");
	printf("                *                                ******   *    *                                     *\n");
	printf("                *                                *    *   *    *                                     *\n");
	printf("                *                                *    *    ****                                      *\n");
	printf("                *                                                                                    *\n");
	printf("                *                                                                                    *\n");
	printf("                *                       +++++    ++++++       +      ++++                            *\n");
	printf("                *                           +    +    +     + +     +    +                           *\n");
	printf("                *                       +++++    +    +    +  +      ++++                            *\n");
	printf("                *                       +        +    +   ++++++    +    +                           *\n");
	printf("                *                       +++++    ++++++       +      ++++                            *\n");
	printf("                *                                                                                    *\n");
	printf("                *                                                                                    *\n");
	printf("                *                                                                                    *\n");
	printf("                *                  PRESSIONE 'ESPAÇO' PARA ENTRAR E 'ESC' PARA SAIR                  *\n");
	printf("                *                                                                                    *\n");
	printf("                *                                                                                    *\n");
	printf("                *                                                                                    *\n");
	printf("                *                                                                                    *\n");
	printf("                **************************************************************************************\n"); 
	gotoxy(81, 23);
	resp1 = getch();
	system("cls");
}
void telaOpcoes(){
	if(idioma == '1'){
		printf("               **************************************************************************************\n");
		printf("               *2048     2048    2048                                          2048    2048    2048 *\n");
		printf("               *    2048     2048        00000    000000       0      0000         2048    2048     *\n");
		printf("               *2048    2048     2048        0    0    0     0 0     0    0    2048    2048    2048 *\n");
		printf("               *    2048     2048        00000    0    0    0  0      0000         2048    2048     *\n");
		printf("               *2048    2048    2048     0        0    0   00000     0    0    2048    2048    2048 *\n");
		printf("               *    2048    2048         00000    000000       0      0000         2048    2048     *\n");
		printf("               *2048    2048    2048                                           2048    2048    2048 *\n");
		printf("               **************************************************************************************\n");
		printf("               *                                                                                    *\n");
		printf("               *                                                                                    *\n");
		printf("               *                             SELECIONE UMA OPÇÃO:                                   *\n");
		printf("               *                                                                                    *\n");
		printf("               *                                                                                    *\n");
		printf("               *                                                                                    *\n");
		printf("               *                             [1] ENTRAR NO JOGO                                     *\n");
		printf("               *                             [2] CADASTRAR JOGADOR                                  *\n");
		printf("               *                             [3] ENTRAR NO RANKING                                  *\n");
		printf("               *                             [4] PERSONALIZAR                                       *\n");
		printf("               *                             [5] IDIOMA                                             *\n");
		printf("               *                             [6] VOLTAR                                             *\n");
		printf("               *                                                                                    *\n");
		printf("               *                                                                                    *\n");
		printf("               *                                                                                    *\n");
		printf("               *                                                                                    *\n");
		printf("               *                                                                                    *\n");
		printf("               *                                                                                    *\n");
		printf("               **************************************************************************************\n"); 
	}
	if(idioma == '2'){
		printf("               **************************************************************************************\n");
		printf("               *2048     2048    2048                                          2048    2048    2048 *\n");
		printf("               *    2048     2048        00000    000000       0      0000         2048    2048     *\n");
		printf("               *2048    2048     2048        0    0    0     0 0     0    0    2048    2048    2048 *\n");
		printf("               *    2048     2048        00000    0    0    0  0      0000         2048    2048     *\n");
		printf("               *2048    2048    2048     0        0    0   00000     0    0    2048    2048    2048 *\n");
		printf("               *    2048    2048         00000    000000       0      0000         2048    2048     *\n");
		printf("               *2048    2048    2048                                           2048    2048    2048 *\n");
		printf("               **************************************************************************************\n");
		printf("               *                                                                                    *\n");
		printf("               *                                                                                    *\n");
		printf("               *                             CHOOSE AN OPTION:                                      *\n");
		printf("               *                                                                                    *\n");
		printf("               *                                                                                    *\n");
		printf("               *                                                                                    *\n");
		printf("               *                             [1] ENTER THE GAME                                     *\n");
		printf("               *                             [2] REGISTER PLAYER                                    *\n");
		printf("               *                             [3] ENTER IN RANKING                                  *\n");
		printf("               *                             [4] PERSONALIZE                                        *\n");
		printf("               *                             [5] LANGUAGE                                           *\n");
		printf("               *                             [6] RETURN                                             *\n");
		printf("               *                                                                                    *\n");
		printf("               *                                                                                    *\n");
		printf("               *                                                                                    *\n");
		printf("               *                                                                                    *\n");
		printf("               *                                                                                    *\n");
		printf("               *                                                                                    *\n");
		printf("               **************************************************************************************\n");
	}
	gotoxy(70, 18);
	resp2 = getch();
	system("cls");	
	
}
void telaDeCadastro(){
	int cad_inv=0;
	char jog_c[10], idade_c[3], senha_c[10];
	do{
		if(idioma =='1'){
		
			printf("               **************************************************************************************\n");
			printf("               *2048     2048    2048                                          2048    2048    2048 *\n");
			printf("               *    2048     2048        00000    000000       0      0000         2048    2048     *\n");
			printf("               *2048    2048     2048        0    0    0     0 0     0    0    2048    2048    2048 *\n");
			printf("               *    2048     2048        00000    0    0    0  0      0000         2048    2048     *\n");
			printf("               *2048    2048    2048     0        0    0   00000     0    0    2048    2048    2048 *\n");
			printf("               *    2048    2048         00000    000000       0      0000         2048    2048     *\n");
			printf("               *2048    2048    2048                                           2048    2048    2048 *\n");
			printf("               **************************************************************************************\n");
			printf("               *                          _________________                                         *\n");
			printf("               *                         | NOME:           |                                        *\n");
			printf("               *                         |_________________|                                        *\n");
			printf("               *                         | IDADE:          |                                        *\n");
			printf("               *                         |_________________|                                        *\n");
			printf("               *                         | SENHA:          |                                        *\n");
			printf("               *                         |_________________|                                        *\n");
			printf("               *                                                                                    *\n");
			printf("               *                                                                                    *\n");
			printf("               *                                                                                    *\n");
			printf("               *                                                                                    *\n");
			printf("               *                                                                                    *\n");
			printf("               *                                                                                    *\n");
			printf("               *                                                                                    *\n");
			printf("               *                                                                                    *\n");
			printf("               *                                                                                    *\n");
			printf("               *                                                                                    *\n");
			printf("               *                                                                                    *\n");
			printf("               **************************************************************************************\n"); 
		}
		if(idioma == '2'){
			printf("               **************************************************************************************\n");
			printf("               *2048     2048    2048                                          2048    2048    2048 *\n");
			printf("               *    2048     2048        00000    000000       0      0000         2048    2048     *\n");
			printf("               *2048    2048     2048        0    0    0     0 0     0    0    2048    2048    2048 *\n");
			printf("               *    2048     2048        00000    0    0    0  0      0000         2048    2048     *\n");
			printf("               *2048    2048    2048     0        0    0   00000     0    0    2048    2048    2048 *\n");
			printf("               *    2048    2048         00000    000000       0      0000         2048    2048     *\n");
			printf("               *2048    2048    2048                                           2048    2048    2048 *\n");
			printf("               **************************************************************************************\n");
			printf("               *                          _________________                                         *\n");
			printf("               *                         | NAME:           |                                        *\n");
			printf("               *                         |_________________|                                        *\n");
			printf("               *                         | AGE:            |                                        *\n");
			printf("               *                         |_________________|                                        *\n");
			printf("               *                         | PASS:           |                                        *\n");
			printf("               *                         |_________________|                                        *\n");
			printf("               *                                                                                    *\n");
			printf("               *                                                                                    *\n");
			printf("               *                                                                                    *\n");
			printf("               *                                                                                    *\n");
			printf("               *                                                                                    *\n");
			printf("               *                                                                                    *\n");
			printf("               *                                                                                    *\n");
			printf("               *                                                                                    *\n");
			printf("               *                                                                                    *\n");
			printf("               *                                                                                    *\n");
			printf("               *                                                                                    *\n");
			printf("               **************************************************************************************\n"); 
		}
		gotoxy(48, 10);
		cad_inv=0;
		x=48;
		fflush(stdin);
		cont=0;
		gotoxy(x,10);
		while((c=getch())!=13){
			gotoxy(x,10);
			if(c != 8){
				jog_c[cont]=c;
				if(cont<10 ){
					x++;
					cont++;
					printf("%c", c);
				}
				cont_2=cont;
			}
			if(c==8 &&cont>0){
				cont_2--;
				x=x-1;
				gotoxy(x,10);
				printf(" ");
				jog_c[cont_2]=' ';
				cont--;
			}
		}
		for(cont_2=cont-1;cont_2>-1;cont_2--){
			if(jog_c[cont_2]!=' ' && cont<11 &&cont>0){
				jogador[cont_2]=jog_c[cont_2];
			}
		}
		jogador[cont]='\0';
		x=49;
		cont=0;
		gotoxy(x,12);
		while((c=getch())!=13){
			gotoxy(x,12);
			if(c != 8){
				idade_c[cont]=c;
				if(cont<3){
					x++;
					cont++;
					printf("%c", c);
				}
				cont_2=cont;
			}
			if(c==8&&cont>0){
				cont_2--;
				x=x-1;
				gotoxy(x,12);
				printf(" ");
				idade_c[cont_2]=' ';
				cont--;
			}
		}
		for(cont_2=cont-1;cont_2>-1;cont_2--){
			if(idade_c[cont_2]!=' ' && cont<10&&cont>0){
				idade[cont_2]=idade_c[cont_2];
			}
		}
		idade[cont]='\0';
		x=49;
		cont=0;
		gotoxy(x,14);
		while((c=getch())!=13){
			gotoxy(x,14);
			if(c != 8){
				senha_c[cont]=c;
				if(cont<10 ){
					x++;
					cont++;
					printf("%c", c);
				}
				cont_2=cont;
			}
			if(c==8 &&cont>0){
				cont_2--;
				x=x-1;
				gotoxy(x,14);
				printf(" ");
				senha_c[cont_2]=' ';
				cont--;
			}
		}
		for(cont_2=cont-1;cont_2>-1;cont_2--){
			if(senha_c[cont_2]!=' ' && cont<11 &&cont>0){
				senha[cont_2]=senha_c[cont_2];
			}
		}
		senha[cont]='\0';

		
		for(quant=0;quant<100;quant++){
			if(strcmp(cad_jog[quant].jogador, jogador)== 0){
				cad_inv=1;
				gotoxy(41, 18);
				if(idioma=='1'){
			 		printf("Cadastro invalido");
			 	}
			 	else{
			 		printf("Invalid registration");
			 		
				 }
				getch();
				system("cls");
			}	
		}
		if(cad_inv == 0){
			strcpy(cad_jog[cs].jogador, jogador);
			strcpy(cad_jog[cs].senha, senha);
			strcpy(cad_jog[cs].idade, idade);
			cs++;	
		}
	}while(cad_inv == 1);
	
	resp1 = '1';
}
void Idioma(){
	int i=0;
		while (i != '3'  ){
			if(idioma=='1'){
				printf("               **************************************************************************************\n");
				printf("               *2048     2048    2048                                          2048    2048    2048 *\n");
				printf("               *    2048     2048        00000    000000       0      0000         2048    2048     *\n");
				printf("               *2048    2048     2048        0    0    0     0 0     0    0    2048    2048    2048 *\n");
				printf("               *    2048     2048        00000    0    0    0  0      0000         2048    2048     *\n");
				printf("               *2048    2048    2048     0        0    0   00000     0    0    2048    2048    2048 *\n");
				printf("               *    2048    2048         00000    000000       0      0000         2048    2048     *\n");
				printf("               *2048    2048    2048                                           2048    2048    2048 *\n");
				printf("               **************************************************************************************\n");
				printf("               *                                                                                    *\n");
				printf("               *                                                                                    *\n");
				printf("               *                                                                                    *\n");
				printf("               *                                ESCOLHA O IDIOMA:                                   *\n");
				printf("               *                                                                                    *\n");
				printf("               *                                                                                    *\n");
				printf("               *                                                                                    *\n");
				printf("               *                                                                                    *\n");
				printf("               *                                 [1] PORTUGUÊS                                      *\n");
				printf("               *                                                                                    *\n");
				printf("               *                                                                                    *\n");
				printf("               *                                                                                    *\n");
				printf("               *                                 [2] INGLÊS                                         *\n");
				printf("               *                                                                                    *\n");
				printf("               *                                                                                    *\n");
				printf("               *                                                                                    *\n");
				printf("               *                                 [3]VOLTAR                                          *\n");
				printf("               *                                                                                    *\n");
				printf("               **************************************************************************************\n"); 
			}
			else{
				printf("               **************************************************************************************\n");
				printf("               *2048     2048    2048                                          2048    2048    2048 *\n");
				printf("               *    2048     2048        00000    000000       0      0000         2048    2048     *\n");
				printf("               *2048    2048     2048        0    0    0     0 0     0    0    2048    2048    2048 *\n");
				printf("               *    2048     2048        00000    0    0    0  0      0000         2048    2048     *\n");
				printf("               *2048    2048    2048     0        0    0   00000     0    0    2048    2048    2048 *\n");
				printf("               *    2048    2048         00000    000000       0      0000         2048    2048     *\n");
				printf("               *2048    2048    2048                                           2048    2048    2048 *\n");
				printf("               **************************************************************************************\n");
				printf("               *                                                                                    *\n");
				printf("               *                                                                                    *\n");
				printf("               *                                                                                    *\n");
				printf("               *                                CHOOSE LANGUAGE:                                    *\n");
				printf("               *                                                                                    *\n");
				printf("               *                                                                                    *\n");
				printf("               *                                                                                    *\n");
				printf("               *                                                                                    *\n");
				printf("               *                                 [1] PORTUGUESE                                     *\n");
				printf("               *                                                                                    *\n");
				printf("               *                                                                                    *\n");
				printf("               *                                                                                    *\n");
				printf("               *                                 [2] ENGLISH                                        *\n");
				printf("               *                                                                                    *\n");
				printf("               *                                                                                    *\n");
				printf("               *                                                                                    *\n");
				printf("               *                                 [3]RETURN                                          *\n");
				printf("               *                                                                                    *\n");
				printf("               **************************************************************************************\n"); 
			}
			i=getch();
			if(i == '2' || i=='1'){
				idioma=i;
			}
	
	system ("cls");		
	}	
}
void telaDeLogin(){
	char user[10], user_c[10];
	int l=0, c=0;
	char log[11];
	char senha[10];
	if(idioma == '1'){
		printf("               **************************************************************************************\n");
		printf("               *2048     2048    2048                                          2048    2048    2048 *\n");
		printf("               *    2048     2048        00000    000000       0      0000         2048    2048     *\n");
		printf("               *2048    2048     2048        0    0    0     0 0     0    0    2048    2048    2048 *\n");
		printf("               *    2048     2048        00000    0    0    0  0      0000         2048    2048     *\n");
		printf("               *2048    2048    2048     0        0    0   00000     0    0    2048    2048    2048 *\n");
		printf("               *    2048    2048         00000    000000       0      0000         2048    2048     *\n");
		printf("               *2048    2048    2048                                           2048    2048    2048 *\n");
		printf("               **************************************************************************************\n");
		printf("               *                          _________________                                         *\n");
		printf("               *                         | NOME:           |                                        *\n");
		printf("               *                         |_________________|                                        *\n");
		printf("               *                         | SENHA:          |                                        *\n");
		printf("               *                         |_________________|                                        *\n");
		printf("               *                                                                                    *\n");
		printf("               *                                                                                    *\n");
		printf("               *                                                                                    *\n");
		printf("               *                                                                                    *\n");
		printf("               *                                                                                    *\n");
		printf("               *                                                                                    *\n");
		printf("               *                                                                                    *\n");
		printf("               *                                                                                    *\n");
		printf("               *                                                                                    *\n");
		printf("               *                                                                                    *\n");
		printf("               *                                                                                    *\n");
		printf("               *                                                                                    *\n");
		printf("               *                                                                                    *\n");
		printf("               **************************************************************************************\n");
	}
	else{
		printf("               **************************************************************************************\n");
		printf("               *2048     2048    2048                                          2048    2048    2048 *\n");
		printf("               *    2048     2048        00000    000000       0      0000         2048    2048     *\n");
		printf("               *2048    2048     2048        0    0    0     0 0     0    0    2048    2048    2048 *\n");
		printf("               *    2048     2048        00000    0    0    0  0      0000         2048    2048     *\n");
		printf("               *2048    2048    2048     0        0    0   00000     0    0    2048    2048    2048 *\n");
		printf("               *    2048    2048         00000    000000       0      0000         2048    2048     *\n");
		printf("               *2048    2048    2048                                           2048    2048    2048 *\n");
		printf("               **************************************************************************************\n");
		printf("               *                          _________________                                         *\n");
		printf("               *                         | NAME:           |                                        *\n");
		printf("               *                         |_________________|                                        *\n");
		printf("               *                         | PASS:           |                                        *\n");
		printf("               *                         |_________________|                                        *\n");
		printf("               *                                                                                    *\n");
		printf("               *                                                                                    *\n");
		printf("               *                                                                                    *\n");
		printf("               *                                                                                    *\n");
		printf("               *                                                                                    *\n");
		printf("               *                                                                                    *\n");
		printf("               *                                                                                    *\n");
		printf("               *                                                                                    *\n");
		printf("               *                                                                                    *\n");
		printf("               *                                                                                    *\n");
		printf("               *                                                                                    *\n");
		printf("               *                                                                                    *\n");
		printf("               *                                                                                    *\n");
		printf("               **************************************************************************************\n");
	}
	x=48;
	cont=0;
	
	cont=0;
	gotoxy(x,10);
	strcpy(log, "\0");
	cont_2=0;
	x=48;
	while((c=getch())!=13){
		gotoxy(x,10);
		if(c != 8){
			user_c[cont]=c;
			if(cont<10){
				x++;
				cont++;
				printf("%c",c);
			}
			cont_2=cont;
		}
		if(c==8 &&cont>0){
			cont_2--;
			x=x-1;
			gotoxy(x,10);
			printf(" ");
			user_c[cont_2]=' ';
			cont--;
		}
	}
	for(cont_2=cont-1;cont_2>-1;cont_2--){
		if(user_c[cont_2]!=' ' &&cont<11){
			user[cont_2]=user_c[cont_2];
		}
	}
	user[cont]='\0';
	cont=0;
	x=49;
	gotoxy(x,12);
	while((c=getch())!=13){
		gotoxy(x,12);
		if(c != 8){
			log_c[cont]=c;
			if(cont<10){
				x++;
				cont++;
				printf("*");
			}
			cont_2=cont;
		}
		if(c==8 &&cont>0){
			cont_2--;
			x=x-1;
			gotoxy(x,12);
			printf(" ");
			log_c[cont_2]=' ';
			cont--;
		}
	}
	for(cont_2=cont-1;cont_2>-1;cont_2--){
		if(log_c[cont_2]!=' ' &&cont<11){
			log[cont_2]=log_c[cont_2];
		}
	}
	log[cont]='\0';
	strcpy(log_c, "\0");
	cont=0;
	check=10;
	for(quant=0;quant<100;quant++){
		if((strcmp(cad_jog[quant].senha, log) == 0) && (strcmp(user, cad_jog[quant].jogador) == 0)){
			check = 0;
			strcpy(jogador_atual, cad_jog[quant].jogador);
			cad_jog[quant].cod++;
			cod_atual=cad_jog[quant].cod;
			pont=cad_jog[quant].pont;
			for(l=0;l<4;l++){
				for(c=0;c<4;c++){
					matriz_atual[l][c]=cad_jog[quant].matriz_jog[l][c];
					save=quant;
				}
			}
		}
	}
}
void telaRanking(){
	int x1=15;
	int y1=16;
	int aux=0;
	char nome_aux[10], idade_aux[3];
	printf("               **************************************************************************************\n");
	printf("               *2048     2048    2048                                          2048    2048    2048 *\n");
	printf("               *    2048     2048        00000    000000       0      0000         2048    2048     *\n");
	printf("               *2048    2048     2048        0    0    0     0 0     0    0    2048    2048    2048 *\n");
	printf("               *    2048     2048        00000    0    0    0  0      0000         2048    2048     *\n");
	printf("               *2048    2048    2048     0        0    0   00000     0    0    2048    2048    2048 *\n");
	printf("               *    2048    2048         00000    000000       0      0000         2048    2048     *\n");
	printf("               *2048    2048    2048                                           2048    2048    2048 *\n");
	printf("               **************************************************************************************\n");
	printf("               *                  0000    00000   0   0   0  0   0   0   0   00000                  *\n");
	printf("               *                  0   0   0   0   00  0   0 0    0   00  0   0                      *\n");
	printf("               *                  0000    00000   0 0 0   00     0   0 0 0   0  00                  *\n");
	printf("               *                  0  0    0   0   0  00   0 0    0   0  00   0   0                  *\n");
	printf("               *                  0   0   0   0   0   0   0  0   0   0   0   00000                  *\n");
	printf("               *                                                                                    *\n");
	printf("               *         ______________________________       ______________________________        *\n");
	printf("               *        | 1 |                     |    |     | 6 |                     |    |       *\n");
	printf("               *        |___|_____________________|____|     |___|_____________________|____|       *\n");
	printf("               *        | 2 |                     |    |     | 7 |                     |    |       *\n");
	printf("               *        |___|_____________________|____|     |___|_____________________|____|       *\n");
	printf("               *        | 3 |                     |    |     | 8 |                     |    |       *\n");
	printf("               *        |___|_____________________|____|     |___|_____________________|____|       *\n");
	printf("               *        | 4 |                     |    |     | 9 |                     |    |       *\n");
	printf("               *        |___|_____________________|____|     |___|_____________________|____|       *\n");
	printf("               *        | 5 |                     |    |     |10 |                     |    |       *\n");
	printf("               *        |___|_____________________|____|     |___|_____________________|____|       *\n");
	printf("               *                                                                                    *\n");
	printf("               **************************************************************************************\n");
	for(cont=0;cont<100;cont++){
		strcpy(rank[cont].nome,cad_jog[cont].jogador);
		strcpy(rank[cont].idade,cad_jog[cont].idade);
		rank[cont].pont=cad_jog[cont].pont;
	}
	for(cont=0;cont<100;cont++){
		for(cont_2=0;cont_2<100;cont_2++){
			if(rank[cont].pont>rank[cont_2].pont){
				aux=rank[cont].pont;
				strcpy(nome_aux,rank[cont].nome);
				strcpy(idade_aux,rank[cont].idade);
				rank[cont].pont=rank[cont_2].pont;
				strcpy(rank[cont].nome,rank[cont_2].nome);
				strcpy(rank[cont].idade,rank[cont_2].idade);
				rank[cont_2].pont=aux;
				strcpy(rank[cont_2].nome,nome_aux);
				strcpy(rank[cont_2].idade,idade_aux);
			}
		}
	}
	//imprimir records
	for(cont=0;cont<5;cont++){
		gotoxy(29,y1);
		printf("%s-", rank[cont].nome);
		printf("%s", rank[cont].idade);
		gotoxy(51,y1);
		printf("%i", rank[cont].pont);
		y1=y1+2;
	}
	y1=16;
	for(cont=5;cont<10;cont++){
		gotoxy(66,y1);
		printf("%s-", rank[cont].nome);
		printf("%s", rank[cont].idade);
		gotoxy(88,y1);
		printf("%i", rank[cont].pont);
		y1=y1+2;
	}
gotoxy(20,28);
}
void telaCores(){
	int cont = 0;
	int resp = 10;
	
	while (resp != '0' ){
		if(idioma =='1'){
			printf("               **************************************************************************************\n");
			printf("               *2048     2048    2048                                          2048    2048    2048 *\n");
			printf("               *    2048     2048        00000    000000       0      0000         2048    2048     *\n");
			printf("               *2048    2048     2048        0    0    0     0 0     0    0    2048    2048    2048 *\n");
			printf("               *    2048     2048        00000    0    0    0  0      0000         2048    2048     *\n");
			printf("               *2048    2048    2048     0        0    0   00000     0    0    2048    2048    2048 *\n");
			printf("               *    2048    2048         00000    000000       0      0000         2048    2048     *\n");
			printf("               *2048    2048    2048                                           2048    2048    2048 *\n");
			printf("               **************************************************************************************\n");
			printf("               *                                                                                    *\n");
			printf("               *                              00000   00000   0000                                  *\n");
			printf("               *                              0       0   0   0   0                                 *\n");
			printf("               *                              0       0   0   0000                                  *\n");
			printf("               *                              0       0   0   0  0                                  *\n");
			printf("               *                              00000   00000   0   0                                 *\n");
			printf("               *                                                                                    *\n");
			printf("               *                                                                                    *\n");
			printf("               *              [1] AZUL                       [5] VERMELHO                           *\n");
			printf("               *                                                                                    *\n");
			printf("               *              [2] VERDE                      [6] AZUL CLARO                         *\n");
			printf("               *                                                                                    *\n");
			printf("               *              [3] AMARELO                    [7] LILAS                              *\n");
			printf("               *                                                                                    *\n");
			printf("               *              [4] BRANCO                     [8] ROXO                               *\n");
			printf("               *                                                                                    *\n");
			printf("               *                              [0]VOLTAR                                             *\n");
			printf("               *                                                                                    *\n");
			printf("               **************************************************************************************\n"); 
		}
		else{
			printf("               **************************************************************************************\n");
			printf("               *2048     2048    2048                                          2048    2048    2048 *\n");
			printf("               *    2048     2048        00000    000000       0      0000         2048    2048     *\n");
			printf("               *2048    2048     2048        0    0    0     0 0     0    0    2048    2048    2048 *\n");
			printf("               *    2048     2048        00000    0    0    0  0      0000         2048    2048     *\n");
			printf("               *2048    2048    2048     0        0    0   00000     0    0    2048    2048    2048 *\n");
			printf("               *    2048    2048         00000    000000       0      0000         2048    2048     *\n");
			printf("               *2048    2048    2048                                           2048    2048    2048 *\n");
			printf("               **************************************************************************************\n");
			printf("               *                                                                                    *\n");
			printf("               *                   00000   00000   0       00000   0000                             *\n");
			printf("               *                   0       0   0   0       0   0   0   0                            *\n");
			printf("               *                   0       0   0   0       0   0   0000                             *\n");
			printf("               *                   0       0   0   0       0   0   0   0                            *\n");
			printf("               *                   00000   00000   00000   00000   0    0                           *\n");
			printf("               *                                                                                    *\n");
			printf("               *                                                                                    *\n");
			printf("               *              [1] BLUE                        [5] RED                               *\n");
			printf("               *                                                                                    *\n");
			printf("               *              [2] GREEN                       [6] LIGHT BLUE                        *\n");
			printf("               *                                                                                    *\n");
			printf("               *              [3] YELLOW                      [7] LILAC                             *\n");
			printf("               *                                                                                    *\n");
			printf("               *              [4] WHITE                       [8] PURPLE                            *\n");
			printf("               *                                                                                    *\n");
			printf("               *                              [0]RETURN                                             *\n");
			printf("               *                                                                                    *\n");
			printf("               **************************************************************************************\n"); 
		}
		resp=getch();
		
		if(resp == '1'){
			system("color 01 ");
		}
		if(resp =='2'){
			system("color 02 ");
		}
		if(resp =='3'){
			system("color 06 ");
		}
		if(resp =='4'){
			system("color 07 ");
		}
		if(resp =='5'){
			system("color 04 ");
		}
		if(resp =='6'){
			system("color 09 ");
		}
		if(resp =='7'){
			system("color 0D ");
		}
		if(resp =='8'){
			system("color 05 ");
		}
	system ("cls");		
	}	
}
void victory(){
	if(idioma=='1'){
		printf("               **************************************************************************************\n");
		printf("               *    2048     2048    2048    2048    2048    2048    2048    2048    2048    2048   *\n");
		printf("               *2048    2048    2048    2048    2048    2048    2048    2048    2048    2048    2048*\n");
		printf("               *    2048    2048    2048    2048    2048    2048    2048    2048    2048    2048    *\n");
		printf("               *2048     ___________________________________________________________________    2048*\n");
		printf("               *    2048|                                                                  |2048    *\n");
		printf("               *2048    |                                                                  |    2048*\n");
		printf("               *    2048|                                                                  |2048    *\n");
		printf("               *2048    |                                                                  |    2048*\n");
		printf("               *    2048|                                                                  |2048    *\n");
		printf("               *2048    |                                                                  |    2048*\n");
		printf("               *    2048|                                                                  |2048    *\n");
		printf("               *2048    |       0       0   0   00000   00000   0000     0   00000         |    2048*\n");
		printf("               *    2048|        0     0    0     0     0   0   0   0    0   0   0         |2048    *\n");
		printf("               *2048    |         0   0     0     0     0   0   0000     0   00000         |    2048*\n");
		printf("               *    2048|          0 0      0     0     0   0   0   0    0   0   0         |2048    *\n");
		printf("               *2048    |           0       0     0     00000   0    0   0   0   0         |    2048*\n");
		printf("               *    2048|                                                                  |2048    *\n");
		printf("               *2048    |                                                                  |    2048*\n");
		printf("               *    2048|                                                                  |2048    *\n");
		printf("               *2048    |                                                                  |    2048*\n");
		printf("               *    2048|                                                                  |2048    *\n");
		printf("               *2048    |                                                                  |    2048*\n");
		printf("               *    2048|                                                                  |2048    *\n");
		printf("               *2048    |                                                                  |    2048*\n");
		printf("               *    2048|__________________________________________________________________|2048    *\n");
		printf("               *2048    2048    2048    2048    2048    2048    2048    2048    2048    2048    2048*\n");
		printf("               **************************************************************************************\n");
	}
	else{
		printf("               **************************************************************************************\n");
		printf("               *    2048     2048    2048    2048    2048    2048    2048    2048    2048    2048   *\n");
		printf("               *2048    2048    2048    2048    2048    2048    2048    2048    2048    2048    2048*\n");
		printf("               *    2048    2048    2048    2048    2048    2048    2048    2048    2048    2048    *\n");
		printf("               *2048     ___________________________________________________________________    2048*\n");
		printf("               *    2048|                                                                  |2048    *\n");
		printf("               *2048    |                                                                  |    2048*\n");
		printf("               *    2048|                                                                  |2048    *\n");
		printf("               *2048    |                                                                  |    2048*\n");
		printf("               *    2048|                                                                  |2048    *\n");
		printf("               *2048    |                                                                  |    2048*\n");
		printf("               *    2048|                                                                  |2048    *\n");
		printf("               *2048    |                                                                  |    2048*\n");
		printf("               *    2048|      0       0   0   00000   00000   00000   0000    0   0       |2048    *\n");
		printf("               *2048    |       0     0    0   0         0     0   0   0   0   0   0       |    2048*\n");
		printf("               *    2048|        0   0     0   0         0     0   0   0000     0 0        |2048    *\n");
		printf("               *2048    |         0 0      0   0         0     0   0   0   0     0         |    2048*\n");
		printf("               *    2048|          0       0   00000     0     00000   0    0    0         |2048    *\n");
		printf("               *2048    |                                                                  |    2048*\n");
		printf("               *    2048|                                                                  |2048    *\n");
		printf("               *2048    |                                                                  |    2048*\n");
		printf("               *    2048|                                                                  |2048    *\n");
		printf("               *2048    |                                                                  |    2048*\n");
		printf("               *    2048|                                                                  |2048    *\n");
		printf("               *2048    |                                                                  |    2048*\n");
		printf("               *    2048|__________________________________________________________________|2048    *\n");
		printf("               *2048    2048    2048    2048    2048    2048    2048    2048    2048    2048    2048*\n");
		printf("               **************************************************************************************\n");
	}
		getch(); 
}
void defeat(){
	if(idioma=='1'){
		printf("               **************************************************************************************\n");
		printf("               *    2048     2048    2048    2048    2048    2048    2048    2048    2048    2048   *\n");
		printf("               *2048    2048    2048    2048    2048    2048    2048    2048    2048    2048    2048*\n");
		printf("               *    2048    2048    2048    2048    2048    2048    2048    2048    2048    2048    *\n");
		printf("               *2048     ___________________________________________________________________    2048*\n");
		printf("               *    2048|                                                                  |2048    *\n");
		printf("               *2048    |                  0   0   00000   00000   00000                   |    2048*\n");
		printf("               *    2048|                  0   0   0   0   0       0                       |2048    *\n");
		printf("               *2048    |                  0   0   0   0   0       0000                    |    2048*\n");
		printf("               *    2048|                   0 0    0   0   0       0                       |2048    *\n");
		printf("               *2048    |                    0     00000   00000   00000                   |    2048*\n");
		printf("               *    2048|                                                                  |2048    *\n");
		printf("               *2048    |                                                                  |    2048*\n");
		printf("               *    2048|          00000   00000   0000    0000    00000   0   0           |2048    *\n");
		printf("               *2048    |          0   0   0       0   0   0   0   0       0   0           |    2048*\n");
		printf("               *    2048|          00000   0000    0000    0   0   0000    0   0           |2048    *\n");
		printf("               *2048    |          0       0       0  0    0   0   0       0   0           |    2048*\n");
		printf("               *    2048|          0       00000   0   0   0000    00000   00000           |2048    *\n");
		printf("               *2048    |                     ________________________                     |    2048*\n");
		printf("               *    2048|                    |                        |                    |2048    *\n");
		printf("               *2048    |                    |     ( 0 )    ( 0 )     |                    |    2048*\n");
		printf("               *    2048|                    |                        |                    |2048    *\n");
		printf("               *2048    |                    |     ______________     |                    |    2048*\n");
		printf("               *    2048|                    |    /                   |                    |2048    *\n");
		printf("               *2048    |                    |                        |                    |    2048*\n");
		printf("               *    2048|____________________|________________________|____________________|2048    *\n");
		printf("               *2048    2048    2048    2048    2048    2048    2048    2048    2048    2048    2048*\n");
		printf("               **************************************************************************************\n"); 
	}
	else{
		printf("               **************************************************************************************\n");
		printf("               *    2048     2048    2048    2048    2048    2048    2048    2048    2048    2048   *\n");
		printf("               *2048    2048    2048    2048    2048    2048    2048    2048    2048    2048    2048*\n");
		printf("               *    2048    2048    2048    2048    2048    2048    2048    2048    2048    2048    *\n");
		printf("               *2048     ___________________________________________________________________    2048*\n");
		printf("               *    2048|                                                                  |2048    *\n");
		printf("               *2048    |                     0   0   00000   0   0                        |    2048*\n");
		printf("               *    2048|                     0   0   0   0   0   0                        |2048    *\n");
		printf("               *2048    |                      0 0    0   0   0   0                        |    2048*\n");
		printf("               *    2048|                       0     0   0   0   0                        |2048    *\n");
		printf("               *2048    |                       0     00000   00000                        |    2048*\n");
		printf("               *    2048|                                                                  |2048    *\n");
		printf("               *2048    |                                                                  |    2048*\n");
		printf("               *    2048|                  0       00000   00000   00000                   |2048    *\n");
		printf("               *2048    |                  0       0   0   0       0                       |    2048*\n");
		printf("               *    2048|                  0       0   0   00000   0000                    |2048    *\n");
		printf("               *2048    |                  0       0   0       0   0                       |    2048*\n");
		printf("               *    2048|                  00000   00000   00000   00000                   |2048    *\n");
		printf("               *2048    |                     ________________________                     |    2048*\n");
		printf("               *    2048|                    |                        |                    |2048    *\n");
		printf("               *2048    |                    |     ( 0 )    ( 0 )     |                    |    2048*\n");
		printf("               *    2048|                    |                        |                    |2048    *\n");
		printf("               *2048    |                    |     ______________     |                    |    2048*\n");
		printf("               *    2048|                    |    /                   |                    |2048    *\n");
		printf("               *2048    |                    |                        |                    |    2048*\n");
		printf("               *    2048|____________________|________________________|____________________|2048    *\n");
		printf("               *2048    2048    2048    2048    2048    2048    2048    2048    2048    2048    2048*\n");
		printf("               **************************************************************************************\n"); 
	}
		getch();
}
void invalido(){
	if(idioma =='1'){
		printf("               **************************************************************************************\n");
		printf("               *    2048     2048    2048    2048    2048    2048    2048    2048    2048    2048   *\n");
		printf("               *2048    2048    2048    2048    2048    2048    2048    2048    2048    2048    2048*\n");
		printf("               *    2048    2048    2048    2048    2048    2048    2048    2048    2048    2048    *\n");
		printf("               *2048     ___________________________________________________________________    2048*\n");
		printf("               *    2048|                                                                  |2048    *\n");
		printf("               *2048    |                                                                  |    2048*\n");
		printf("               *    2048|                                                                  |2048    *\n");
		printf("               *2048    |                0       00000   00000   0   0   0                 |    2048*\n");
		printf("               *    2048|                0       0   0   0       0   00  0                 |2048    *\n");
		printf("               *2048    |                0       0   0   0  00   0   0 0 0                 |    2048*\n");
		printf("               *    2048|                0       0   0   0   0   0   0  00                 |2048    *\n");
		printf("               *2048    |                00000   00000   00000   0   0   0                 |    2048*\n");
		printf("               *    2048|                                                                  |2048    *\n");
		printf("               *2048    |                                                                  |    2048*\n");
		printf("               *    2048|         0   0   0   0   0   00000   0      0   0000    00000     |2048    *\n");
		printf("               *2048    |         0   00  0   0   0   0   0   0      0   0   0   0   0     |    2048*\n");
		printf("               *    2048|         0   0 0 0   0   0   00000   0      0   0   0   0   0     |2048    *\n");
		printf("               *2048    |         0   0  00    0 0    0   0   0      0   0   0   0   0     |    2048*\n");
		printf("               *    2048|         0   0   0     0     0   0   00000  0   0000    00000     |2048    *\n");
		printf("               *2048    |                                                                  |    2048*\n");
		printf("               *    2048|                                                                  |2048    *\n");
		printf("               *2048    |                                                                  |    2048*\n");
		printf("               *    2048|                                                                  |2048    *\n");
		printf("               *2048    |                                                                  |    2048*\n");
		printf("               *    2048|__________________________________________________________________|2048    *\n");
		printf("               *2048    2048    2048    2048    2048    2048    2048    2048    2048    2048    2048*\n");
		printf("               **************************************************************************************\n");
	}
	else{
		printf("               **************************************************************************************\n");
		printf("               *    2048     2048    2048    2048    2048    2048    2048    2048    2048    2048   *\n");
		printf("               *2048    2048    2048    2048    2048    2048    2048    2048    2048    2048    2048*\n");
		printf("               *    2048    2048    2048    2048    2048    2048    2048    2048    2048    2048    *\n");
		printf("               *2048     ___________________________________________________________________    2048*\n");
		printf("               *    2048|                                                                  |2048    *\n");
		printf("               *2048    |                                                                  |    2048*\n");
		printf("               *    2048|                                                                  |2048    *\n");
		printf("               *2048    |                0       00000   00000   0   0   0                 |    2048*\n");
		printf("               *    2048|                0       0   0   0       0   00  0                 |2048    *\n");
		printf("               *2048    |                0       0   0   0  00   0   0 0 0                 |    2048*\n");
		printf("               *    2048|                0       0   0   0   0   0   0  00                 |2048    *\n");
		printf("               *2048    |                00000   00000   00000   0   0   0                 |    2048*\n");
		printf("               *    2048|                                                                  |2048    *\n");
		printf("               *2048    |                                                                  |    2048*\n");
		printf("               *    2048|           0   0   0   0   0   00000   0      0   0000            |2048    *\n");
		printf("               *2048    |           0   00  0   0   0   0   0   0      0   0   0           |    2048*\n");
		printf("               *    2048|           0   0 0 0   0   0   00000   0      0   0   0           |2048    *\n");
		printf("               *2048    |           0   0  00    0 0    0   0   0      0   0   0           |    2048*\n");
		printf("               *    2048|           0   0   0     0     0   0   00000  0   0000            |2048    *\n");
		printf("               *2048    |                                                                  |    2048*\n");
		printf("               *    2048|                                                                  |2048    *\n");
		printf("               *2048    |                                                                  |    2048*\n");
		printf("               *    2048|                                                                  |2048    *\n");
		printf("               *2048    |                                                                  |    2048*\n");
		printf("               *    2048|__________________________________________________________________|2048    *\n");
		printf("               *2048    2048    2048    2048    2048    2048    2048    2048    2048    2048    2048*\n");
		printf("               **************************************************************************************\n");
		
	}
		getch();
}
void Dificuldade(){
	int i=0;
	i=0;
	if(idioma =='1'){
		printf("               **************************************************************************************\n");
		printf("               *2048     2048    2048                                          2048    2048    2048 *\n");
		printf("               *    2048     2048        00000    000000       0      0000         2048    2048     *\n");
		printf("               *2048    2048     2048        0    0    0     0 0     0    0    2048    2048    2048 *\n");
		printf("               *    2048     2048        00000    0    0    0  0      0000         2048    2048     *\n");
		printf("               *2048    2048    2048     0        0    0   00000     0    0    2048    2048    2048 *\n");
		printf("               *    2048    2048         00000    000000       0      0000         2048    2048     *\n");
		printf("               *2048    2048    2048                                           2048    2048    2048 *\n");
		printf("               **************************************************************************************\n");
		printf("               *                                                                                    *\n");
		printf("               *                                                                                    *\n");
		printf("               *                                                                                    *\n");
		printf("               *                               ESCOLHA A DIFICULDADE:                               *\n");
		printf("               *                                                                                    *\n");
		printf("               *                                                                                    *\n");
		printf("               *                                                                                    *\n");
		printf("               *                                                                                    *\n");
		printf("               *                                 [1] FACÍL(1024)                                    *\n");
		printf("               *                                                                                    *\n");
		printf("               *                                 [2] NORMAL(2048)                                   *\n");
		printf("               *                                                                                    *\n");
		printf("               *                                 [3] DIFÍCIL(4096)                                  *\n");
		printf("               *                                                                                    *\n");
		printf("               *                                                                                    *\n");
		printf("               *                                                                                    *\n");
		printf("               *                                                                                    *\n");
		printf("               *                                                                                    *\n");
		printf("               **************************************************************************************\n"); 
	}
	else{
		printf("               **************************************************************************************\n");
		printf("               *2048     2048    2048                                          2048    2048    2048 *\n");
		printf("               *    2048     2048        00000    000000       0      0000         2048    2048     *\n");
		printf("               *2048    2048     2048        0    0    0     0 0     0    0    2048    2048    2048 *\n");
		printf("               *    2048     2048        00000    0    0    0  0      0000         2048    2048     *\n");
		printf("               *2048    2048    2048     0        0    0   00000     0    0    2048    2048    2048 *\n");
		printf("               *    2048    2048         00000    000000       0      0000         2048    2048     *\n");
		printf("               *2048    2048    2048                                           2048    2048    2048 *\n");
		printf("               **************************************************************************************\n");
		printf("               *                                                                                    *\n");
		printf("               *                                                                                    *\n");
		printf("               *                                                                                    *\n");
		printf("               *                               CHOOSE DIFFICULTY:                                   *\n");
		printf("               *                                                                                    *\n");
		printf("               *                                                                                    *\n");
		printf("               *                                                                                    *\n");
		printf("               *                                                                                    *\n");
		printf("               *                                 [1] EASY(1024)                                     *\n");
		printf("               *                                                                                    *\n");
		printf("               *                                 [2] NORMAL(2048)                                   *\n");
		printf("               *                                                                                    *\n");
		printf("               *                                 [3] HARD(4096)                                     *\n");
		printf("               *                                                                                    *\n");
		printf("               *                                                                                    *\n");
		printf("               *                                                                                    *\n");
		printf("               *                                                                                    *\n");
		printf("               *                                                                                    *\n");
		printf("               **************************************************************************************\n"); 
	}
	while(i!=1){
		dificuldade=getch();
		if(dificuldade == '1'){
			cad_jog[save].dificuldade=1024;
			i=1;
		}
		if(dificuldade=='2'){
			cad_jog[save].dificuldade=2048;
			i=1;
		}
		if(dificuldade=='3'){
			cad_jog[save].dificuldade=4096;
			i=1;
		}
	}
}
void telaJogo(){
	pont=0;
	quant=0;
	int jogo[4][4], cop[4][4], matriz[4][4], ver=0;
	int num_col=0, num_lin=0,cod_l=0,cod_c=0,confirmador=0,confirmador_2=0,v1=0,cont_j=0,x=34,y=7,x1=0,y1=0,vitoria=0,derrota=0;
	char esc, resp;
	int coluna=0, linha=0, i=0, cont=0;
	//Zerando a Matriz
	if(cod_atual == 1){
		for(linha=0;linha<4;linha++){
			for(coluna=0;coluna<4;coluna++){
				matriz_atual[linha][coluna]=0;
			}
		}
	}
	else{
		ver=1;
	}
	for(linha=0;linha<4;linha++){
		for(coluna=0;coluna<4;coluna++){
			jogo[linha][coluna]=matriz_atual[linha][coluna];
		}
	}
	srand(time(NULL));
	//Colocando um numero 2 em um lugar aleatorio
	while(esc!=27 && derrota!=16 && vitoria!=1){
		while(confirmador == 0){
			cont_0=0;
			confirmador_2=0;
			for(linha=0;linha<4;linha++){
				for(coluna=0;coluna<4;coluna++){
					if(jogo[linha][coluna]==cop[linha][coluna]){
						confirmador_2++;
					}
					//aqui serve para ver se a matriz estiver cheia
					if(jogo[linha][coluna]!=0){
						cont_0++;
					}
				}
			}
			num_col = 0 + (rand() % 4);
			num_lin = 0 +(rand()%4);
			if(jogo[num_lin][num_col]==0 && confirmador_2 !=16 && ver==0){
				jogo[num_lin][num_col]=2;
				confirmador=2;
			}
			if(cont_0==16){
				confirmador=2;
			}
			if(jogo[num_lin][num_col]==0){			
				confirmador=2;
			}
			system("cls");
			int resp2 = 0;
			if(idioma=='1'){
				printf("               **************************************************************************************\n");
				printf("               *2048     2048    2048                                          2048    2048    2048 *\n");
				printf("               *    2048     2048        00000    000000       0      0000         2048    2048     *\n");
				printf("               *2048    2048     2048        0    0    0     0 0     0    0    2048    2048    2048 *\n");
				printf("               *    2048     2048        00000    0    0    0  0      0000         2048    2048     *\n");
				printf("               *2048    2048    2048     0        0    0   00000     0    0    2048    2048    2048 *\n");
				printf("               *    2048    2048         00000    000000       0      0000         2048    2048     *\n");
				printf("               *2048    2048    2048                                           2048    2048    2048 *\n");
				printf("               **************************************************************************************\n");
				printf("               *  JOGADOR:               ______  ______  ______  ______         ESQ:Sair/Salvar     *\n");
				printf("               *  PONTOS:               |      ||      ||      ||      |        W:Cima              *\n");
				printf("               *                        |      ||      ||      ||      |        S:Baixo             *\n");
				printf("               *                        |______||______||______||______|        A:Esquerda          *\n");
				printf("               *                         ______  ______  ______  ______         D:Direita           *\n");
				printf("               *                        |      ||      ||      ||      |        P:PAUSAR            *\n");
				printf("               *                        |      ||      ||      ||      |                            *\n");
				printf("               *                        |______||______||______||______|                            *\n");
				printf("               *                         ______  ______  ______  ______                             *\n");
				printf("               *                        |      ||      ||      ||      |                            *\n");
				printf("               *                        |      ||      ||      ||      |                            *\n");
				printf("               *                        |______||______||______||______|                            *\n");
				printf("               *                         ______  ______  ______  ______                             *\n");
				printf("               *                        |      ||      ||      ||      |                            *\n");
				printf("               *                        |      ||      ||      ||      |                            *\n");
				printf("               *                        |______||______||______||______|                            *\n");
				printf("               *                                                                                    *\n");
				printf("               **************************************************************************************\n"); 
			}
			else{
				printf("               **************************************************************************************\n");
				printf("               *2048     2048    2048                                          2048    2048    2048 *\n");
				printf("               *    2048     2048        00000    000000       0      0000         2048    2048     *\n");
				printf("               *2048    2048     2048        0    0    0     0 0     0    0    2048    2048    2048 *\n");
				printf("               *    2048     2048        00000    0    0    0  0      0000         2048    2048     *\n");
				printf("               *2048    2048    2048     0        0    0   00000     0    0    2048    2048    2048 *\n");
				printf("               *    2048    2048         00000    000000       0      0000         2048    2048     *\n");
				printf("               *2048    2048    2048                                           2048    2048    2048 *\n");
				printf("               **************************************************************************************\n");
				printf("               *  PLAYER:                ______  ______  ______  ______         ESQ:EXIT/SAVE       *\n");
				printf("               *  POINTS:               |      ||      ||      ||      |        W:UP                *\n");
				printf("               *                        |      ||      ||      ||      |        S:DOWN              *\n");
				printf("               *                        |______||______||______||______|        A:LEFT              *\n");
				printf("               *                         ______  ______  ______  ______         D:RIGHT             *\n");
				printf("               *                        |      ||      ||      ||      |        P:PAUSE             *\n");
				printf("               *                        |      ||      ||      ||      |                            *\n");
				printf("               *                        |______||______||______||______|                            *\n");
				printf("               *                         ______  ______  ______  ______                             *\n");
				printf("               *                        |      ||      ||      ||      |                            *\n");
				printf("               *                        |      ||      ||      ||      |                            *\n");
				printf("               *                        |______||______||______||______|                            *\n");
				printf("               *                         ______  ______  ______  ______                             *\n");
				printf("               *                        |      ||      ||      ||      |                            *\n");
				printf("               *                        |      ||      ||      ||      |                            *\n");
				printf("               *                        |______||______||______||______|                            *\n");
				printf("               *                                                                                    *\n");
				printf("               **************************************************************************************\n"); 
			}
			gotoxy(26,9);
			printf("%s", jogador_atual);
			gotoxy(25,10);
			printf("%i", pont);
			y1=y;
			for(linha=0;linha<4;linha++){
				x1=x;
				y1=y1+4;
				for(coluna=0;coluna<4;coluna++){
					x1=x1+8;
					gotoxy(x1,y1);
					if(jogo[linha][coluna]!=0){
						printf("%i",jogo[linha][coluna]);
					}
					cad_jog[save].matriz_jog[linha][coluna]=jogo[linha][coluna];
				}
			}
		}
		ver=0;
		confirmador = 0;
		for(coluna=0;coluna<4;coluna++){
			for(linha=0;linha<4;linha++){
				cop[linha][coluna]=jogo[linha][coluna];
			}
		}
		for(linha=0;linha<4;linha++){
			for(coluna=0;coluna<4;coluna++){
				matriz[linha][coluna]=0;
			}
		}
		for(linha=0;linha<4;linha++){
			for(coluna=0;coluna<4;coluna++){
				if(jogo[linha][coluna]!=0){
				derrota++;
				}
			}
		}
		
		
		esc=getch();
		cont_j=0;
		//zerar matriz
		if(esc == 112 || esc==80){
			resp=0;	
			if(idioma=='1')	{
				gotoxy(80,16);
				printf("PAUSADO");
				gotoxy(80,17);
				printf("[S]REINICIAR JOGO");
				gotoxy(80,18);
				printf("[N]RETORNAR AO JOGO");
			}
			else{
				gotoxy(80,16);
				printf("PAUSED");
				gotoxy(80,17);
				printf("[S]RESTART GAME");
				gotoxy(80,18);
				printf("[N]RETURN");
			}
			do{
				resp=getch();
				if(resp==115 || resp==83){
					for(linha=0;linha<4;linha++){			
						for(coluna=0;coluna<4;coluna++){
							jogo[linha][coluna]=0;
							resp=110;
						}
					}
				}
				if(resp == 78){
					resp=110;
				}
			}while(resp!=110);
		}
		//movimentação
		if (esc == cima || esc==CIMA ){
			while(cont_j<2){
				for(linha=0;linha<4;linha++){
					for(coluna=0;coluna<4;coluna++){
						if(jogo[linha][coluna] != 0){
							for(v1=3;v1>0;v1--){
								if(jogo[linha-v1][coluna]==0){
									if(linha-v1 >= 0){
										jogo[linha-v1][coluna]=jogo[linha][coluna];
										jogo[linha][coluna]=0;
									}
								}															
							}
						}
					}
				}
				if(cont_j==0){
					for(coluna=0;coluna<4;coluna++){
						for(linha=0;linha<4;linha++){
							if(jogo[linha+1][coluna]==jogo[linha][coluna]){
								jogo[linha][coluna]=jogo[linha+1][coluna]*2;
								jogo[linha+1][coluna]=0;
							}
						}
					}
				}
				cont_j++;
			}
		}
		if (esc == baixo ||esc==BAIXO ){
			while(cont_j<2){
				for(linha=3;linha>=0;linha--){
					for(coluna=3;coluna>=0;coluna--){
						if(jogo[linha][coluna] != 0){
							for(v1=3;v1>0;v1--){
								if(jogo[linha+v1][coluna]==0 ){
									if(linha+v1 <= 3){
										jogo[linha+v1][coluna]=jogo[linha][coluna];
										jogo[linha][coluna]=0;
									}
								}
								
							}
						}
					}
				}
				if(cont_j==0){
					for(coluna=3;coluna>=0;coluna--){
						for(linha=3;linha>=0;linha--){
							if(jogo[linha-1][coluna]==jogo[linha][coluna]){
								jogo[linha][coluna]=jogo[linha-1][coluna]*2;
								jogo[linha-1][coluna]=0;					
							}
						}
					}
				}		
				cont_j++;
			}
		}
	
		if (esc == esquerda || esc==ESQUERDA){
			while(cont_j<2){
				for(coluna=0;coluna<4;coluna++){
					for(linha=0;linha<4;linha++){
						if(jogo[linha][coluna] != 0){
							for(v1=3;v1>0;v1--){
								if(jogo[linha][coluna-v1]==0){
									if(coluna-v1>=0){
										jogo[linha][coluna-v1]=jogo[linha][coluna];
										jogo[linha][coluna]=0;
									}
								}	
							}
						}	
					}
				}
				if(cont_j==0){
					for(coluna=0;coluna<4;coluna++){
						for(linha=0;linha<4;linha++){
							if(jogo[linha][coluna+1]==jogo[linha][coluna]){
								jogo[linha][coluna]=jogo[linha][coluna+1]*2;
								jogo[linha][coluna+1]=0;
							}
						}
					}
				}
				cont_j++;
			}
		}
		if(esc == direita||esc==DIREITA){
			while(cont_j<2){
				for(coluna=3;coluna>=0;coluna--){
					for(linha=3;linha>=0;linha--){
						if(jogo[linha][coluna] != 0){
							for(v1=3;v1>0;v1--){
								if(jogo[linha][coluna+v1]==0){
									if(coluna+v1<=3){
										jogo[linha][coluna+v1]=jogo[linha][coluna];
										jogo[linha][coluna]=0;
									}
								}
							}
						}	
					}
				}
				if(cont_j==0){
					for(linha=3;linha>=0;linha--){
						for(coluna=3;coluna>=0;coluna--){
							if(jogo[linha][coluna]==jogo[linha][coluna-1]){
								jogo[linha][coluna]=jogo[linha][coluna-1]*2;
								jogo[linha][coluna-1]=0;
							}
						}
					}
				}
				cont_j++;
			}
		}
		//pontuação
		for(coluna=0;coluna<4;coluna++){
			for(linha=0;linha<4;linha++){
				if(coluna==0&&linha==0){
					pont=jogo[linha][coluna];
				}
				if(jogo[linha][coluna]>pont){
					pont=jogo[linha][coluna];
				}
			}
		}
		//verificar pontuação jogador
		if(cad_jog[save].cod==0 && cad_jog[save].pont==0){
			cad_jog[save].pont=pont;
		}
		if(pont>cad_jog[save].pont){
			cad_jog[save].pont=pont;
		}
		//verificar vitoria
		for(linha=0;linha<4;linha++){
			for(coluna=0;coluna<4;coluna++){
				if(jogo[linha][coluna]>=cad_jog[save].dificuldade){
					system("cls");
					victory();
					vitoria++;
				}
			}
		}
		if(vitoria >= 1){
			for(linha=0;linha<4;linha++){
				for(coluna=0;coluna<4;coluna++){
					cad_jog[save].matriz_jog[linha][coluna]=0;
				}
			}
			cad_jog[save].cod=0;
			break;
		}
		
		if(cont_0==16){
			derrota=0;
			for(linha=0;linha<4;linha++){
				for(coluna=0;coluna<4;coluna++){
					if(jogo[linha][coluna]!=jogo[linha+1][coluna]&&jogo[linha][coluna]!=jogo[linha-1][coluna]&&jogo[linha][coluna]!=jogo[linha][coluna+1]&&jogo[linha][coluna]!=jogo[linha][coluna-1]){
						if(jogo[linha][coluna]!=0){
							derrota++;
						}
					}
				}	
			}
			if(derrota>=16){
				system("cls");
				defeat();
				for(linha=0;linha<4;linha++){
					for(coluna=0;coluna<4;coluna++){
						cad_jog[save].matriz_jog[linha][coluna]=0;
					}
				}
				cad_jog[save].cod=0;
				break;	
			}
		}
	}		
}
main() {
	//exemplo derrota e vitoria
	strcpy(cad_jog[98].jogador, "cleiton");
	strcpy(cad_jog[98].senha, "2");
	cad_jog[98].dificuldade=4096;
	cad_jog[98].matriz_jog[1][1]=2048;
	cad_jog[98].matriz_jog[1][2]=2048;
	cad_jog[98].cod=1;
	strcpy(cad_jog[97].jogador, "jonas");
	strcpy(cad_jog[97].senha, "2");
	cad_jog[97].dificuldade=2048;
	cad_jog[97].matriz_jog[0][0]=4;
	cad_jog[97].matriz_jog[0][1]=512;
	cad_jog[97].matriz_jog[0][2]=256;
	cad_jog[97].matriz_jog[0][3]=128;
	cad_jog[97].matriz_jog[1][0]=256;
	cad_jog[97].matriz_jog[1][1]=32;
	cad_jog[97].matriz_jog[1][2]=2;
	cad_jog[97].matriz_jog[1][3]=512;
	cad_jog[97].matriz_jog[2][0]=32;
	cad_jog[97].matriz_jog[2][1]=4;
	cad_jog[97].matriz_jog[2][2]=16;
	cad_jog[97].matriz_jog[2][3]=64;
	cad_jog[97].matriz_jog[3][0]=128;
	cad_jog[97].matriz_jog[3][1]=512;
	cad_jog[97].matriz_jog[3][2]=512;
	cad_jog[97].matriz_jog[3][3]=2;
	cad_jog[97].cod=1;	
	setlocale(LC_ALL, "");
	while(resp1 != 27){
		telaInicial();
		if (resp1 == 32){
			do{
				do{
					telaOpcoes();
				}while(resp2 != '1'&&resp2!='2'&&resp2!='3'&&resp2!='4'&& resp2!='5'&&resp2!='6');
				if(resp2 == '2'){
					telaDeCadastro();
					gotoxy(41,18);
					if(idioma=='1'){
						printf("CADASTRO REALIZADO!!");
					}
					else{
						printf("REGISTRATION PERFORMED");
					}
					getch();
					system("cls");
				}
				if(resp2 == '1'){
					telaDeLogin();	
					if(check == 0 ){
						system("cls");
						if(cad_jog[save].cod==1){
							Dificuldade();
						}
						telaJogo();
					}
					else{
						system("cls");
						invalido();
					}
					system("cls");
				}
				if(resp2 == '3'){
					system("cls");
					telaRanking();
					getch();
					system("cls");
				}
				if(resp2 == '4'){
					system("cls");
					telaCores();
					system("cls");
					resp1='1';
				}
				if(resp2 == '5'){
					system("cls");
					Idioma();
					
					system("cls");
					resp1='1';
				}
			}while(resp2 != '6');
		}
	}
}
