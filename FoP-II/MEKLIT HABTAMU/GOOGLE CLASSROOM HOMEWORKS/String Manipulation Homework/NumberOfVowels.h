
int VowelNum(char , int );
int consonantNum(char ,int );


int VowelNum(char word[], int vowelNum)
{

    vowelNum = 0;
    for (int i = 0; word[i] != '\0'; i++)
    {

        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U')
        {
            vowelNum++;
        }
        else
        {
            continue;
        }
    }
    return (vowelNum);
}

