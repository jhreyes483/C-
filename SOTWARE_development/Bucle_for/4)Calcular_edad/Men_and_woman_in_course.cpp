//Aprediz: Javier Reyes Neira
#include <iostream>
using namespace std;
int promedio,a,n,suma,b;
main(){
	
	
		for(a=1;a<=15;a++){
cout<<"ingrese edad "<<a<<endl;
		cin>>n;
		suma=suma+n;
		cout<<suma<<endl;
	}
	
	
	promedio = suma/15;
	cout<<"El promedio es "<<promedio;
		
	return 0;
}
