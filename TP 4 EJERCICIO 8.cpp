/*8) Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero,
luego informar el máximo y la posición del máximo en la lista.
 En caso de “empates” considerar la primera aparición.
  Ejemplo: 5, -10, 20, 8, 25, 13, 35, -8, -5, 20, 0.
  Se listará Máximo 35 Posición 7.
   Ejemplo: 5, -10, 20, 8, 25, 13, 55, -8, 55, 20, 0. Se listará Máximo 55 Posición 7.
*/

#include<iostream>
using namespace std;
int main () {
int p=1, n, maxi,pmax;
 pmax=p;
cout <<"Ingresar un numero: ";
cin >> n;
maxi=n;
while (n!=0){
    if (n>maxi){
        maxi=n;
        pmax=p;
    }
    p++;
    cout <<"Ingresar un numero: ";
cin >> n;




}

cout << "El maximo es " <<maxi << " La posicion "<< pmax;





return 0;
}
