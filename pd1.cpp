
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
        for (int m = 1 ; m<= rows ; m ++  )
    {
        for (int n = 1 ; n<= m ; n++ )
        {   
            cout << "*";
        }
        cout << endl;
    }
}