#include <iostream>
using namespace std;
int main()
{
    int value=10;
    for (int i=0;i!=4;++i)
    {
        for (int j=0;j!=10;++j)
        {
            std::cout<<value++<<" ";
        }
            std::cout<<'\n';
    }


  return 0;
}
