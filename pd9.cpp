
#include <iostream >
#include <windows.h >

using namespace std ;
void left (int rows );
void right (int rows );
void gotoxy (int , int);
main()
{
    int rows ;
    cout << "enter rows : ";
    cin >> rows ;
    system ("cls");
    left (rows );
    
    right (rows);

}
void gotoxy (int x , int y )
{
 COORD coordinates;
 coordinates.X =x;
 coordinates.Y =y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void left (int rows)
{
    for (int a = 1 ; a<= rows ; a++)
    {
       
        for (int b = 1 ; b <= a ; b++)
        {
            cout << "*";
        }

        cout <<endl;
        
    }
}
void right (int rows )
{
    
   for (int c = 1; c <= rows; c++)
    {
        for (int d = rows-1 ; d>=c ; d--)
        {
            cout << " ";
        }
        for (int e = 1 ; e <= c ; e++)
        {
            cout << "*";
        }
        cout << endl ;

    }
}
