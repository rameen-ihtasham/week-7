
#include <iostream>
using namespace std ;
void printPattern (int rows );
main ()
{
    int rows;
    cout << "enter rows : ";
    cin >>rows ;
    printPattern (rows);

    


}
void printPattern (int rows)
{
        for (int m = rows ; m >= 1; m --  )
    {
        for (int n = m ; n>= 1 ; n-- )
        {   
            cout << "*";
        }
        cout << endl;
    }
}