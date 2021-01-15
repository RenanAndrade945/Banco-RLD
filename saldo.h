#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "var.h"
float fsaldo();
float transferencia()
{
	do{
	system("cls");
	alogin=fopen("dados\\usuario.txt","r");
	asaldo=fopen("dados\\saldo.txt","r");
	i=1;
	printf("\t\t,-------------------------------------------------------------------------------,\n");
	printf("\t\t|                                  TRANSFERÊNCIA                                |\n");
	printf("\t\t;-------------------------------------------------------------------------------;\n");
	printf("\t\t| Digite o usuário o qual deseja fazer a transferência:                         |\n");
	printf("\t\t'-------------------------------------------------------------------------------'\n");
	while (fscanf(alogin,"%s [%i]",&usu[i],&r) != EOF && fscanf(asaldo,"%f [%i]\n",&saldo[i],&r) != EOF)  
	{
		printf("\n\t\t [%i] %s",r,usu[i]);
		i++;
	}
	printf("\n\t\t [%i] Voltar ao menu principal",i);
	printf("\n\t\t Opção: ");
	scanf("%i",&k);
	if (k> i && k== 0)
	{
		printf("\t\t Escolha um usuário válido.");
		getche();
		return transferencia();
	}
	else if (k==i)
	{
		num=0;
		i=0;
		break;
	}
	system("cls");
	printf("\t\t,-------------------------------------------------------------------------------,\n");
	printf("\t\t|                                  TRANSFERÊNCIA                                |\n");
	printf("\t\t;-------------------------------------------------------------------------------;\n");
	printf("\t\t| Digite o valor a ser transferido:                                             |\n");
	printf("\t\t'-------------------------------------------------------------------------------'\n");
	printf("\n\t\t Valor: ");
	scanf("%f",&vf);
	if (vf > saldo[j])
	{
		system("cls");
		printf("\t\t,-------------------------------------------------------------------------------,\n");
		printf("\t\t|                                  TRANSFERÊNCIA                                |\n");
		printf("\t\t;-------------------------------------------------------------------------------;\n");
		printf("\t\t| Seu saldo é inferior ao valor informado.                                      |\n");
		printf("\t\t'-------------------------------------------------------------------------------'\n");
		getche();
	}
	saldo[k]=saldo[k]+vf;
	saldo[j]=saldo[j]-vf;
	fclose(asaldo);
	fclose(alogin);
	asaldo=fopen("Dados\\saldo.txt","w");
	r=1;
	k=1;
	while (k<i)
	{
		fprintf(asaldo,"%.2f [%i]\n",saldo[k],r);	
		r++;
		k++;
	}	
	system("cls");
	fclose(asaldo);
	printf("\t\t,------------------------------------------------------------------------------------------,\n");
	printf("\t\t|                                 TRANSFERÊNCIA BEM SUCEDIDA                               |\n");
	printf("\t\t;------------------------------------------------------------------------------------------;\n");
	printf("\t\t| Deseja Fazer outra transferência [1], ver seu saldo [2] ou voltar ao menu principal?[3]  |\n");
	printf("\t\t'------------------------------------------------------------------------------------------'\n");
	printf("\n\t\t Opção: ");
	scanf("%i",&r);
	switch (r)
	{
		case 1:
			num=5;
			break;
		case 2:
			num=3;
			fsaldo();
			break;
		case 3:
			num=0;
			i=1;
			break;
		default:
		printf("\n\t\t Opção Inváilda");
	}	
	
}	while (num==5);
}
float fsaldo ()
{
	int r;
	system("cls");
	printf("\t\t,-------------------------------------------------------------------------------,\n");
	printf("\t\t|                                      SALDO                                    |\n");
	printf("\t\t'-------------------------------------------------------------------------------'\n");
	printf("\t\t Seu saldo é de R$%.2f ",saldo[j]);
	getche();
	system("cls");
	printf("\t\t,-------------------------------------------------------------------------------,\n");
	printf("\t\t|                                        SALDO                                  |\n");
	printf("\t\t;-------------------------------------------------------------------------------;\n");
	printf("\t\t| Deseja voltar ao menu principal [1] ou encerrar o programa? [2]               |\n");
	printf("\t\t'-------------------------------------------------------------------------------'\n");
	printf("\t\t Opção: ");
	scanf("%i",&r);
	switch (r)
	{
		case 1:
			i=1;
			break;
		case 2:
			num=7;
			i++;
			break;
		default:
		printf("\n\t\t Opção Inváilda");
	}	

}

float pagamento()
{
	system("cls");
	int r;
	alogin=fopen("dados\\usuario.txt","r");
	asaldo=fopen("dados\\saldo.txt","r");
	i=1;
	while (fscanf(alogin,"%s [%i]",&usu[i],&r) != EOF && fscanf(asaldo,"%f [%i]\n",&saldo[i],&r) != EOF)  
	{
		i++;
	}
	printf("\t\t,-------------------------------------------------------------------------------,\n");
	printf("\t\t|                                  PAGAMENTOS                                   |\n");
	printf("\t\t'-------------------------------------------------------------------------------'\n");
	printf("\n\t\t Digite o valor da conta: ");
	scanf("%f",&vf);
	if (vf > saldo[j])
	{
		printf("\t\t,-------------------------------------------------------------------------------,\n");
		printf("\t\t|                                  TRANSFERÊNCIA                                |\n");
		printf("\t\t;-------------------------------------------------------------------------------;\n");
		printf("\t\t| Seu saldo é inferior ao valor informado.                                      |\n");
		printf("\t\t'-------------------------------------------------------------------------------'\n");
	}
	saldo[j]=saldo[j]-vf;
	fclose(asaldo);
	fclose(alogin);
	asaldo=fopen("Dados\\saldo.txt","w");
	r=1;
	k=1;
	while (k<i)
	{
		fprintf(asaldo,"%.2f [%i]\n",saldo[k],r);	
		r++;
		k++;
	}	
	system("cls");
	fclose(asaldo);
	printf("\t\t,--------------------------------------------------------------------------------------,\n");
	printf("\t\t|                              TRANSFERÊNCIA BEM SUCEDIDA                              |\n");
	printf("\t\t;-------------------------------------------------------------------------------- -----;\n");
	printf("\t\t| Deseja Fazer outro pagamento [1], ver seu saldo [2] ou voltar ao menu principal?[3]  |\n");
	printf("\t\t'--------------------------------------------------------------------------------------'\n");
	printf("\n\t\t Opção: ");
	scanf("%i",&r);
	switch (r)
	{
		case 1:
			num=4;
			break;
		case 2:
			num=3;
			fsaldo();
			break;
		case 3:
			num = 0;
			i=1;
			break;
		default:
		printf("\n\t\t Opção Inváilda");
	}	
	
}
