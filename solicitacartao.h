#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "var.h"
float solicitacao()
{
	system("cls");
	FILE *nume;
	
	printf("\t\t,-------------------------------------------------------------------------------,\n");
	printf("\t\t|                            SOLICITA��O DE CART�O                              |\n");
	printf("\t\t;-------------------------------------------------------------------------------;\n");
	printf("\t\t| Ol�, seja bem vindo(a) a parte de solicita��o de cart�es!                     |\n");
	printf("\t\t;-------------------------------------------------------------------------------;\n");
	printf("\t\t| Deseja solicitar um cart�o do Banco RLD?                                      |\n");
	printf("\t\t;-------------------------------------------------------------------------------;\n");
	printf("\t\t| [1] SIM    [2] N�O                                                            |\n");
	printf("\t\t'-------------------------------------------------------------------------------'");
	printf("\n\t\t Op��o:  ");
	scanf("%i", &cartao);
	system("cls");
	
	if(cartao==1){
		printf("\t\t,-------------------------------------------------------------------------------,\n");
		printf("\t\t|                            SOLICITA��O DE CART�O                              |\n");
		printf("\t\t'-------------------------------------------------------------------------------'\n");
		printf("\t\t  Informe a sua idade:  ");
		scanf("%i", &idade);
		printf("\n\t\t  Informe a sua renda:  ");
		scanf("%f",&renda);
		printf("\n");
		
		if((idade >= 18)&&(renda >= 600)){

							if(renda>=600 && renda<1900){
								limite=renda*0.10;
								limite=renda+limite;
								
								printf("\n\t\t O limite liberado para voc� � de R$%.2f.\n", limite);
							}
							if(renda>=1900 && renda<3900){
								limite=renda*0.15;
								limite=renda+limite;
								
								printf("\n\t\t O limite liberado para voc� � de R$%.2f.\n", limite);
							}
							if(renda>=3900 && renda<4900){
								limite=renda*0.20;
								limite=renda+limite;
								
								printf("\n\t\t O limite liberado para voc� � de R$%.2f.\n", limite);
							}
							if(renda>=4900 && renda<30000){
								limite=renda*0.25;
								limite=renda+limite;
								
								printf("\n\t\t O limite liberado para voc� � de R$%.2f.\n", limite);
							}
							if(renda>30000){
								printf("\n\t\t  O cart�o liberado para voc� � sem limite.\n");
							}
								getche();
								system("cls");
								printf("\t\t,-------------------------------------------------------------------------------,\n");
								printf("\t\t|                            SOLICITA��O DE CART�O                              |\n");
								printf("\t\t;-------------------------------------------------------------------------------;\n");
								printf("\t\t| Deseja confirmar a solicita��o?                                      |\n");
								printf("\t\t;-------------------------------------------------------------------------------;\n");
								printf("\t\t| [1] SIM    [2] N�O                                                            |\n");
								printf("\t\t'-------------------------------------------------------------------------------'");
								printf("\n\t\t  Op��o:  ");
								scanf("%i",&solicitar);
								
								system("cls");
								
							if(solicitar==1){
								
								do{
								printf("\t\t,----------------------------------------------------------------------------------------,\n");
								printf("\t\t|                                     SOLICITA��O DE CART�O                              |\n");
								printf("\t\t'----------------------------------------------------------------------------------------'\n");
								printf("\t\t  Digite um n�mero de telefone para que um de nossos atendentes possa entrar em contato:\n\t\t  ");
								scanf("%d", & contato);
								system("cls");
								printf("\t\t,-------------------------------------------------------------------------------,\n");
								printf("\t\t|                            SOLICITA��O DE CART�O                              |\n");
								printf("\t\t'-------------------------------------------------------------------------------'\n");
								printf("\n\t\t  O n�mero de contato digitado foi %d.\n\n", contato);
								printf("\t\t  O n�mero de contato digitado est� correto?\n\n\t\t  Digite 1- para confirmar ou qualquer outro n�mero para digitar novamente\n\n\t\t  ");
								scanf("%d",& num);
								system("cls");
								if (num == 1)
								{
								printf("\t\t,-------------------------------------------------------------------------------,\n");
								printf("\t\t|                            SOLICITA��O DE CART�O                              |\n");
								printf("\t\t'-------------------------------------------------------------------------------'\n");
								printf("\t\t  Em breve um de nossos atendentes entrar� em contato com voc�.\n");
								nume=fopen("Dados\\num.txt","a");
								fprintf(nume,"%i [%i]\n",contato,j);
								fclose(nume);
								}
						        else
						        {
						        	printf("\n\t\t Tecle enter para digitar novamente o n�mero de contato.\n");
						        	getche();
								}
							}
								while(num != 1);
						    }
							if(solicitar==2){
								printf("\t\t  Sua solicita��o de cart�o n�o foi efetuada.\n");
							}
							
							
							
		}else{
			printf("\t\t,-------------------------------------------------------------------------------,\n");
			printf("\t\t|                                   ATEN��O                                     |\n");
			printf("\t\t;-------------------------------------------------------------------------------;\n");	
			printf("\t\t| � preciso ter mais que 18 anos e renda maior que 600 reais.                   |\n");
			printf("\t\t'-------------------------------------------------------------------------------'\n");	

		}
							
	}if(cartao==2){
	}
	getche();

}
