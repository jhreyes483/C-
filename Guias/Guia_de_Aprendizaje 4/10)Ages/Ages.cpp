#include <iostream>
using namespace std;
int age;
main(){
	
	cout<<"Ingrese edad"<<endl;
	cin>>age;
	
	if(age<15){
		cout<<"usted es infante"<<endl;
		
	}else if(age<19){
		cout<<"usted es adolescente"<<endl;
		
	}else if(age<55){
		cout<<"usted es adulto"<<endl;
		
	}else if(age>55){
		cout<<"usted es adulto mayor"<<endl;
	}
	
	return 0;
}
