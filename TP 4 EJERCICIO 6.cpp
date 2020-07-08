/*
6) Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero,
luego informar cuántos son positivos y cuántos son negativos.
 Ejemplo: 4, -3, 8, -5, 18, 20, 0. Se listará Positivos: 4 Negativos: 2.
 */

#include<iostream>
using namespace std;
int main () {
int n,p=0, ne=0;
cout << "Ingresar un numero: ";
cin >> n;

while (n!=0) {
    if (n>0){
        p++;
    } else {
    ne++;
    }
    cout << "Ingresar un numero: ";
    cin >> n;
}

cout <<"La cantidad de positivos es: " << p;
cout << endl;
cout <<"La cantidad de negativos es: " << ne;








return 0;
}
