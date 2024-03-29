#include <stdio.h>
#include <stdlib.h>
/**
 * main - Adds positive numbers
 * @argc: The number of arguments passed
 * @argv: The array of arguments passed
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char **argv)
{
	 int sum = 0;
    int i, j;

    for (i = 1; i < argc; i++)
    {
        for (j = 0; argv[i][j]; j++)
        {
            if (argv[i][j] < '0' || argv[i][j] > '9')
            {
                printf("Error\n");
                return 1;
            }
        }
        sum += atoi(argv[i]);
    }
    printf("%d\n", sum);
    return 0;
}
