// PUNTO 7
#include <iostream>
#include <string>

using namespace std;

int mayusculas(char c){

   if((c >= 'a') and (c <= 'z')){
       c -= 'a' - 'A';
     }

   return c;
  }


int main()
{
   string x;
   string frase;
   cout << "ingresar la frase: " << endl;
   getline(cin,frase);


   for (char z: frase){


       x = mayusculas(z);
       cout << x;

   }
   cout << " " << endl;
   return 0;
}
