//PUNTO 9

#include <iostream>
#include <string>
using namespace std;

int exchange(int a, int b){
    
    int v;
    v = a;
    a = b;
    b = v;
    
    cout << "el valor del primer nuemro es " << a << endl;
    cout << "el valor del segundo nuemro es " << b << endl;

    return 0;
    
    }


int main()
{
  int n1, n2, res;
  cout << "ingrese un numero ";
  cin >> n1;
  cout << "ingrese un numero ";
  cin >> n2;
  
  res=exchange(n1,n2);
  
  return 0;
}
