#include <iostream>

using namespace std;

main(){

//Declaration of varibles
float vUnidad,cProductos,ValorTotal,Porcientaje,CostoTotal;

//request data
cout<<"ingrese la cantidad de productos comprados ";
cin>>cProductos;
cout<<"Ingrese el valor unitario de los productos ";
cin>>vUnidad;

//operations
ValorTotal = vUnidad*cProductos;
Porcientaje = ValorTotal*0.16;
CostoTotal = ValorTotal + Porcientaje;

//print on screen
cout<<" EL valor total sin iva es $" <<ValorTotal;
cout<<", el 16% del valor total es $"<<Porcientaje;
cout<<", el costo con la iva es de $"<<CostoTotal;
	
	return 0;
}

