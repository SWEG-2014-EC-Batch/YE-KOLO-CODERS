#include "vowels.h"
#ifndef STRINGLENGTH_H
#define STRINGLENGTH_H
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
