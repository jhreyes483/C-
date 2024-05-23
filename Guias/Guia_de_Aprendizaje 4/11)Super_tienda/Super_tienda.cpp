#include <iostream>
using namespace std;
int total,percent,value;
main(){

cout<<"Ingrese el valor total "<<endl;
cin>>total;

//condition
 if(total>10000 and total <20000)
{
	
value=-((total*0.10)-total);
	
//percent=total*0.10;
//value=total-percent;
cout<<"El valor a pagar aplicando el 10% de descuento por el valor de la compra es "<<value;
}

else if(total>20001 and total<50000)
{
value=-((total*0.30)-total);
//percent=total*0.30;
//value=total-percent;

cout<<"El valor a pagar aplicando el 30% de descuento por el valor de la compra es "<<value;
}

else if(total>50000)
{
value=-((total*0.50)-total);
//percent=total*0.50;
//value=total-percent;
cout<<"El valor a pagar aplicando el 50% de descuneto por elvalor comprado es "<<value;
}





	
return 0; }
