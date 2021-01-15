#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <windows.h>
#include <ctype.h>
#include "var.h"

float fretornar();
float porcentagem()
{
	do{
		system("cls");
		printf("\t\t,-------------------------------------------------------------------------------,\n");
		printf("\t\t|                                PORCENTAGEM                                    |\n");
		printf("\t\t;-------------------------------------------------------------------------------;\n");
		printf("\t\t| Calcular uma porcentagem X de um valor Y                                      |\n");
		printf("\t\t'-------------------------------------------------------------------------------'");
		printf("\n\t\t Qual o valor da porcentagem? ");
        scanf("%f", &x);
        printf("\t\t Qual o valor? ");
        scanf("%f", &y);
        resultado = x*y/100;
        printf("\t\t O resultado e: %.2f\n", resultado);
    	getche();
		fretornar();
	} while (r!=1);
	}	

float conversao()
{
	do {
	system("cls");
    i = 0;
		printf("\t\t,-------------------------------------------------------------------------------,\n");
		printf("\t\t|                                CONVERSÃO DE MOEDAS                            |\n");
		printf("\t\t;-------------------------------------------------------------------------------;\n");
		printf("\t\t| Converter uma moeda x em outra y.                                             |\n");
		printf("\t\t'-------------------------------------------------------------------------------'");
       	printf("\n\t\t Digite o valor a ser convertido: ");
        scanf("%f", &x);
		system("cls");
		printf("\t\t,-------------------------------------------------------------------------------,\n");
		printf("\t\t|                                CONVERSÃO DE MOEDAS                            |\n");
		printf("\t\t;-------------------------------------------------------------------------------;\n");
		printf("\t\t| Converter uma moeda x em outra y.                                             |\n");
		printf("\t\t;-------------------------------------------------------------------------------;\n");        
        printf("\t\t| Para qual moeda deseja converter?                                             |\n");
        printf("\t\t| [1] Dólar                                                                     |\n");
        printf("\t\t| [2] Euro                                                                      |\n");
        printf("\t\t| [3] Yuan                                                                      |\n");
        printf("\t\t| [4] Líbra Esterlína                                                           |\n");
        printf("\t\t| [5] Peso Mexicano                                                             |\n"); //As moedas são atualizadas diariamente 
        printf("\t\t| [6] Iene                                                                      |\n");
        printf("\t\t| [7] Franco Suicon                                                             |\n");
        printf("\t\t| [8] Rublo                                                                     |\n");
        printf("\t\t| [9] Rupia                                                                     |\n");
        printf("\t\t'-------------------------------------------------------------------------------'\n");
        printf("\t\t  Opção: ");
        scanf("%d", &num);
        
        if (num == 1){
                system("cls");
				resultado = x/3.13;
            	printf("\t\t,-------------------------------------------------------------------------------,\n");
				printf("\t\t|                                CONVERSÃO DE MOEDAS                            |\n");
				printf("\t\t;-------------------------------------------------------------------------------;\n");
				printf("\t\t| Dólar                                                                         |\n");
				printf("\t\t;-------------------------------------------------------------------------------;\n");
				printf("\t\t| Atualmente o dólar equivale a 3.13                                          |\n");
                printf("\t\t'-------------------------------------------------------------------------------'\n");
				printf("\t\t  Portanto, o valor convertido será $: %.2f\n", resultado);
                getche();
                fretornar();
                }
        else if (num == 2){
                system("cls");
				resultado = x/3.32;
            	printf("\t\t,-------------------------------------------------------------------------------,\n");
				printf("\t\t|                                CONVERSÃO DE MOEDAS                            |\n");
				printf("\t\t;-------------------------------------------------------------------------------;\n");
				printf("\t\t| Euro                                                                          |\n");
				printf("\t\t;-------------------------------------------------------------------------------;\n");
				printf("\t\t| Atualmente euro equivale a 3.23                                               |\n");
                printf("\t\t'-------------------------------------------------------------------------------'\n");
				printf("\t\t  Portanto, o valor convertido será €€: %.2f", resultado);
				getche();
				fretornar();                
                }
                 else if (num == 3){
                system("cls");
				resultado = x*2.1867;
               	printf("\t\t,-------------------------------------------------------------------------------,\n");
				printf("\t\t|                                CONVERSÃO DE MOEDAS                            |\n");
				printf("\t\t;-------------------------------------------------------------------------------;\n");
				printf("\t\t| Yuan                                                                          |\n");
				printf("\t\t;-------------------------------------------------------------------------------;\n");
				printf("\t\t| Atualmente o Yuan equivale a 2.1867                                           |\n");
                printf("\t\t'-------------------------------------------------------------------------------'\n");
				printf("\t\t  Portanto, o valor convertido será ¥: %.2f", resultado);
				getche();
				fretornar();
                }
                else if (num == 4){
                system("cls");
				resultado = x*0.2479;
				printf("\t\t,-------------------------------------------------------------------------------,\n");
				printf("\t\t|                                CONVERSÃO DE MOEDAS                            |\n");
				printf("\t\t;-------------------------------------------------------------------------------;\n");
				printf("\t\t| Líbra Esterlína                                                               |\n");
				printf("\t\t;-------------------------------------------------------------------------------;\n");
				printf("\t\t| Atualmente a libra Esterlina equivale a 0.2479                                |\n");
                printf("\t\t'-------------------------------------------------------------------------------'\n");
				printf("\t\t  Portanto, o valor convertido será £: %.2f", resultado);
                getche();
                fretornar();
                }
                
                 else if (num == 5){
            	system("cls");
				resultado = x*5.9769;
            	printf("\t\t,-------------------------------------------------------------------------------,\n");
				printf("\t\t|                                CONVERSÃO DE MOEDAS                            |\n");
				printf("\t\t;-------------------------------------------------------------------------------;\n");
				printf("\t\t| Peso Mexicano                                                                 |\n");
				printf("\t\t;-------------------------------------------------------------------------------;\n");
				printf("\t\t| Atualmente o Peso Mexicano equivale a 5.9769                                  |\n");
                printf("\t\t'-------------------------------------------------------------------------------'\n");
				printf("\t\t  Portanto, o valor convertido será $: %.2f", resultado);
          		getche();
          		fretornar();
    
                }
                 else if (num == 6){
                system("cls");
			    resultado = x*34.6620;
               	printf("\t\t,-------------------------------------------------------------------------------,\n");
				printf("\t\t|                                CONVERSÃO DE MOEDAS                            |\n");
				printf("\t\t;-------------------------------------------------------------------------------;\n");
				printf("\t\t| Ienes                                                                         |\n");
				printf("\t\t;-------------------------------------------------------------------------------;\n");
				printf("\t\t| Atualmente o Ienes equivale a 34.6620                                         |\n");
                printf("\t\t'-------------------------------------------------------------------------------'\n");
				printf("\t\t  Portanto, o valor convertido será ¥: %.2f", resultado);          
		        getche();
		        fretornar();
                        
                }
                else if (num == 7){
                system("cls");
				resultado = x*0.3162;
            	printf("\t\t,-------------------------------------------------------------------------------,\n");
				printf("\t\t|                                CONVERSÃO DE MOEDAS                            |\n");
				printf("\t\t;-------------------------------------------------------------------------------;\n");
				printf("\t\t| Franco Suíço                                                                  |\n");
				printf("\t\t;-------------------------------------------------------------------------------;\n");
				printf("\t\t| Atualmente o Franco Suíço equivale a 0.3162                                   |\n");
                printf("\t\t'-------------------------------------------------------------------------------'\n");
				printf("\t\t  Portanto, o valor convertido será CHF: %.2f", resultado);                
				getche();
				fretornar();
                        
                }
                
                else if (num == 8){
                system("cls");
				resultado = x*17.7962;
             	printf("\t\t,-------------------------------------------------------------------------------,\n");
				printf("\t\t|                                CONVERSÃO DE MOEDAS                            |\n");
				printf("\t\t;-------------------------------------------------------------------------------;\n");
				printf("\t\t| Rublu                                                                         |\n");
				printf("\t\t;-------------------------------------------------------------------------------;\n");
				printf("\t\t| Atualmente o Rublu equivale a 17.7962                                         |\n");
                printf("\t\t'-------------------------------------------------------------------------------'\n");
				printf("\t\t  Portanto, o valor valor convertido será: %.2f", resultado);
			    getche();
			    fretornar();
                        
                }
                
                else if (num == 9){
                system("cls");
				resultado = x*20.3944;
           		printf("\t\t,-------------------------------------------------------------------------------,\n");
				printf("\t\t|                                CONVERSÃO DE MOEDAS                            |\n");
				printf("\t\t;-------------------------------------------------------------------------------;\n");
				printf("\t\t| Rupia                                                                         |\n");
				printf("\t\t;-------------------------------------------------------------------------------;\n");
				printf("\t\t| Atualmente a Rupia equivale a 20.3944                                         |\n");
                printf("\t\t'-------------------------------------------------------------------------------'\n");
				printf("\t\t  Portanto, o valor convertido será: %.2f", resultado);
				getche();
				fretornar();
				}
            } while (r != 1);
} 

float fretornar()
{
	do{
       	system("cls");
		printf("\n\n\n\n\n\n");
		printf("\t\t,-------------------------------------------------------------------------------,\n");
		printf("\t\t|                                      CONVERSÃO                                |\n");
		printf("\t\t;-------------------------------------------------------------------------------;\n");
		printf("\t\t| Deseja volar ao menu [1] ou continuar [2]?                                    |\n");
		printf("\t\t'-------------------------------------------------------------------------------'\n");
		printf("\t\t  Opção: ");
                scanf("%d", &num);
                system("cls");
                if (num == 1){
                        r = 1;
                        i = 1;
                        }
                else if (num == 2){
                        i = 1;
                 		r = 0;
				        system("cls");
                        }
                else if (num != 1 && num != 2)
                        printf("Opcao invalida");
                        getche();
                }while (i != 1); 
}
