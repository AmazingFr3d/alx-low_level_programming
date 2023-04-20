#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - Entry point
 * @argc: Number of command line arguments
 * @argv: Array of command line arguments
 *
 * Return: 0 on success, or an error code on failure
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *operator;
	int result;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];
	op_func = get_op_func(operator);
	if (op_func == NULL)
	{
		printf("Error\n");
		return (99);
	}
	result = op_func(num1, num2);
	printf("%d\n", result);
	return (0);
}
