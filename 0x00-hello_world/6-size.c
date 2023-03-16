#include <stdio.h>
/**
 * main - A program that prints the size of various types on the computer type
 * Return: 0 (Success)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;
pritnf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
pritnf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(b));
pritnf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
pritnf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
pritnf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(e));
return (0);
}
