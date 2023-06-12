#include <iostream>

using namespace std;

int main()
{
    char n;
    cout<<"Enter character:";
    cin>>n;
    if (n>='0'&&n<='9')
{
    cout<<n<<"is a number";
    if (n%2==0)
    {
    cout<<" and is even";
    }
    else
    {
        cout<<" and is odd";
    }
}
    else if(n>='a'&&n<='z')
{
    cout<<" You have entered a small letter";

    if (n=='a'|| n=='e'|| n=='i' || n=='o'|| n=='u')
    {
        cout<<" and a vowel";
    }
    else
    {
        cout<<" and a consonant";
    }
}
  else if (n>='A'&&n<='Z')
{
    cout<< "You have entered a capital letter";
     if (n=='A'|| n=='E'|| n=='I' || n=='O'|| n=='U')
    {
        cout<<" and a vowel";
    }
    else
    {
        cout<<" and a consonant";
    }
}
else
{
    cout<< "You have entered a special character";
}
    return 0;
}
