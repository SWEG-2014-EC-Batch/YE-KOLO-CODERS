int StringLengthCalc(char word[], int length)
{
    length = 0;
    for (int i = 0; word[i] != '\0'; i++)
    {
        length++;
    }
    return length;
}