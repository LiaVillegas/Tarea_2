//PUNTO 4

#include <iostream>
#include <string>
using namespace std;

char function(int n, char c)
{
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i+1;j++)
            {
                cout << c;
            }
            cout << " " << endl;
        }
    return c;
    }

int main(){
    
 char car, fun;
 int num;
 
 cout << "Ingrese un caracter: " << endl;
 cin >> car;
 cout << "Ingrese numero de filas" << endl;
 cin >> num;

 fun = function (num, car);

 return 0;
}
