//Aprendiz: Javier Reyes Neira
#include <iostream>
using namespace std;
int a,age,x,y;

main(){
	
	
	for(a=1;a<20;a++){
		cout<<"estudiante numero "<<a<<endl;
		
		cout<< " digite edad "<< endl;
		cin>>age;
		
		if (age>=18){
			x++;
			cout<<"Estudiante mayor de edad "<<" van "<<x<<endl<<endl;
		}else{
			y++;
			cout<<"Estudiante menor de edad "<<" van "<<y<<endl<<endl<<endl;
			
		}
				
	}
	
	
	cout<<"El total de estudiantes menores de edad son "<<y<<endl;
			cout<<"El total de estudiantes mayores de edad son "<<x<<endl;
	
	
	return 0;
}
