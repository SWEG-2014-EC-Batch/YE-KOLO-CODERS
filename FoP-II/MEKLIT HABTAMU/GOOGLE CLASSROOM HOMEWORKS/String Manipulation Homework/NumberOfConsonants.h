

int consonantNum(char word[], int& consonantNum)
{
    consonantNum = 0;
    for (int i = 0; word[i] != '\0'; i++) {
        if ((word[i] >= 'a' && word[i] <= 'z') || (word[i] >= 'A' && word[i] <= 'Z'))
         {
            if (word[i] != 'a' && word[i] != 'e' && word[i] != 'i' && word[i] != 'o' && word[i] != 'u' && word[i] != 'A' && word[i] != 'E' && word[i] != 'I' && word[i] != 'O' && word[i] != 'U') {
                consonantNum++;
            }
        }
    }
    return consonantNum;
}