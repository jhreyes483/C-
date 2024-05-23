#include <iostream>
using namespace std;
int age,est,pes;
main(){
	
	cout<<"Ingrese su edad"<<endl;
	cin>>age;
	cout<<"ingrese estatura"<<endl;
	cin>>est;
	cout<<"ingrese peso en kg"<<endl;
	cin>>pes;
	
	
	if(age<=18 && est>180 && pes<=80 ){
		cout<<"Usted es apto para ingresar";
	}
else {
	cout<<"usted no es apto para ingresar";
}
	
	
	return 0;
}
