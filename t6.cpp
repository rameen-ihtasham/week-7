
#include <iostream >
using namespace std ;
int calculateGCD (int number1 , int number2);
int calculateLCM (int number1 , int number2 , int GCD );
main ()
{
    int number1 , number2 , GCD , answer2 ;
    cout << " enter number 1 : ";
    cin >> number1 ;
    cout << " enter number 2 : ";
    cin >> number2 ;
    GCD = calculateGCD (number1 , number2 );
    cout << " GCD : ";
    cout << GCD<< endl ;
    answer2 = calculateLCM (number1 , number2 , GCD );
    cout << "LCM : ";
    cout << answer2 ;
}

int calculateGCD (int number1 , int number2)
{
    int great, result ;
    
    
    if (number1 > number2 )
    {
        great = number2 ;
    
    }
    else {
        great = number1 ;

    }
    for (int x = 1 ; x <= great ; x++)
    {
     int y ; 
     int z ;
     y = number1 % x ;
     z = number2 % x ;  
     if (y == 0 && z == 0)
     {
        result =  x ;
     }
    }
    return result;
    
}
int calculateLCM (int number1 , int number2 , int GCD )
{
    int upper , total ;
    upper  = number1 * number2 ;
    total = upper / GCD ;
    return total ;
}