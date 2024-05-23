#include <iostream>
#include <conio.h>
using namespace std;
//declare variables
int op,op2,num,p;
void par(){
p=num % 2;// % este es el modulo [sobrante de divicion, 
if (p==0)
cout<<"el numero es par"<<endl;
else
cout<<"el numero es impar"<<endl;
}

void neg(){
	if(0>num)
	cout<<"el numero es negativo"<<endl;
	else
	cout<<"el numero es positivo"<<endl;
	
}


main(){
	cout<<"seleccione :"<<endl<<"1 ingrese numero "<<endl<<"2. salir ";
	cin>>op;
	
	switch(op){
		case 1:
		cout<<"ingrese el numero :";
		cin>>num;
	
		cout<<"seleccione :"<<endl<<"1 par o impar "<<endl<<"2. positivo o negativo ";
	cin>>op2;
	
	switch(op2){
		case 1:
			par();// funcion y se determina como void
		case 2:
			neg();
	}
	
		main();
		
		break;
		case 2:
			cout<<"adios";
			exit(0);
		
		break;
		default:
			
		cout<<"opcion incorreta! ";
		main();
		break;
	}
	return 0;
}
