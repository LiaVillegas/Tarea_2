//PUNTO 5

#include <iostream>
#include <string>
using namespace std;

int cont=0;

int vocales(char vo){


    if(vo == 'a' ){

         cont++ ;
        }
    else if( vo == 'e' ){

          cont++ ;
        }
    else if(vo == 'i' ){

          cont++ ;

        }
    else if( vo == 'o' ){

          cont++ ;

        }
    else if( vo == 'u' ){

          cont++ ;

        }

    return cont;
    }

int contt = 0;
int consonantes(char co){

    if((co != 'a') && ( co != 'e') && ( co != 'i') && ( co != 'o') && ( co != 'u') && ( co != ' ')){

         contt++ ;

     return contt;
 }

}

int main()
{

  string frase;
  cout << "Ingrese una frase: "<< endl;
  getline(cin,frase);

  int n,p;

  for (char p : frase){

      n = vocales(p);

    }


  for (char w : frase){

      p = consonantes(w);

    }

    cout << "total de vocales: " << n << endl;
    cout << "total de consonantes: " << p << endl;
}
