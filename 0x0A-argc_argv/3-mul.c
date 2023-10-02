#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - multiplies two numbers from arguments
 * @argc: number of argv array
 * @argv: array of arguments
 * Return: Always 0 (Success) or 1 (Failure)
 */

int main(int argc, char *argv[])
{
int n1;
int n2;
if (argc != 3)
{
printf("Error\n");
return (1);
}
n1 = atoi(argv[1]);
n2 = atoi(argv[2]);
printf("%d\n", n1 * n2);
return (0);
}
