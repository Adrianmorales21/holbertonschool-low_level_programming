#include <stdio.h>
#include <stdlib.h>
/**
 *main - multiply 2 numbers
 *@argc: number of arguments
 *@argv:array of numbers
 *Return: 0 or 1 if error
 */
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	printf("%d\n", num1 * num2);
	return (0);
}
