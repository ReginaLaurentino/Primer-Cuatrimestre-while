/*9) Hacer un programa para ingresar una lista de n�meros que finaliza cuando se ingresa un cero,
luego informar el m�ximo y el m�nimo.
Ejemplo: 10, 20, -5, 30,-15, 5, 42, 2, 22, -13, 0.
Se listar� M�ximo 42 M�nimo -15.
Ejemplo: 10, 20, 5, 30, 15, 5, 42, 8, 22, 13, 0.
Se listar� M�ximo 42 M�nimo 5.
Ejemplo: -10, -20, -5, -30, -15, -12, -42, -8, -22, -13, 0.
Se listar� M�ximo -5 M�nimo -42.
Observe que los tres ejemplos dejan en claro que la idea de que el m�ximo �seguramente� es un positivo
y el m�nimo �seguramente� es un negativo, queda totalmente descartada.
*/

#include<iostream>
using namespace std;
int main () {
int n, maxi, menor, b=0;

cout <<" Ingresar un numero: ";
cin >> n;
maxi=n;
menor=n;
while (n!=0)
{
    if (n>=maxi){
        maxi=n;
    }
        if (n<menor){
        menor=n;
    }

cout <<" Ingresar un numero: ";
cin >> n;
    }

cout << "El maximo es " <<maxi << " el menor es "<< menor;






return 0;
}
