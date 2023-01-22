
#include <iostream>
using namespace std ;
void printUpper (int row1);
void printlower (int row2 );
main ()
{
    int rows, row1 , row2  ;
    cout << "enter the desired rows :  ";
    cin >> rows ;
    row1 = rows/2 ;
    row2 = rows- row1 ;
    printUpper (row1 );
    printlower (row2);
}
void printUpper ( int row1)
{
    for (int m = 1 ; m <=row1 ; m++ )
    {
        for ( int n = row -1 ; n <= row ; n-- )
        {
            for (int o = 1 ; o <= m ; o ++)
            {
                cout << "*";
            }
            cout <<endl;
        }
    }
}