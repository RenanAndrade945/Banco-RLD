#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include <ctype.h>
#include "var.h"
char flogin();
char fcadastrar();
char fsenha();
char cadastro()
{
	system("cls");
	printf("\t\t,-------------------------------------------------------------------------------,\n");
	printf("\t\t|                                LOGIN                                          |\n");
	printf("\t\t;-------------------------------------------------------------------------------;\n");
	printf("\t\t| Bem Vindo ao Bamco RLD                                                        |\n");
	printf("\t\t;-------------------------------------------------------------------------------;\n");
	printf("\t\t|Pressione [1] se já possuí cadástro ou [2] para se cadastrar.                  |\n");
	printf("\t\t'-------------------------------------------------------------------------------'\n");
    printf("\t\t Opção: ");
	scanf("%i",&i);
do {
switch (i)
{
case 2:
fcadastrar();
break;
case 1:
flogin();
break;
default:
printf("\t\t Escolha uma opção válida.");
getche();
return cadastro();
break;
}
}	while(i!=0);
}

char fcadastrar()
{
	id=fopen("Dados\\id.txt", "r");
	fscanf(id,"%i \n" ,&j);
	fclose(id);
	system("cls");
	do{
	printf("\t\t,-------------------------------------------------------------------------------,\n");
	printf("\t\t|                                LOGIN                                          |\n");
	printf("\t\t;-------------------------------------------------------------------------------;\n");
	printf("\t\t| Cadástro                                                                      |\n");
	printf("\t\t'-------------------------------------------------------------------------------'\n");
	printf("\t\t Cadastre um nome de usuário: ");
	scanf("%s",&login);
	alogin=fopen("Dados\\usuario.txt","r");
	while(strcmp(login, clogin) != 0 && fscanf(alogin,"%s \n",&clogin) != EOF);
	if (strcmp(login, clogin)==0)
	{
		printf("\t\t Este nome de usuário já existe. Favor escolher outro.\n");
		system("pause");
		system("cls");
	}
	}	while(strcmp(login, clogin)==0);
	printf("\t\t Cadastre uma senha: ");
	fsenha(senha);
	printf("\t\t Confirme sua senha: ");
	fsenha(csenha);
	if (strcmp(senha,csenha)==0)
	{
	asaldo = fopen("Dados\\saldo.txt", "a");
	fprintf(asaldo, "1000 [%i]\n",j);
	fclose(asaldo);
	asenha=fopen("Dados\\senha.txt","a");
	fprintf(asenha, "%s [%i]\n",senha,j);
	alogin=fopen("Dados\\usuario.txt","a");
	fprintf(alogin, "%s [%i]\n",login,j);
	j++;
	id=fopen("Dados\\id.txt","w");
	fprintf(id, "%i \n",j);
	fclose(alogin);
	fclose(id);
	fclose(asenha);
	system("cls");
	printf("\n\n\n\n\n\n\n\n");
	printf("\t\t,-------------------------------------------------------------------------------,\n");
	printf("\t\t|                                         LOGIN                                 |\n");
	printf("\t\t;-------------------------------------------------------------------------------;\n");
	printf("\t\t| Deseja fazer login agora?                                                     |\n");
	printf("\t\t;-------------------------------------------------------------------------------;\n");
	printf("\t\t|                [1] SIM                              [2] NÃO                   |\n");
	printf("\t\t'-------------------------------------------------------------------------------'\n");
	printf("\t\t Opção: ");
	scanf("%i",&i);
	if(i==2){
		i=3;
		system("cls");
		return cadastro();		 
	}
}	else if (strcmp(senha,csenha) != 0) {
	printf("\n\t\t Senha incorreta. Favor tentar de novo.");
	system("pause>null");
	return cadastro();
}
	else if (i>2) 
	{
		printf("\t\t Opção Inválida. Pressione ENTER para voltar.\n");
		system("pause>null");
		return cadastro();
	}
}

char flogin()
{
system("cls");
do {
	system("cls");
	printf("\t\t,-------------------------------------------------------------------------------,\n");
	printf("\t\t|                                LOGIN                                          |\n");
	printf("\t\t;-------------------------------------------------------------------------------;\n");
	printf("\t\t| Bem Vindo ao Bamco RLD                                                        |\n");
	printf("\t\t'-------------------------------------------------------------------------------'\n");
	printf("\t\t Digite seu nome de usuário: ");
	scanf("%s",&login);
	printf("\t\t Digite sua senha: ");
	fsenha(senha);
	alogin = fopen("Dados\\usuario.txt", "r");
	asenha = fopen("Dados\\senha.txt", "r");
	asaldo = fopen("Dados\\saldo.txt", "r");
	while(strcmp(login, clogin) != 0 && fscanf(alogin,"%s [%i]\n",&clogin,&j) != EOF);
	while(fscanf(asenha,"%s [%i]\n",&csenha,&k) != EOF && (k != j));
	j=1;
	while(fscanf(asaldo,"%f [%i]\n",&saldo[j],&j) != EOF && j<=k)
	{
	j++;
	}
	j--;
	fclose(alogin);
	fclose(asenha);
	fclose(asaldo);
	if (strcmp(login,clogin)==0 && strcmp(senha,csenha)==0) {
	system("cls");
	printf("\n\n\n\n\n\n\t\t\t\t\t\t\tEntrando...\n");i=1;
	sleep(1);
	system("cls");
	printf("\n\n\n\n\n\n\t\t\t\t\t\t\tEntrando.\n");i=1;
	sleep(1);
	system("cls");
	printf("\n\n\n\n\n\n\t\t\t\t\t\t\tEntrando..\n");i=1;
	sleep(1);
	i=0;
	}
	else if (strcmp(login,clogin)!=0 || strcmp(senha,csenha) !=0 || k!=j) {
	printf("\n\t\t Usuário ou Senha Incorreto. Aperte ENTER para tentar novamente.\n");
	getche();
	}
}	while (strcmp(login, clogin)!=0 || strcmp(senha, csenha)!=0);
}	


char fsenha(char senha[40])
{
	i=-1;
	do
	{
	i++;
	senha[i] = getch();
	if (senha[i] == 8) //*8 é o valor do botão backspace do teclado
	{
	memset (&senha[i-1],0,sizeof (senha[i-1]));//*isso limpa o caraceter, no caso limpa o caracter anterior
	printf("\b \b");//*\b volta o cursor para o caracter anterior, no caso ele ta voltando, printando um espaço e voltando novamente
	i=i-2;//*como aqui o i esta um numero acima do numero que indica o caracter anterior, eu quero que o usuário reescreva o caracter que ele apagou, então seria o caracter i-1 porém no inicio do ciclo ele adiciona 1 a i, por isso i-2, pois ele vai receber i+1 e vai ficar o valor do caracter que o usuário apagou
	}
	else if (isspace(senha[i]) == 0 && senha[i]!=8)
	{
		printf("*");
	}
	}	while (isspace(senha[i]) == 0);
	if (isspace(senha[i])!= 0){
	memset (&senha[i],0,sizeof (senha[i]));
	}
}
