#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("The size of char is %lu byte(s).\n", (unsigned long)sizeof(char));
	printf("The size of int is %lu byte(s).\n", (unsigned long)sizeof(int));
	printf("The size of float is %lu byte(s).\n", (unsigned long)sizeof(float));
	printf("The size of long int is %lu byte(s).\n", (unsigned long)sizeof(long int));
	printf("The size of long long int is %lu byte(s).\n", (unsigned long)sizeof(long long int));
	return (0);
}
