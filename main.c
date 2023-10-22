/*
 * main.c
 *
 *  Created on: Oct 21, 2023
 *      Author: camila
 */

#include <stdio.h>

int suma_digitos(int n1);

int main(void){
	printf("%d", suma_digitos(394));
	return 0;
}

int suma_digitos(int n1)
{
	if(n1<10){
		return n1;
	}
	else{
		return ((n1 % 10) + suma_digitos(n1 / 10)); //caso recursivo
	}
	return -1;
}
