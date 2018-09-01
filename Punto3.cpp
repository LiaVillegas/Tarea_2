//PUNTO 3

#include <iostream>
#include <string>
using namespace std;

char function1(int a){
   cout << "Fizz" << endl;
   return 0;
   }

char function2(int b){
   cout << "Buzz" << endl;
   return 0;
   }

char function3(int c){
   cout << "FizzBuzz" << endl;
   return 0;
   }

int main(){

 char n;

 for (int i=1; i <=100; i++){

     if ((i % 3 == 0) && (i % 5 == 0)){n = function3(i);}
     else {
         if (i % 3 == 0){ n = function1(i);}
         else {
             if (i % 5 == 0){n = function2(i);}
             else {cout << i << endl;}
             }
         }

     cout << n << endl;
     }
return 0;
}
