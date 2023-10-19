#include "main.h"
#include <stdio.h>

/**
 * isPrintableASCII - Check if a character is a printable ASCII character.
 *
 * @n: int representing the ASCII character
 *
 * Return: 1 if true, 0 if false
 */
int isPrintableASCII(int n)
{
return (n >= 32 && n <= 126);
}

/**
 * printHexes - Print the hexadecimal representation of a portion of a buffer.
 *
 * @b: char pointer to the buffer
 * @start: int representing the start position in the buffer
 * @end: int representing the end position in the buffer
 *
 * Return: None (void)
 */
void printHexes(char *b, int start, int end)
{
int i = 0;
while (i < 10)
{
if (i < end)
{
printf("%02x", *(b + start + i));
}
else
{
printf("  ");
}
if (i % 2)
{
printf(" ");
}
i++;
}
}

/**
 * printASCII - Print the ASCII representation of a portion of a buffer.
 *
 * @b: char pointer to the buffer
 * @start: int representing the start position in the buffer
 * @end: int representing the end position in the buffer
 *
 * Return: None (void)
 */
void printASCII(char *b, int start, int end)
{
int ch, i = 0;
while (i < end)
{
ch = *(b + i + start);
if (!isPrintableASCII(ch))
{
ch = 46;
}
printf("%c", ch);
i++;
}
}

/**
 * print_buffer - Print a buffer in a hexdump-like format.
 *
 * @b: char pointer to the buffer
 * @size: int representing the size of the buffer
 *
 * Return: None (void)
 */
void print_buffer(char *b, int size)
{
int start, end;

if (size > 0)
{
for (start = 0; start < size; start += 10)
{
end = (size - start < 10) ? size - start : 10;
printf("%08x: ", start);
printHexes(b, start, end);
printASCII(b, start, end);
printf("\n");
}
}
else
{
printf("\n");
}
}
