//Aprendiz javier Reyes Neira
#include <iostream>
using namespace std;
int a,suma,promedio,n;
main(){
	
	
	for(a=1;a<18;a++){
    cout<<"ingrese estatura "<<a<<endl;
	cin>>n;
	suma=suma+n;
	cout<<suma<<endl;
	}
		
	promedio=suma/18;
	
	cout<<"el promedio de estatura es "<<promedio<<endl; 
	

	if (promedio<140){
		cout<<"Estudiantes muy bajos"<<endl;
	}else if(promedio<=170){
	cout<<"Estudiantes de estatura normal"<<endl;
	}else if(promedio>170){
		cout<<"Estudiantes muy altos"<<endl;
	}
	
	return 0;
}
