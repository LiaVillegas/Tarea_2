//PUNTO 1

#include <iostream>
#include <string>
using namespace std;

int main()
{

 char c;
 cout << "Ingrese Calificacion: \n ";
 cin >> c;

switch (c) {

     case 'A':
           cout << "Excelente, todo ha sido perfecto " << std::endl;
           break;

     case 'B':
           cout << "Sobresaliente, ha sido bueno" << std::endl;
           break;

     case 'C':
           cout << "Aceptable, ha sido suficiente, pero falta mas esfuerzo " << std::endl;
           break;

     case 'D':
           cout << "Deficiente, no se ha alcanzado el objetivo " << std::endl;
           break;

     case 'F':
           cout << "Insuficiente, todo esta incompleto"<< std::endl;
           break;

      default: cout << "Nota Incorrecta" << endl;
     }

     return 0;
}
