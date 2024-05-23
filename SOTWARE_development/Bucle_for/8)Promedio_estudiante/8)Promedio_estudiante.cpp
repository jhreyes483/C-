//Aprendiz: Javier Reyes Neira
#include <iostream>
using namespace std;
int a,n,suma,p;
main(){
cout<<"Aprendiz: Javier Reyes Neira"<<endl<<endl;
	for(a=1;a<=15;a++){
	
		cout<<"Ingrese el valor del la nota "<<a<<endl;
		cin>>n;
		suma=suma+n;
		cout<<"La suma de notas va en "<<suma<<endl;	
	}
	
			p=suma/15;
		cout<<"El promedio es "<<p<<endl;
		
		if(p>=4){cout<<"Paso la materia "<<endl;
			}
	else { cout<<"No paso la materia "<<endl;
	}
	
	return 0;
}
