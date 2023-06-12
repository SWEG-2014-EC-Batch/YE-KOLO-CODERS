#include<iostream>
using namespace std;

int main()
{
	int i, j, rows=4, columns=7;
	char ch='*';
	for(i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
		{
           cout <<ch;
        }
        cout << "\n";
	}
 	return 0;
}
