#include <iostream>
using namespace std;
int vUnidad,cProducts,value,percent,total;
main(){
	
//reqest data
cout<<"Ingrese valor por unidad"<<endl;
cin>>vUnidad;
cout<<"Ingrese la cantidad de productos"<<endl;
cin>>cProducts;

//operation
value=vUnidad*cProducts;

if(value<20000){
	
total=-((value*0.15)-value);	
//percent=value*0.15;
//total=value-percent;

cout<<"El valor de su compra con descuento del 15% es "<<total;
}
else if(value>=20000)
{
	
total=-((value*0.35)-value);		
//percent=value*0.35;
//total=value-percent;
cout<<"El valorde su compra con descuento del 35% es "<<total;
}
	
return 0;
}
