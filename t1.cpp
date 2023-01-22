
#include <iostream>
using namespace std;
void printTable (int table );
main()

{
int table;
    cout << "enter the number : ";
    cin >> table ;
    printTable(table);


}
void printTable(int table )
{
    for(int count = 1 ;  count <=10 ; count ++)
    {
        cout << table << "*"<< count << "=" << table*count<<endl ;
    }
}


