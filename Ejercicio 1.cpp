#include <cstdlib>
#include <iostream>
#include<stdio.h>
using namespace std;
int main(int argc, char *argv[])
{
int n1, n2, n3, mayor;


printf("####################################\n");
printf("######  MAYOR DE DOS NUMEROS  ######\n");
printf("######  MAYOR DE DOS NUMEROS  ######\n");
printf("######  MAYOR DE DOS NUMEROS  ######\n");
printf( "######  MAYOR DE DOS NUMEROS  ######\n");
printf("######  MAYOR DE DOS NUMEROS  ######\n");
printf("######  MAYOR DE DOS NUMEROS  ######\n");
printf("####################################\n");

printf("\nIngrese primer numero: ");

scanf("%d",&n1) ;

mayor = n1; // candidato a mayor


printf("\nIngrese segundo numero: ");

scanf("%d",&n2) ;

if (mayor < n2)

mayor = n2; // nuevo mayor


printf("\nIngrese tercer numero: ");

scanf("%d",&n3) ;

if (mayor < n3)

mayor = n3; // nuevo mayor

cout << " El numero mayor es : " << mayor << endl;
system("PAUSE");

return EXIT_SUCCESS;
}
