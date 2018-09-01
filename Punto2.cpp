//PUNTO 2

#include <iostream>
#include <string>
using namespace std;

int main(){
  
  int n;
  int par = 0;
  int impar=0;
  int sumpar = 0;
  int sumimp = 0; 
  
  cout << "Ingrese un Numero: \n";
  cin >> n;
  
  if (n == 0) { cout << "Ingrese numero entero diferente de 0 " << endl;}
  else {
      
      for (int i=0; i <= n; i++){
          
          if (i % 2 == 0){
              par=i;
              sumpar = sumpar + par;
              }
          else {
              impar = i;
              sumimp = sumimp +i;
  
              }
          }
      
      cout << "La suma de todos los números pares es: " << sumpar << endl;
      cout << "La suma de todos los números pares es: " << sumimp << endl;
   
      }
      return 0;
}
