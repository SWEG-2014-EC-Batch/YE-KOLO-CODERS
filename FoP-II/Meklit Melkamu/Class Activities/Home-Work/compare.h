int compare(char* string1, char* string2)
{
    while (*string1 && (*string1 == *string2)) 
    {
        string1++;
        string2++;
    }
   if (*string1 < *string2) 
    {
        return -1;
    }
   else if (*string1 > *string2)
    {
        return 1;
    }
   else 
    {
        return 0;
    }
}
