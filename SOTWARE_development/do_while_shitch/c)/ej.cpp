#include <iostream>
#include <conio.h>
using namespace std;
int a,num1,num2,salir=1,num,sumat,restat,mult,op,div;
//Javier Hildebrando Reyes Neira


void suma(){
sumat=num1+num2;
//num=num+sumat;
cout<<"Resultado de suma : "<<sumat<<endl;}

void resta(){
restat=num1-num2;
//num=num-restat;
cout<<"Resultado de resta : "<<restat<<endl;}

void multiplicacion(){ 
mult=num1*num2;
cout<<"Resultado multiplicacion : "<<mult<<endl;}

void divicion(){
div=num1/num2;
cout<<"Resultado de divicion : "<<div<<endl;}

main(){
	
	
	cout<<"Aprendiz Javier Hildebrando Reyes Neira"<<endl;
	
	do{
	cout<<"Ingrese 2 numeros"<<endl;
	    cin>>num1;
		cin>>num2;
		
		cout<<"Seleccione :"<<endl<<"1) Suma"<<endl<<"2) Resta"<<endl<<"3) Multiplicacion"<<endl<<"4) Divicion"<<endl<<"5) Salir"<<endl;
		cin>>op;
		
		switch(op){
		
		case 1:
		suma();
		break;
		
		case 2: 
		resta();
		break;
		
		case 3:
		multiplicacion();
		break;
		
		case 4:
		divicion();
		break;
		
		case 5:
		break;
		
		default:
			cout<<"Opcion incorrecta!!"<<endl<<endl;
		
		}
		
	}while(op !=5);
	
	
	
	
	return 0;
}
