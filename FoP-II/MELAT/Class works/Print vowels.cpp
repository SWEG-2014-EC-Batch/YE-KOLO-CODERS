#include <iostream>
#include<ctype.h>
using namespace std;
void print_vowel(char *word,int size=7)
{
  char carrier;
  for( int i=0; i<size;i++)
  { 
    if (word[i]=='a' || word[i]=='e' ||word[i]=='i' ||word[i]=='o' ||word[i]=='u' )
    {
      word[i]= tolower(word[i]);
      carrier=word[i];
      cout<<carrier<<" ";
    }
  }
}
int main()
{
  int size=8;
  char name[8]="kaleba";
  print_vowel(name,size);
  return 0;
}
