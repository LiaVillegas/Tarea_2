//PUNTO 6

#include <iostream>
#include <string>
using namespace std;

int mayor(int a, int b){
   int m;
   m = (a>b) ? a:b;
   return m;
   }

int main()
{
 int n1, n2, n3, n4, n5, n6, may, may1, may2,may3, may4;
 cout << "Ingrese primer numero entero: "<< endl;
 cin >> n1;
 cout << "Ingrese segundo numero entero: "<< endl;
 cin >> n2;
 cout << "Ingrese tercer numero entero: "<< endl;
 cin >> n3;
 cout << "Ingrese cuarto numero entero: "<< endl;
 cin >> n4;
 cout << "Ingrese quinto numero entero: "<< endl;
 cin >> n5;
 cout << "Ingrese sexto numero entero: "<< endl;
 cin >> n6;

 may = mayor(n1,n2);
 may1 = mayor(n3,n4);
 may2 = mayor(n5,n6);
 may3 = mayor(may,may1);
 may4 = mayor(may2,may3);

 cout <<  "El numero mayor es: " << may4 <<endl;
return 0;

}
