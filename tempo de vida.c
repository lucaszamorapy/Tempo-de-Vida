/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

main()
{
    int hano, hmeses, hdias, nano, nmeses, ndias, diferenca, ano, mes, dia;
    
    printf("Informe a data de hoje: \n");
    scanf("%d%d%d",&hdias,&hmeses,&hano);
    printf("%2d/%2d/%3d\n\n",hdias,hmeses,hano);
    
    printf("Informe a data do seu nascimento: \n");
    scanf("%d%d%d",&ndias,&nmeses,&nano);
    printf("%2d/%2d/%3d\n\n",ndias,nmeses,nano);
    
    diferenca = 365*hano + 30*hmeses + hdias - 365*nano - 30*nmeses - ndias;
    ano = diferenca/365;
    mes = diferenca/30;
    dia = diferenca;
    
    printf("Tem de vida: %d ano(s), %d mes(es), %d dia(s).\n",ano,mes,dia);
    
    
    
    
    
}

