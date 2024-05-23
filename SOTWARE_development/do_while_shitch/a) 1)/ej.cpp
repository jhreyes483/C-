#include <iostream>
#include <conio.h>
int a,op,op2,num,p;
using namespace std;
//void fuction1(){}
void par(){
	p=num%2;
	if (p==0){ cout<<"El numero es par"<<endl;}
	else{cout<<"El numero es impar"<<endl;}
}
		
void neg(){
	if(0>num)
	cout<<"el numero es negativo"<<endl;
	else
	cout<<"el numero es positivo"<<endl;
	
}

void menu2(){
cout<<"ingrese segun corresponda"<<endl<<endl<<"1) Determinar si es positivo"<<endl<<"2) determinar si es impar"<<endl;
cin>>op2;
switch(op2){
	case 1: neg();
	break;
	
	case 2: par();
	break;
	
	default:
		cout<<"Opcion incorrecta"<<endl;
	
}
}


void menu(){

cout<<"seleccione :"<<endl<<endl<<"1) ingresar numero"<<endl<<"2) salir "<<endl;
cin>>op;
	
	switch(op){
		case 1:
		cout<<"ingrese numero :"<<endl<<endl;
		cin>>num;
		menu2();
		break;
			
		case 2:
		cout<<"salir";
		exit(0);
		break;
		
		default:
		cout<<"opcion incorrecta"<<endl;	
	}
}




main(){
		menu();
	
	
	return 0;
}
