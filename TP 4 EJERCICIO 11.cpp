/*11) Dada una lista de  números que finaliza cuando se ingresa un cero,
 informar cual  es el primer y segundo número impar ingresado.
 Ejemplo  8, 4, 5, 6, -9, 5,7, 0 se informa 5 y -9
 */

#include<iostream>
using namespace std;
int main () {
int n, pri, seg, con=0;

cout <<" Ingresar un numero: ";
cin >> n;

while ( n!=0){
    if (n%2!=0){
                if(con==0){
            pri=n;
            con++;
        }else {
         if (con==1){
            seg=n;
            con++;

         }


        }







    }


cout <<" Ingresar un numero: ";
cin >> n;





}



cout <<"El primer numero primo es " << pri;
cout << endl;
cout <<"El segundo primero es "<< seg;






return 0;
}
