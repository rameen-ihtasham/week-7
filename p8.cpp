
#include <iostream>
using namespace std ;
main ()
{
    int cargorange , tonnage ;
    cout << "enter the  count of cargo : ";
    cin >> cargorange ;
    int counter1 =0 ;
     int  counter2 = 0 ;
      int  counter3= 0 ;
      int sum =0 ;
      int p1 ,p2,totalcost , p3 ;
      float per1 ,avg , per2 , per3 ;
    for (int a =1 ; a <= cargorange ; a++ )
    {
        cout << "enter tonnage : ";
        cin >> tonnage ;
        sum = sum + tonnage ;
        if (tonnage >=1 && tonnage <= 3)
        {
           counter1 =  counter1 +tonnage ;
           p1 = counter1 *200;
          

        }
        if (tonnage > 3 && tonnage <= 11)
        {
           counter2 = counter2 + tonnage ;
           p2 = counter2 * 175 ;
        }
        if (tonnage > 11)
        {

          counter3 =  counter3 + tonnage ;
          p3= counter3 * 120 ;
        }



        
    }
            totalcost =p1 + p2 + p3 ;
        per1 = (counter1 *100.0 )/ sum;
        per2 = (counter2 * 100.0 )/ sum;
        per3 = (counter3*100.0 )/ sum ;
        avg = totalcost / sum ;
        cout << avg << endl ;
        cout << per1 <<endl ;
        cout <<per2 <<endl ;
        cout << per3 << endl ;
}