void lowerCase(char word[])
{
    for (int i = 0; word[i] != '\0'; i++)
    {
        if (word[i] >= 'A' && word[i] <= 'Z')
        {
            word[i] = word[i] - 'A' + 'a';
        }
    }
}