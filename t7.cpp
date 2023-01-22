
#include <iostream>
using namespace std ;
void printPercentage (int number );
main ()
{
    int number ; 
    float answer ;
    cout << "enter number : ";
    cin >> number ;
    printPercentage (number);
    

}
void printPercentage (int number )
{    int number1 ;
     int  counter1 = 0;
     int counter2 = 0 ;
      int counter3 =0;
    int  counter4 = 0 ;
     int  counter5 = 0  ;
     float per1 = 0.00;
     float per2 = 0.00 ;
     float per3 = 0.00;
     float per4 = 0.00;
     float per5 = 0.00 ;
    for (int count = 1 ; count <= number ;  count ++   )
    {
        cout << "enter number ";
        cin >> number1 ;
        if (number1 >= 0 && number1 <200)
        {
            counter1 = counter1 +1 ;

        }
        else if (number1 >= 200 && number1 <=399 )
        {
            counter2 = counter2 +1 ;
        
        }
        else if (number1 >= 400 && number1 <=599)
        {
            counter3 = counter3 + 1;
        }
        else if (number1 >= 600 && number1 <= 799)
        {
            counter4 = counter4 +1 ;
        }
        else if (number1 >= 800 )
        {
            counter5 = counter5+1;
        }

    }
            per1 = (counter1 *100.00 ) / number ;
        per2 = (counter2 * 100.00 ) / number ;
        per3 = (counter3 * 100.00) / number;   
        per4 = (counter4 * 100.00) / number;   
        per5 = (counter5 * 100.00) / number;  
        cout << per1 << endl;    
        cout << per2 << endl; 
        cout << per3 << endl; 
        cout << per4 << endl; 
        cout << per5 << endl;    
}

