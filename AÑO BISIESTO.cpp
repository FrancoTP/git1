
#include <cstdlib>
#include <iostream>
#include <locale.h>
#include<stdio.h>
using namespace std;
int main(int argc, char *argv[])
{

setlocale(LC_CTYPE, "Spanish");


    char A;



printf("Ingrese un a�o :");
scanf("%d",&A);


	if (A=A/4){

		printf ("El a�o es bisiesto");

  }
  else{

printf ("El a�o ingresado no es bisiesto\n");

  }
  system("PAUSE");
return 0;

}


