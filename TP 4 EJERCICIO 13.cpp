/*13) Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero,
informar si todos están ordenados en forma creciente.
En caso de haber dos números “empatados” considerarlos como crecientes.
Por ejemplo si la lista fuera: Ejemplo 1: -10, 1, 5, 7, 15, 18, 20, 23, 0
se emitirá un cartel: “Conjunto Ordenado”
Ejemplo 2: 10, 10, 15, 20, 25, 25, 28, 33, 0
se emitirá un cartel: “Conjunto Ordenado”
Ejemplo 3: 10, 1, 15, 7, -15, 18, 20, 23, 0 se emitirá un cartel: “Conjunto No Ordenado”
*/

#include<iostream>
using namespace std;
int main () {
int n,mayor, b=0;
int b2=0;

cout << "Ingresar un numero ";
cin >> n;

while (n!=0){
    if (b==0){
        mayor=n;
        b=1;
    } else{
    if (n>=mayor){
        mayor=n;
    }else {
    b2=1;}



    }

cout << "Ingresar un numero ";
cin >> n;




}
if (b2==0){
    cout <<"Conjunto ordenado";
} else {
cout <<" Conjunto NO ordenado";
}














return 0;
}
