
#include <iostream >
using namespace std ;
int frequencyChecker (int number , int digit);
main()
{
    int number, digit , answer ;
    cout << "enter number :";
    cin >> number ;
    cout << "enter digit : ";
    cin >> digit ;
    answer = frequencyChecker(number , digit);
    cout << answer ;
}
int frequencyChecker (int number , int digit)
{   int count =0 ;
    while (number  > 0)
    {
        if (number % 10 == digit)
        {
            count = count + 1;
        
        }
        number = number / 10;
        
    }
    return count ;
}
