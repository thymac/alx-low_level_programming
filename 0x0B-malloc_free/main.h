#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
int _strlen_recursion(char *s);

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(char **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);

#endif
