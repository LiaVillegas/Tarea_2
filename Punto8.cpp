//PUNTO 8

#include <iostream>
#include <string>
#include <math.h>
using namespace std;

const float g=9.807 ;

float tiempo (float v, float a){

   float t = (2*v*sin(a))/g;

   return t;
   }


float altura (float v, float a){

   float h = ((pow(v,2))* (pow(sin(a),2)))/2*g;

   return h;
   }


float alcance (float v, float a){

   float r = ((pow(v,2))*(sin(2*a)))/g;

   return r;
   }

char print(float t, float h, float r){
   cout << "El tiempo de vuelo es: " << t << endl;
   cout << "La altura maxima es: " << h << endl;
   cout << "El alcance horizontal del proyectil es: " << r << endl;
   }


int main()
{
   float vo, angle;
   float time, high, range;
   char res;

   cout << "Ingrese velocidad inicial: " << endl;
   cin >> vo;
   cout << "Ingrese angulo de salida: " << endl;
   cin >> angle;

   time = tiempo(vo, angle);
   high = altura(vo, angle);
   range = alcance(vo, angle);
   res = print(time, high,range);

 return 0;
}
