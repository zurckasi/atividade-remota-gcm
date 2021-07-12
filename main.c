/*arquivo que contém a função principal do software*/

//importação de bibliotecas da linguagem C
#include<stdio.h>
#include "biblioteca.h"
//função principal que processa a interação com o usuário
void main(){
	int num1, num2, num3;
	printf("Numero 1: ");
	scanf("%d",&num1);
	printf("Numero 2: ");
	scanf("%d",&num2);
	printf("Numero 3: ");
	scanf("%d",&num3);
	printf("MMC -> %d\n", calculaMMC(num1,num2,num3));
}