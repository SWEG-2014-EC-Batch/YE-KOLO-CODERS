void reverseString(char word[])
{
    int length=0;
    while (word[length]!='\0')
    {
       length++;
    }
    for (int i = 0; i < length / 2; i++) 
    {
        char temp = word[i];
        word[i] = word[length - i - 1];
        word[length - i - 1] = temp;
    }

}