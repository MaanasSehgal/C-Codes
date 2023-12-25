// Write a C program to find the first largest word in a given sentence. Assume that words are separated by spaces.
#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[100];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    char *token = strtok(sentence, " ");
    char largestWord[50] = "";

    while (token != NULL)
    {
        if (strlen(token) > strlen(largestWord))
        {
            strcpy(largestWord, token);
        }
        token = strtok(NULL, " ");
    }

    printf("The first largest word is: %s\n", largestWord);

    return 0;
}
