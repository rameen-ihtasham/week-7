
#include <iostream>
using namespace std ;
void amplify (int number );
main ()
{
    int number ;
    cout << " enter number : ";
    cin >> number ;
    amplify (number );
}
void amplify (int number )
{   
    int result ;
    for ( int a = 1 ; a <= number ; a++ )
    {
        if (a % 4 == 0)
        {
            result = a* 10 ;
            cout << result << ",";
            
        }
        else 
        {
            result = a ;
            cout << a << ",";
        }
    }
}