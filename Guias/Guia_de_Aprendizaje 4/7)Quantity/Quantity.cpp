#include <iostream>
using namespace std;
//declaration data
int quantity, untValue,vTotal,t;
main(){

//reqest data
cout<<"ingrese cantidad de productos ";
cin>>quantity;
cout<<"ingrese valor por unidad ";
cin>>untValue;

//operation
vTotal=quantity*untValue;


//conditional
if(vTotal>=100000){
t=-((vTotal*0.20)-vTotal);
//t=vTotal-percent;
cout<<"el valor total con el descuento del 20% es de "<<t;
}else{
cout<<"el valor total de la compra es "<<vTotal;
}



	
return 0;
}

