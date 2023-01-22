
#include <iostream>
using namespace std;
void printUpper(int row1);
void printlower (int row2 );

main()
{
    int rows, row1, row2;
    cout << "enter the desired rows :  ";
    cin >> rows;
    row1 = rows / 2;
    row2 = row1;
    printUpper(row1);
    printlower (row2);
}
void printUpper(int row1)
{
   for (int a = 1; a <= row1; a++)
    {
        for (int b = row1 -1 ; b >=a ; b--)
        {
            cout << " ";
        }
        for (int c = 1 ; c <= a ; c++)
        {
            cout << "*";
        }
        cout << endl ;

    }
}
void printlower (int row2 )
{
       for (int d = row2 ; d >= 1 ; d--)
    {
        for (int e = d ; e <= row2 -1 ; e++)
        {
            cout << " ";
        }
        for (int f = d ; f >=1  ; f--)
        {
            cout << "*";
        }
        cout << endl ;

    }

}