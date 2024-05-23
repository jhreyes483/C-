#include <iostream>
using namespace std;
int a=1,c,e,may=1,est=1;
main(){
	
	cout<<"Escriba la cantidad de estudiante"<<endl;
	cin>>c;

	
	while(a<=c){ 
		cout<<"Estudiante "<<a<<endl;
		
	cout<<"Escriba estatura"<<endl;
	cin>>e;
	a++;

if(e>=may){ may=e; est=a;
}		

	}

	
	cout<<"La mayor estatura es "<<may;
	

	return 0;
}
