


int stringCompare(const char* word_1, const char* word_2)
{
    int i = 0;
    while (word_1[i] != '\0' && word_2[i] != '\0') {
        if (word_1[i] > word_2[i]) {
            return 1;
        } else if (word_1[i] < word_2[i]) {
            return -1;
        }
        i++;
    }
    if (word_1[i] == '\0' && word_2[i] == '\0') {
        return 0;
    } else if (word_1[i] == '\0') {
        return -1;
    } else {
        return 1;
    }
}