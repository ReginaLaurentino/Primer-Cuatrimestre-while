/*5) Hacer un programa para que el usuario ingrese dos n�meros
y luego el programa muestre por pantalla los n�meros entre el menor y el mayor de ambos.
 Ejemplo, si el usuario ingresa 3 y 15, se mostrar�n los n�meros entre el 3 y el 15;
 y si el usuario ingresa 25 y 8, se mostrar�n los n�meros entre el 8 y el 25.
*/

#include<iostream>
using namespace std;
int main () {
 int n,s, con;

 cout << "Ingresar un numero: ";
 cin >> n;
 cout <<"Ingresar otro numero: ";
 cin >> s;

 if (n>s){
    con=s;
    while (con <=n) {
    cout << con;
    cout << endl;
    con++;
    }
 }    else{
 con=n;
 while (con <=s){
    cout <<con;
    cout<< endl;
    con++;
 }
 }









    return 0;}
