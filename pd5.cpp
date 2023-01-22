
#include<iostream>
using namespace std ;
void triangle (int number );
main ()
{
    int number, answer  ;
    cout << "enter number : ";
    cin >> number ;
triangle (number );
}
void triangle (int number )
{
    int sum = 0 ;
    for (int a = number  ; a >=1  ; a -- )
    {
       sum = sum + a ; 
    }
    cout <<sum;
 
}