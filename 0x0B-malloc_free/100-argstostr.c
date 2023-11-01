#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *argstostr - concatenates *arguments of a program
 * @ac: int
 * @av: pointer
 * Return: result
*/

char *argstostr(int ac, char **av) 
{
    if (ac == 0 || av == NULL) 
    {
        return (NULL);
    }

    int total_length = 0;
    
    for (int i = 0; i < ac; i++) 
    {
        total_length += strlen(av[i]) + 1; // +1 for the newline character
    }

    char *result = malloc(sizeof(char) * total_length);
    if (result == NULL) 
    {
        return (NULL);
    }

    int current_index = 0;
    
    for (int i = 0; i < ac; i++) 
    {
        strcpy(result + current_index, av[i]);
        current_index += strlen(av[i]);
        result[current_index] = '\n';
        current_index++;
    }
}
