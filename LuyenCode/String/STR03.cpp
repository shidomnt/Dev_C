#include <stdio.h>
#include <string.h>
#include <stdlib.h>

const int MAX_CHAR_LENGTH = 1001;

char* ToLowerCase(char *string)
{
    int length = strlen(string);
    for(int i = 0 ; i < length ; i++)
    {
        if(string[i] >= 'A' && string[i] <= 'Z')
        {
            string[i] += 'a' - 'A';
        }
    }
    return string;
}

int Counter(char* string, char character)
{
    int count = 0;
    int length = strlen(string);
    for(int i = 0 ; i < length ; i++)
    {
        if(string[i] == character)
        count++;
    }
    return count;
}

int *CharCounter(char* string, int *charCodes, int size) {

    int *result = (int*) malloc(sizeof(int)*size);

    for(int i = 0 ; i < size ; i++)
    {
        result[i] = Counter(string, charCodes[i]);
    }

    return result;
}

void input(int *array, int size)
{
    for(int i = 0 ; i < size ; i++)
    {
        char character;
        scanf("%c",&character);
        if(character >= 'A' && character <= 'Z')
        character += 'a' - 'A';
        array[i] = (int) character;
        getchar();
    }
}

void output(int *array, int size)
{
    for(int i = 0 ; i < size ; i++)
    {
        printf("%d\n",array[i]);
    }
}

int main() {

    char *string = (char*) malloc(sizeof(char) * MAX_CHAR_LENGTH);
    int testCaseSize = 0;

    string = ToLowerCase(fgets(string,MAX_CHAR_LENGTH,stdin));
    scanf("%d", &testCaseSize);

    int *testCases = (int*) malloc(sizeof(int) * testCaseSize);
    getchar();
    input(testCases,testCaseSize);

    int *result = CharCounter(string,testCases,testCaseSize);

    output(result,testCaseSize);

    return 0;
}