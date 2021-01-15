#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <ctype.h>
#include <locale.h>
//*Declaração dos arquivos externos
#include "login.h"
#include "var.h"
#include "saldo.h"
#include "porcentagem+conversao.h"
#include "juros.h"
#include "solicitacartao.h"
//*Declaração das funções principais do programa
char cadastro();
float porcentagem();
float conversao();
float fsaldo();
float pagamento();
float transferencia();
float juros();
float solicitacao();

void main(){
setlocale(LC_ALL, "Portuguese");
system("color f1");   
cadastro();
while (i<2){
             i=1;
			 system("cls");
			 printf("\t\t,-------------------------------------------------------------------------------,\n");
			 printf("\t\t|                                MENU PRINCIPAL                                 |\n");
			 printf("\t\t;-------------------------------------------------------------------------------;\n");
			 printf("\t\t| Bem Vindo                                                                     |\n");
			 printf("\t\t'-------------------------------------------------------------------------------'\n");
			 printf("\t\t %s, favor digite o código da operação",login);
             printf("\n\t\t,-------------------------------------------------------------------------------,");
			 printf("\n\t\t|  [1] Calcular uma porcentagem x de um valor y                                 |");
             printf("\n\t\t|  [2] Converter um valor para outra moeda                                      |");
             printf("\n\t\t|  [3] Ver o saldo da sua conta                                                 |");
             printf("\n\t\t|  [4] Pagar uma conta                                                          |");
             printf("\n\t\t|  [5] Fazer uma transferência                                                  |");
             printf("\n\t\t|  [6] Calcular o juros x em um valor em z anos                                 |");
             printf("\n\t\t|  [7] Solicitar um cartão                                                      |");
             printf("\n\t\t|  [8] Encerrar o programa                                                      |");
			 printf("\n\t\t'-------------------------------------------------------------------------------'\n");
             printf("\n\t\t   Opção: ");
             scanf("%d", &num);
             printf(" ");
switch (num)
{
	case 1:
    	porcentagem();
        break;
	case 2:
        conversao();
		break;
	case 3:
		fsaldo();
        break;
	case 4:
		while (num == 4) 
		{
        pagamento();
    	}
        break;
	case 5: 
		transferencia();
		break;
	case 6:
		juros();
        break;
	case 7:
		solicitacao();
		break;
	case 8:
	    system("cls");
		printf("\n\n\n");
		printf("\t\t,-------------------------------------------------------------------------------,\n");
		printf("\t\t|                                ENCERRAR O PROGRAMA                            |\n");
		printf("\t\t;-------------------------------------------------------------------------------;\n");
		printf("\t\t| Tem certeza de que deseja encerrar o programa?                                |\n");
		printf("\t\t;-------------------------------------------------------------------------------;\n");
		printf("\t\t|                [1] SIM                              [2] NÃO                   |\n");
		printf("\t\t'-------------------------------------------------------------------------------'\n");
		printf("\t\t Opção: ");
		scanf("%i",&num);
		if (num == 1)
		{
	    i++;
		}
		else if (num == 2)
		{
		i=1;
		}
        break;

	default:
        printf("\nCódigo inválido!");
        getche();
		break;
}
}

		system("cls");
		printf("\n\n\n");
		printf("\t\t,-------------------------------------------------------------------------------,\n");
		printf("\t\t|                                ENCERRAR O PROGRAMA                            |\n");
		printf("\t\t;-------------------------------------------------------------------------------;\n");
		printf("\t\t| Obrigado pela preferência. Volte sempre!                                      |\n");
		printf("\t\t'-------------------------------------------------------------------------------'\n");
		sleep(1);
}

