/*12) Dada una lista de  números que finaliza cuando se ingresa un cero,
  informar cual es el primer y último número impar ingresado.
  Ejemplo  8, 4, -5, 6, 9, 5, 18, 0 se informa -5 y 5.
*/

#include<iostream>
using namespace std;
int main () {
int n, pri, ult, con=0;

cout <<" Ingresar un numero: ";
cin >> n;

while ( n!=0){
    if (n%2!=0){
            if(con==0){
            pri=n;
            con=1;
        }else {
         ult=n;


        }







    }


cout <<" Ingresar un numero: ";
cin >> n;





}



cout <<"El primer numero primo es " << pri;
cout << endl;
cout <<"El ultimo primo es "<< ult;









return 0;
}
