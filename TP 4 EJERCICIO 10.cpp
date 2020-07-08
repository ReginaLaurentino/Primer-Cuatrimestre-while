/*10) Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero,
 informar el máximo de los negativos y el mínimo de los positivos.
   Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24, 0.
   Máximo Negativo -3. Mínimo Positivo 2.
*/

#include<iostream>
using namespace std;
int main () {
int n,maxi, mini, b=0;
int b2=0;
cout <<" Ingresar un numero: ";
cin >> n;
while (n!=0){

  if (n>0){
    if (b==0){
        mini=n;
        b=1;
    } else {
        if (n<mini){
           mini=n;
           }

    }
  }  else {
  if (b2==0){
    maxi=n;
    b2=0;
  } else {
   if (n>maxi){
    maxi=n;
   }
  }
  }
cout <<" Ingresar un numero: ";
cin >> n;

}

cout << "el maximo de los negativos es " << maxi;
cout << endl;
cout <<"El minimo de los positivos es " <<mini;





return 0;
}
