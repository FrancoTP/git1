#include<stdio.h>
#include <iostream>
#include <locale.h>

int main (){
	int a,suma,mayor;
	printf("\nIngrese un numero hasta que no se: ");
	
do{

	scanf("%i",&a);
	if(a>mayor){
		mayor=a;
	}
	}while(a!=0);
	printf("El mayor de tos los numeros ingresados es : %i");




return 0;

}
