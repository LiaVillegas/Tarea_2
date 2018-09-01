//PUNTO 10

#include <iostream>
#include <string>
#include<math.h>
using namespace std;

// a = Valor que toma la base
// b = Valor que toma el exponente

int operacion(int a, int b){
   int h;
   if (b != 0 ){
        h = (a*pow(a,b-1));
   return h;
   }
   else {
       return 1;
       }
   }
int main()
{
   int x,y,z;
   cout << "ingrese base:  " << endl;
   cin >> x;
   cout << "ingrese exponente:  " << endl;
   cin >> y;

   z = operacion(x,y);

   cout << "Resultado:  " << z << endl;;

}
