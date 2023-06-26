#ifndef VOWELS_H
#define VOWELS_H
#include "stringlength.h"
int vowels(char string[])
{
     int vowelnum=0;
     for (int i=0;i<string_length(string);i++)
     {
       char c=string[i];
       if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U') 
       {
            vowelnum++;
       }
     }

     return vowelnum;
 }
#endif
