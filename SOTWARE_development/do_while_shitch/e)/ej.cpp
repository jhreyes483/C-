#include <iostream>
#include <conio.h>
using namespace std;
int a=1,op,num,p;
void par(){
	
	while (p<100){
	p=a*2;
	a++;
	cout<<"El numero par "<<a<<" es "<<p<<endl;
	}	
}

void tMultiplicar(){
	int t,num=1;
	
	
	cout<<"Ingrese numero"<<endl;
	cin>>num;
	
	for(a=1;a<10;a++){
		
		
	t=a*num;
	cout<<"Mutiplicacion "<<a<<" x "<<num<<" = "<<t<<endl;
	}
	
	
	
}

void multi4(){
	int t=1,a=1,e=4;
	
	
	while(a<10){
		
		
		t=a*4;
		cout<<"Multiplo "<<a<<" de 4 "<<" = "<<t<<endl;
		a++;
	}
	
	
	
}

main(){
	do{
		
		cout<<"Selecciones :"<<endl<<endl<<"1. Numeros pares hasta 100"<<endl<<"2. Multiplos de 4 "<<endl<<"3. Tabla de Multiplicar de un numero hasta 10"<<endl<<"4. Salir "<<endl;
		cin>>op;
		switch(op){
		
		
		case 1:
			par();
			
		break;
			
		case 2:
			multi4(); 	
		break;
				
		case 3:
	       tMultiplicar();
		break;
		
		case 4:
		break;
				
		default :
					cout<<"Opcion no encotrada !!";
		}
		

	}while(op!=4);
	
	
	
	
	
	return 0;
}
