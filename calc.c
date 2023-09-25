#include <stdio.h>
int main(){
float num1, num2;
int menu;
printf("Digite um número: ");
scanf("%f",&num1);
printf("Digite um número: ");
scanf("%f",&num2);
printf("MENU\n"
"1-Somar os dois números.\n"
"2-Subtrair os dois números.\n"
"3-Multiplicar os dois números.\n"
"4-Dividir os dois números.\n"
"5-Sair.\n"
"Digite uma opção:");
scanf("%d",&menu);
fflush(stdin);
switch(menu){
	case 1 :
	printf("Resultado: %f.", num1+num2);
	break;
	case 2 :
	printf("Resultado: %f.", num1-num2);
	break;
	case 3 :
	printf("Resultado: %f.", num1*num2);
	break;
	case 4 :
	printf("Resultado: %f.", num1/num2);
	break;
	case 5 :
	return 0;
	break;
	default :
	printf("Entrada inválida.");
	break;
}
return 0;
