
#include <iostream>
using namespace std ;
int digitSum (int number );
main()
{
    int number , answer ;
    cout << "enter number : ";
    cin >> number ;
    answer = digitSum (number );
    cout <<answer;
} 
int digitSum (int number)
{
    int sum = 0;
    int mod;
    while (number > 0)
    {
        mod = number % 10 ;
        sum = sum + mod ;
        number = number / 10 ;
        
    }
    return sum ;
}
