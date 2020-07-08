/*
14) Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero,
 informar los 2 mayores valores ingresados, aclarando cual es el máximo y cual el que le sigue.
 Ejemplo: 10, 8, 12, 14, 3, 0 el resultado será 14 y 12.
 Ejemplo: 14, 8, 12, 14, 3, 0 el resultado será 14 y 14.
 Ejemplo: -4, -8, -12, -20, -2, 0 el resultado será -2 y -4
 */

#include<iostream>
using namespace std;
int main ()
{
    int n, b1,pm, sm, b=0;
    b1=0;

    cout <<"Ingresar un numero ";
    cin >> n;

    while (n!=0)
    {
        if (b==0)
        {
            pm=n;
            b=1;
        }
        else
        {
            if (n>pm)
            {
                pm=n;
            }
            else
            {
                if (b1==0)
                {
                    sm=n;
                    b1=1;
                }
                else
                {
                    if (n>sm)
                    {
                        sm=n;
                    }
                }



            }



        }


        cout <<"Ingresar un numero ";
        cin >> n;




    }


    cout <<"El primer mayor es " <<pm;
    cout << endl;
    cout <<"El segundo mayor es " <<sm;







    return 0;
}
