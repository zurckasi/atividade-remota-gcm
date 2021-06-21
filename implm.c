/*implementação das funções definidas para o software*/

//função auxiliar calcula e retorna o menor divisor possível para os numeros informados
int menorNumeroDivisor(int num1, int num2, int num3){
	int divisor = 2;
	while(num1%divisor != 0 && num2%divisor != 0 && num3%divisor != 0)divisor++;
	return divisor;
}

//função recursiva que calcula e retorna o mmc para os numeros informados
int calculaMMC(int num1, int num2, int num3){
	if(num1 == 1 && num2 == 1 && num3 == 1) return 1;
	else{
		int divisor = menorNumeroDivisor(num1, num2, num3);
		if(num1%divisor == 0){
			num1 = num1 / divisor;
		}
		if(num2%divisor == 0){
			num2 = num2 / divisor;
		}
		if(num3%divisor == 0){
			num3 = num3 / divisor;
		}
		return divisor * calculaMMC(num1,num2,num3);
	}
}