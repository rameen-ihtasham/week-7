
#include<iostream>
using namespace std ;
float calculatePrice (float money , int year );
main ()
{
    float money , answer ;
    int year ;
    cout << "enter money : ";
    cin >> money ;
    cout << "enter year : ";
    cin >> year ;
    answer =  calculatePrice(money , year );
    if (answer > money )
    {    
        answer = answer - money ;
        cout << "He will need "<< answer << " dollars to survive .";
    }
    else 
    {
        answer = money - answer ;
        cout << "Yes ! He will live a carefree life and will have "<< answer << " dollars left .";
    }
}
float calculatePrice (float money , int year )
{
    int agedifference , currentage ;
    float total , total1 , total2 ;
    float sum1 = 0.0 ;
    float sum2 = 0.0 ;
    for (int count = 1800  ;  count <= year ; count++)
    {
        if (count % 2 == 0)
        {
            total1 = 12000.0;
            sum1 = sum1 + total1 ;
        }
        if (count %2 != 0)
        {
            agedifference = count - 1800 ;
            currentage = agedifference + 18 ;
            total2 = 12000.0 + (50 * currentage);
            sum2 = sum2+ total2 ;
        }
    }
    total = sum1 + sum2 ;
    return total ;
    
}