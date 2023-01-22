
#include <iostream>
using namespace std ;
main ()
{
    int rows,pattern  ;
    cout << "enter rows : ";
    cin >> rows;
    pattern = 2* rows ;
    for (int n =1 ; n <= rows ; n++)
    {
        for (int m = 1 ; m <= n ; m++ )
        {
            cout << "*";
        }
        for ( int o = 1 ; o <= pattern-2  ; o++ )
        {
            cout << " ";
        }
        for (int p = 1 ; p<= n ; p++)
        {
            cout << "*";
        }
        pattern = pattern-2;
        cout <<endl;
    }

}