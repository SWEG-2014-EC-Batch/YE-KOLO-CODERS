
#ifndef STRINGLENGTH_H
#define STRINGLENGTH_H
#include "vowels.h"
int string_length(char string[])
{
    int length=0;
    while(string[length]!='\0')
    {
       length++;
    }
    return length;
}
#endif
