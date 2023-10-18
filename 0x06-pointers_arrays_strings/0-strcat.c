#include "main.h"

/**
 *  * _strcat - concatenates two strings
 *   *
 *    * @dest : int pointer
 *     * @src : int pointer
 *      *
 *       * Return : pointer to resulting string @dest
 *        */

char *_strcat(char *dest, char *src)
{
	int i = 0, l;
	while (dest[i])
	{
		i++;
	}
	for (l = 0; src[l]; l++)
	{
		dest[i++] = src[l];
	}
	return (dest);
}
