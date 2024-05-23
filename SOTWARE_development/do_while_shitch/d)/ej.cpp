#include <iostream>
#include <conio.h>
using namespace std;
int a,op;
//voud fuction(){}

void Fibonacci(){
int a=1,f,f1=0,f2=1,n;
cout<<"Sucesion de fibonacci"<<endl;
cout<<"Cuantos numeros de la sucesion desea ver ?"<<endl;
cin>>n;
cout<<"Los "<<n<<"Numeros que desea ver de la sucesion son: "<<endl;

	while(a<=n){
		f1=f2;
		f2=f;
		f=f1+f2;
		a++;
cout<<f<<"  ";
	}
}


void potencia(){
	int p,n,a=1,suma=0,sum,t=1;
	cout<<"Ingrese potencia del numero"<<endl;
	cin>>p;
	
	cout<<"Ingrese numero a calcular potencia"<<endl;
	cin>>n;
	while(a<=p){
		
		 t=t*n;
	
			a++;
	
	

	}
	cout<<"El resultado es :"<<t<<endl;
	
}


main(){
do{
	cout<<"Seleccione : "<<endl<<endl<<"1) Serie Fibonacci"<<endl<<"2) Calcular potencia"<<endl<<"3) Salir"<<endl;
	cin>>op;
	
	switch(op){
	
	case 1:
		Fibonacci();
		break;
		
	case 2:
		potencia();
		break;
		
		
		
	}
}while(op !=3);




return 0;

}

