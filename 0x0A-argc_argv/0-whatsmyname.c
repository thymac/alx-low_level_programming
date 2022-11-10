#include "main.h"
/**
 * main - prints its name, followed by a newline
 * @argc: arguements' count
 * @argv: arguements' value a string
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc)
		printf("%s\n", argv[0]);

	return (0);
}
