#include<iostream>	
using namespace std;

main(){
	int n,a=1,may,num,men;
	
	cout<<"Cuantos enteros desea ingresar?..";
	cin>>n;
    cout<<"ingrese el numero 1 :";
   
   
      //Se debe dar un valor al mayor y menor desde inicio
   cin>>num; may=num; men=num;
   

    
	
	while(a<=n){
		cout<<"Ingrese el numero?.."<<a<<" :";
	    cin>>num;
	    
	    if(num>may)
	    	may=num;
	   if(num<men)  
	        men=num;	
	    	
	    		a++;
	    	
		}
		
   
		cout<<endl<<"El numero mayor es ?.."<<may;
		cout<<endl<<"El numero menor es ?.."<<men;
		
	return 0;
}

