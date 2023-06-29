#include "main.h"
/**
 * _strcat - concatenated two string
 * @dest: get first string
 * @src: get second string
 * Return: dest
 */
char * _strcat(char * dest, char * src) 
{
    int a = -1, i;
    for (i = 0; dest[i] != '\0'; i++)
	    ;
    do {
        a++;
        dest[i] = src[a];
        i++;
    } while (src[a] != '\0');
    return (dest);
}
