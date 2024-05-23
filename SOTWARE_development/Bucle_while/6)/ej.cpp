#include <iostream>
using namespace std;
int a=1,c=1,sT,cP,vU,suma;
void menu(){}
void adProducto(){}

main(){

 	cout<<"ingrese cuantos tipos de productos hay"<<endl;
		  cin>>c;
		  
		  while(a<=c){
		  	cout<<"Tipo de producto :"<<a<<endl;	
		  a++;
		  cout<<"Ingrese la cantidad"<<endl;
		  cin>>cP;
		  cout<<"Ingrese el valor por unidad"<<endl;
		  cin>>vU;
		  
sT=cP*vU;

suma=suma+sT;

  cout<<"El Sub total es "<<sT<<endl<<endl;
		  }
	
 cout<<"El valor total es "<<suma;


 return 0;
}

