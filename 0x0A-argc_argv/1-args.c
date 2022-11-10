#include "main.h"
/**
 * main - prints all arguments it recieves
 * @argc: an argument counter
 * @argv: an argument values
 *
 * Return: Always 0 (Succes)
 */
int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);

	return (0);
}
