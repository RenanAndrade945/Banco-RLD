#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Biblioteca usada para uso de acentos e outros caracteres
#include <windows.h>//Biblioteca usada para permitir o uso do comendo sleep


float juros()
{
	system("color F0");//Comando para mudar a cor do programa
	int i=0, I, calc;
	double x,y,anual,mensal,diario, d, flex, flex2, jmensal, jdiario, jmensal2, jdiario2;	
	system("cls");
    
	printf("\t\t,----------------------------------------------------------------------,\n");
	printf("\t\t|                                JUROS                                 |\n");
	printf("\t\t;----------------------------------------------------------------------;\n");
    do{ 
	    do{
	printf("\t\t|----------------------------------------------------------------------|\n");    	
	printf("\t\t|    Voc� deseja fazer o calculo do juros flexivel ou do juros fixo?   |\n");
	printf("\t\t;----------------------------------------------------------------------;\n");  
	printf("\t\t| [1] para flexivel                                                    |\n");
	printf("\t\t| [2] para fixo                                                        |\n");
	printf("\t\t'----------------------------------------------------------------------'\n");
	printf("\t\t  Op��o: ");
	scanf("%lf",&flex);
	
	}	while(flex <1 || flex>2);//Caso seja digitado um valor diferente, o programa recome�ar�	
	     

    system("cls");      
	if(flex==1){
		printf("\t\t,-------------------------------------------------------------------------------,\n");
		printf("\t\t|                                   JUROS                                       |\n");
		printf("\t\t;-------------------------------------------------------------------------------;\n");
		printf("\t\t| Calcular juros flex�vel.                                                      |\n");
		printf("\t\t'-------------------------------------------------------------------------------'\n");		
		printf("\t\t  Informe a quantia em R$ que voc� est� devendo: ");
        scanf("%lf",&d);
        printf("\t\t  Informe a porcentagem de juros: ");
        scanf("%lf", &flex2);
        
        Sleep(100);
        for(calc=1;calc<=5;calc++){   
        printf("\n\n\n\t\t\tCalculando.");
        Sleep(100);
        system("cls");      
        printf("\n\n\n\t\t\tCalculando..");
        Sleep(100);
        system("cls");
        printf("\n\n\n\t\t\tCalculando....");
        Sleep(100);
        system("cls");
		}
        
        anual= d+(d*flex2)/100;
        mensal= (flex2/12.0);
        diario= (flex2/365.0);
    
		do{
	printf("\n");	 	   	
	printf("\t\t,-------------------------------------------------------------------------------,\n");
	printf("\t\t|                                   JUROS                                       |\n");
	printf("\t\t;-------------------------------------------------------------------------------;\n");
	printf("\t\t| Calcular juros flex�vel.                                                      |\n");
	printf("\t\t'-------------------------------------------------------------------------------'\n");		
	printf("\t\t  Em um ano, com juros de %2.0lf%% ao ano, o valor da sua d�vida de R$%2.2f, passar� a ser de R$%2.2f\n\n",flex2,d,anual);
	printf("\t\t  Deseja saber a quantidade de juros que � cobrada mensalmente?\n");
    printf("\t\t  Sim=[1]  N�o=[2]\n");
    printf("\t\t  Op��o:  ");
	scanf("%i", &i);
       
        system("cls");
    }while(i<1 || i>2);
       	        
	 if(i==1){
	 	
	 	jmensal = anual/12;
		printf("\n");
		printf("\t\t,-------------------------------------------------------------------------------,\n");
		printf("\t\t|                                   JUROS                                       |\n");
		printf("\t\t;-------------------------------------------------------------------------------;\n");
		printf("\t\t| Calcular juros flex�vel.                                                      |\n");
		printf("\t\t'-------------------------------------------------------------------------------'\n");			
		printf("\t\t  O juros mensal � de %2.2lf%% ao m�s\n\n", mensal);
		printf("\t\t  Voc� pagar� um total de R$%2.2lf por m�s\n\n", jmensal);	
	 }

       do{
    	
    printf("\t\t  Deseja saber a quantidade de juros que � cobrada diariamente?\n");
    printf("\t\t  Sim=[1]  N�o=[2]\n");
    printf("\t\t  Op��o:  ");
	scanf("%i",&I);
    system("cls");   
	  	 	  
    }while(I<1 || I>2);
		
	if(I==1){
		jdiario = anual/365;
		printf("\n");
		printf("\t\t,-------------------------------------------------------------------------------,\n");
		printf("\t\t|                                   JUROS                                       |\n");
		printf("\t\t;-------------------------------------------------------------------------------;\n");
		printf("\t\t| Calcular juros flex�vel.                                                      |\n");
		printf("\t\t'-------------------------------------------------------------------------------'\n");		
		printf("\t\t  O juros diario � de %2.2lf%% ao dia\n\n", diario );
		printf("\t\t  Voc� pagar� um total de R$%2.2lf por dia\n\n", jdiario); 
		}
		   
	}
	  	
	if(flex==2){
	
	printf("\t\t,-------------------------------------------------------------------------------,\n");
	printf("\t\t|                                   JUROS                                       |\n");
	printf("\t\t;-------------------------------------------------------------------------------;\n");
	printf("\t\t| Calcular juros fixo.                                                          |\n");
	printf("\t\t'-------------------------------------------------------------------------------'\n");		
	printf("\t\t  O Banco possui uma taxa de 14%% de juros ao ano\n"); 

	printf("\t\t  Informe a quantia em R$ que voc� est� devendo: ");
	scanf("%lf",&d);
	
	system("cls");
	anual= d+(d*14)/100;
	mensal = (14.0/12.0);
	diario = (14.0/365.0);
	
	printf("\n");
	do{	
	printf("\t\t,-------------------------------------------------------------------------------,\n");
	printf("\t\t|                                   JUROS                                       |\n");
	printf("\t\t;-------------------------------------------------------------------------------;\n");
	printf("\t\t| Calcular juros fixo.                                                          |\n");
	printf("\t\t'-------------------------------------------------------------------------------'\n");		
	printf("\t\t  Em um ano, com juros de 14%% ao ano, o valor da sua d�vida de R$%2.2f, passar� a ser de R$%2.2f\n\n",d,anual);
	
	
	printf("\t\t  Deseja saber a quantidade de juros que � cobrada mensalmente?\n");
	printf("\t\t  Sim=[1]  N�o=[2]\n");
	printf("\t\t  Op��o:  ");
	scanf("%i", &i);
	
	    system("cls");
	   }while(i<1 || i>2);
	
	if(i==1){
		jmensal2 = anual/12;
		
		Sleep(100);
        for(calc=1;calc<=5;calc++){   
        printf("\n\n\n\t\t\tCalculando.");
        Sleep(100);
        system("cls");      
        printf("\n\n\n\t\t\tCalculando..");
        Sleep(100);
        system("cls");
        printf("\n\n\n\t\t\tCalculando....");
        Sleep(100);
        system("cls");
		}
		printf("\t\t,-------------------------------------------------------------------------------,\n");
		printf("\t\t|                                   JUROS                                       |\n");
		printf("\t\t;-------------------------------------------------------------------------------;\n");
		printf("\t\t| Calcular juros fixo.                                                          |\n");
		printf("\t\t'-------------------------------------------------------------------------------'\n");		
		printf("\t\t  O juros mensal � de %2.2lf%% ao m�s\n\n", mensal);
		printf("\t\t  Voc� pagar� por m�s um valor de R$%2.2lf\n\n", jmensal2);
		
	}
	  do{
	printf("\t\t  Deseja saber a quantidade de juros que � cobrada diariamente?\n");
	printf("\t\t  Sim=[1]  N�o=[2]\n");
	printf("\t\t  Op��o:  ");
	scanf("%i",&i);
	   
	   system("cls");
	  }while(i<1 || i>2);
	    
		     
	if(i==1){
		jdiario2=anual/365;
		system("cls");
		printf("\n");
		printf("\t\t,-------------------------------------------------------------------------------,\n");
		printf("\t\t|                                   JUROS                                       |\n");
		printf("\t\t;-------------------------------------------------------------------------------;\n");
		printf("\t\t| Calcular juros fixo.                                                          |\n");
		printf("\t\t'-------------------------------------------------------------------------------'\n");		
		printf("\t\t  O juros diario � de %2.2lf%% ao dia\n\n", diario );
		printf("\t\t  Voc� pagar� por dia um total de R$%2.2lf\n\n", jdiario2);
		}
	}
	   do{
    printf("\t\t  Deseja fazer um novo c�lculo?\n");
    printf("\t\t  Digite [1] para Sim ou [2] para N�o\n");
    printf("\t\t  Op��o:  ");
	scanf("%i", &i);
    
     system("cls");
	   }while(i<1 || i>2);
 
    
	}while(i==1);	
}
