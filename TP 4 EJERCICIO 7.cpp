/*7) Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero,
luego informar el máximo.
  Ejemplo: 5, 10, 20, 8, 25, 13, 35, -8, -5, 20, 0.
   Se listará Máximo 35. Ejemplo: 5, 10, 20, 8, 55, 13, 55, -8, -5, 20, 0. Se listará Máximo 55
*/


#include<iostream>
using namespace std;
int main () {
int mayor, n;

cout <<"Ingresar un numero: ";
cin >> n;

mayor=n;

while (n!=0) {
    if (n> mayor){
        mayor = n;
    }

 cout <<"Ingresar un numero: ";
 cin >> n;

}


cout <<"El mayor es: " <<mayor;











return 0;
}
