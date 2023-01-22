
#include<iostream>
using namespace std ;
float calculateMoney (int age , int machineprice , int toyprice);
main (){
    int age ,  toyprice ;
    float machineprice ,answer ;
    cout << "enter age : ";
    cin >> age  ;
    cout << "enter the price of machine : ";
    cin >> machineprice ;
    cout << "enter the price of toy : ";
    cin >> toyprice ;
    answer = calculateMoney (age , machineprice , toyprice );
    if (answer < machineprice )
    {
        cout << "no !"<<endl;
        cout << machineprice - answer ;
    }
        if (answer > machineprice )
    {
        cout << "yes !"<<endl;
        cout << answer - machineprice  ;
    }
}
float calculateMoney (int age , int machineprice , int toyprice)
{
    float result, oddmoney , totalmoney , r1  ; 
    int even , odd ;
    int count1 = 0 ;
    int count2 = 0 ;
    float evenmoney = 0.0 ;
    float r2 = 0.0 ; 

    even = age / 2 ;
    odd = age -  even ;
    for (int n = 1 ; n <= even ;  n ++ )
    {

      evenmoney = evenmoney + 10 ;
      r2 =  r2 + evenmoney ;
      

    }

    for (int m = 1 ; m<= odd ; m++)
    {
        oddmoney = odd * toyprice ;
    }
    r1 = r2 - even ;
    totalmoney = r1 + oddmoney ;
    return totalmoney ;
}