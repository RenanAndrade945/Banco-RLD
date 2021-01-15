#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "var.h"
float solicitacao()
{
	system("cls");
	FILE *nume;
	
	printf("\t\t,-------------------------------------------------------------------------------,\n");
	printf("\t\t|                            SOLICITAÇÃO DE CARTÃO                              |\n");
	printf("\t\t;-------------------------------------------------------------------------------;\n");
	printf("\t\t| Olá, seja bem vindo(a) a parte de solicitação de cartões!                     |\n");
	printf("\t\t;-------------------------------------------------------------------------------;\n");
	printf("\t\t| Deseja solicitar um cartão do Banco RLD?                                      |\n");
	printf("\t\t;-------------------------------------------------------------------------------;\n");
	printf("\t\t| [1] SIM    [2] NÃO                                                            |\n");
	printf("\t\t'-------------------------------------------------------------------------------'");
	printf("\n\t\t Opção:  ");
	scanf("%i", &cartao);
	system("cls");
	
	if(cartao==1){
		printf("\t\t,-------------------------------------------------------------------------------,\n");
		printf("\t\t|                            SOLICITAÇÃO DE CARTÃO                              |\n");
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
								
								printf("\n\t\t O limite liberado para você é de R$%.2f.\n", limite);
							}
							if(renda>=1900 && renda<3900){
								limite=renda*0.15;
								limite=renda+limite;
								
								printf("\n\t\t O limite liberado para você é de R$%.2f.\n", limite);
							}
							if(renda>=3900 && renda<4900){
								limite=renda*0.20;
								limite=renda+limite;
								
								printf("\n\t\t O limite liberado para você é de R$%.2f.\n", limite);
							}
							if(renda>=4900 && renda<30000){
								limite=renda*0.25;
								limite=renda+limite;
								
								printf("\n\t\t O limite liberado para você é de R$%.2f.\n", limite);
							}
							if(renda>30000){
								printf("\n\t\t  O cartão liberado para você é sem limite.\n");
							}
								getche();
								system("cls");
								printf("\t\t,-------------------------------------------------------------------------------,\n");
								printf("\t\t|                            SOLICITAÇÃO DE CARTÃO                              |\n");
								printf("\t\t;-------------------------------------------------------------------------------;\n");
								printf("\t\t| Deseja confirmar a solicitação?                                      |\n");
								printf("\t\t;-------------------------------------------------------------------------------;\n");
								printf("\t\t| [1] SIM    [2] NÃO                                                            |\n");
								printf("\t\t'-------------------------------------------------------------------------------'");
								printf("\n\t\t  Opção:  ");
								scanf("%i",&solicitar);
								
								system("cls");
								
							if(solicitar==1){
								
								do{
								printf("\t\t,----------------------------------------------------------------------------------------,\n");
								printf("\t\t|                                     SOLICITAÇÃO DE CARTÃO                              |\n");
								printf("\t\t'----------------------------------------------------------------------------------------'\n");
								printf("\t\t  Digite um número de telefone para que um de nossos atendentes possa entrar em contato:\n\t\t  ");
								scanf("%d", & contato);
								system("cls");
								printf("\t\t,-------------------------------------------------------------------------------,\n");
								printf("\t\t|                            SOLICITAÇÃO DE CARTÃO                              |\n");
								printf("\t\t'-------------------------------------------------------------------------------'\n");
								printf("\n\t\t  O número de contato digitado foi %d.\n\n", contato);
								printf("\t\t  O número de contato digitado está correto?\n\n\t\t  Digite 1- para confirmar ou qualquer outro número para digitar novamente\n\n\t\t  ");
								scanf("%d",& num);
								system("cls");
								if (num == 1)
								{
								printf("\t\t,-------------------------------------------------------------------------------,\n");
								printf("\t\t|                            SOLICITAÇÃO DE CARTÃO                              |\n");
								printf("\t\t'-------------------------------------------------------------------------------'\n");
								printf("\t\t  Em breve um de nossos atendentes entrará em contato com você.\n");
								nume=fopen("Dados\\num.txt","a");
								fprintf(nume,"%i [%i]\n",contato,j);
								fclose(nume);
								}
						        else
						        {
						        	printf("\n\t\t Tecle enter para digitar novamente o número de contato.\n");
						        	getche();
								}
							}
								while(num != 1);
						    }
							if(solicitar==2){
								printf("\t\t  Sua solicitação de cartão não foi efetuada.\n");
							}
							
							
							
		}else{
			printf("\t\t,-------------------------------------------------------------------------------,\n");
			printf("\t\t|                                   ATENÇÃO                                     |\n");
			printf("\t\t;-------------------------------------------------------------------------------;\n");	
			printf("\t\t| É preciso ter mais que 18 anos e renda maior que 600 reais.                   |\n");
			printf("\t\t'-------------------------------------------------------------------------------'\n");	

		}
							
	}if(cartao==2){
	}
	getche();

}
