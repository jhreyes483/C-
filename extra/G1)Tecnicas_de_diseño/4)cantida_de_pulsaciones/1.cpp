#include <iostream>
using namespace std;
//declare variables
int pulsaciones,edad;
main(){
	//reqest data read
	cout<<"Ingrese edad"<<endl;
	cin>>edad;
	

	//operation
	pulsaciones = (220 - edad)/10;
	
   //out
	cout<<"El valor de pulsaciones en 10 segundos debe de ser "<<pulsaciones;
	
	
	return 0;
}
