
#include <iostream>
using namespace std;
int totalDigits (int number );
main ()
{
    int number, answer  ;
    cout << "enter number :  ";
    cin >> number ;
    answer =totalDigits(number);
    cout << answer;
}
int totalDigits(int number )
{
    int sum = 0 ;
    while(number > 0)
    {
       
        sum = sum+1;
        number = number / 10 ; 
        
        

    }
    return sum ;
    
}