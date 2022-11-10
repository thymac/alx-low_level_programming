#include "main.h"
/**
 * main - prints all the arguments it receives
 * @argc: number of arguments
 * @argv: values of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
