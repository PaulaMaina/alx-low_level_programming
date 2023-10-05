/* The program prints the sizes of data types */
#include <stdio.h>
/**
 * main-prints sizes of data types
 * Return: 0 if no errors are found
 */
int main(void)
{
	char c;
	int i;
	long j;
	long long k;
	float x;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(j));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(k));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(x));
	return (0);
}
