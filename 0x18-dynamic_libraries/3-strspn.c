#include "main.h"
/**
 * _strspn- function that gets the length of a prefix
 * @s: string to eval
 * @accept: target match
 * Return : number of bytes 
 * 
 */
unsigned int _strspn(char *s, char *accept)
{
    int i = 0, j;
    int matches = 0;

    while (s[i] != '\0') /* interating thru the string*/

    for(j = 0; accept[j] != '\0'; j++) /**going thru the target*/
    {
    if (s[i] = accept[j])
    {
        matches++;
        break;
    }
    if (accept[j+1] == '\0' && s[i] != accept[j])
    return matches++;

    }
    
}