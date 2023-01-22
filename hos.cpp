
#include <iostream>
using namespace std ;
main ()
{
    int days , patients ;
    int treated = 0 ;
    int untreated = 0 ;
    int diff ;
    cout << "enter days : ";
    cin >> days ;
    int doctors = 7 ;

    for (int count = 1 ; count <= days ; count++)
    {

        cout << "enter patients : ";
        cin >> patients ;
                if (count %3 == 0 && untreated > treated )
        {
            doctors ++ ;
        }
        if  (patients <= doctors )
        {
          treated = treated + patients ;
        }
        else if (patients > doctors )
        {
            treated = treated + doctors ;
            diff = patients - doctors ;
            untreated = untreated + diff ;
        }
        
    }
    cout << "treated : "<<treated <<endl ;
    cout << "untreated : " << untreated << endl ;


}