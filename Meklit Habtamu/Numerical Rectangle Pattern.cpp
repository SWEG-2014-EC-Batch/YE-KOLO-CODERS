#include <iostream>
using namespace std;
int main()
{
    int row[5][5]={{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5}};

    for (int i=0;i<5;i++)
    {
        for (int j=0;j<5;j++)
        {
            cout<<row[i][j];
        }
        cout<<"\n";

    }

  return 0;
}
