
#include <iostream>
using namespace std ;
main ()
{
    int number1,number2 , series ;
    cout << "enter number 1 : ";
    cin >>number1;
    cout << "enter number 2 : ";
    cin >> number2;
    cout << "enter length of series : ";
    cin >> series ;
    cout << number1 << "," <<number2 << ",";
    for (int count = 1; count <= series-2 ; count ++)
    {
        int result ; 
        result =  number1 +number2 ;
        cout << result ;
        cout << ",";
        number1 = number2 ;
        number2 = result ;
    }

}