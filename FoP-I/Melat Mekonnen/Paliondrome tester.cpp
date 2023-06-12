using namespace std;
int main() {
    int n = 0;
    int rev = 0;

    cout<<"Enter a number";
    cin >>n;

    int temp = n;

    while(temp > 0)
{
        int remainder = temp % 10;
        rev = (rev * 10 )+ remainder;
        temp /= 10;
    }

    if(n == rev)
    {
        cout<<"A Paliondrome";
    }
    else
    {
        cout << "Not A Palindrom";
    }

    return 0;
}
