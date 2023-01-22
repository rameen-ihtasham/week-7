
#include <iostream>
using namespace std ;
main ()
{
    int number ,digits ;
    cout << "enter  integers : ";
    cin >> number ;
    float per1 = 0.0 ;
    float per2 = 0.0 ;
    float per3 = 0.0 ;
    float counter1 = 0.0;
    float counter2 = 0.0;
    float counter3 = 0.0 ;
    for (int count = 1 ; count <= number ; count++ )
    {
        cout << "enter number : ";
        cin >> digits ;
        if (digits%2 == 0)
        {
            counter1 = counter1 +1 ;
        }
        if (digits%3 == 0 )
        {
            counter2 = counter2 +1 ;

        }
        if (digits%4 == 0)
        {
            counter3 = counter3 +1 ;
        }
        

    }
    per1 = (counter1 * 100.0 )/ number ;
    per2 = (counter2 * 100.0)/number ;
    per3 = (counter3 * 100.0 )/ number ;
    cout << per1 <<endl ;
    cout << per2 <<endl ;
    cout <<per3 <<endl ;
}