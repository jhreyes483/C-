#include <iostream>
#include <conio.h>
using namespace std;
int op,num,aN,aC,aget=1,a,n,p,suma=0;

//fuction
void age(){
	cout<<"Ingrese año de nacimeito"<<endl;
	cin>>aN;
	cout<<"Ingrese año actual"<<endl;
	cin>>aC;
	
	aget=aC-aN;
	if(aget>=18){
		cout<<"Es mayor de edad"<<endl;}
		else{cout<<"Es menor de edad"<<endl;}
	
}
void mate(){ 

for(a=1;a<=3;a++){
	cout<<"Ingrese nota estudiante entre 0 y 5 de la nota :"<<a<<endl;
	cin>>n; 

	suma=suma+n;
	p=((suma)/3) ;}
	
	cout<<"El promedio del estudiante es :"<<p<<endl;
	
	
	if(p>=3){cout<<"El estudiante paso la materia"<<endl;}
	else{cout<<"El estudiante no paso la materia"<<endl;}
	
}


//void fuction1(){}
main(){

	cout<<"Seleccione  : "<<endl<<"1. Pasa o no la materia? "<<endl<< "2. Es mayor o menor de edad? "<<endl;
	cin>>op;
	
	switch(op){
		case 1:
			mate();	
	    break;
		case 2:
			age();
		break;
		
		default:
			cout<<"Opcion incorrecta"<<endl;
			
return 0;	
}
}

