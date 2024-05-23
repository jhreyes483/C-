#include <iostream>
using namespace std;
int a=1,p,n,t=1;
main(){
	
	
	
	cout<<"ingrese el numero"<<endl;
		cin>>n;
		cout<<"ingrese potencia"<<endl;
		cin>>p;
		
			
	while(a<=p){
		
	a++;
		
	t=t*n;
	}
	
	cout<<"el valor total es :"<<t;

	
	
	return 0;
}
