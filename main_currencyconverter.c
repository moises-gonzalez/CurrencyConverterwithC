#include <stdio.h>
#include <stdlib.h>

//Function prototype
void convert(int currency, char * denomination);

int main(){	
//variables as float
float usd = 19, cad = 15, pen = 6, eur = 21, yjp = 2, gbp = 25;
// option variable to be used on teh switch
int option;
//Currency names array
char * denom[] = {
"dolar estadounidense", 
"dolar canadiense",
"sol peruano",
"euro",
"yen",
"libra esterlina"
};
	
	puts("*****************************\n");
	puts("* Casa de Cambio Washington *\n");
	puts("*****************************\n");
	puts("Para cambiar tus pesos mexicanos a \n");
	puts("Dolar estadounidense USD ingresa\t1");
	puts("Dolar Canadiense CAD ingresa\t\t2");
	puts("Sol peruano PEN ingresa\t\t\t3");
	puts("Euro EUR ingresa\t\t\t4");
	puts("Yen YJP ingresa\t\t\t\t5");
	puts("Libra esterlina GBP ingresa\t\t6");
	puts("Para salir ingresa\t\t\t9\n");	
	scanf("%d", &option);
	
	switch (option){
		case 1:
			//USD
			convert(usd, denom[0]);
			break;
		case 2:
			//CAD
			convert(cad, denom[1]);
			break;
		case 3:
			//PEN
			convert(pen, denom[2]);
			break;
		case 4:
			//EUR
			convert(eur, denom[3]);
			break;
		case 5:
			//YJP
			convert(yjp, denom[4]);
			break;
		case 6:
			//GBP
			convert(gbp, denom[5]);
			break;
		case 9:
			puts("\nHasta la proxima!\n");
			break;
		default:
			puts("\nOpcion invalida\n");
			break;
	}

  printf("\nPress any key to finish...\n");
  getch();
  return 0;
}

//Function mplementation: the converter
void convert(int currency, char * denomination){
	float mxn, result;	
	printf("Ingresa la cantidad pesos mexicanos que deseas convertir a %s: ", denomination);
	scanf("%f", &mxn);
	result = mxn / currency; 
	
	printf("\nTus %.2f pesos se han convertido en %.2f %s! \n", mxn, result, denomination);
	puts("\nHasta la proxima!\n");
}
