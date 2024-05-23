#include <iostream>
using namespace std;
int a=0,c,c2,p,suma,may;
main(){
	
	
	cout<<"ingrese numero de calificaciones"<<endl;
	cin>>c;
		
	while (a<c){
		cout<<"ingrese calificacion"<<endl;
		cin>>c2;
		
		a++;
	suma=suma+c2;
	
	
	
	if(c2>may)
	may=c2;
	if(p>=4){
		cout<<"El estudiante paso"<<endl;
	}else{
		cout<<"El estudiante no paso"<<endl;
	}
	
	
	
		
	}
	
	p=(suma)/c;

	cout<<"Su promedio es :"<<p<<endl;
	cout<<"Su nota mayor es :"<<c2<<endl;
	
	
	return 0;
}
