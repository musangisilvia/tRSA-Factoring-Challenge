#include "factors.h"
/**
  * main - factorise number into a product of two smaller numbers.
  * @argc: argument count.
  * @argv: argument vector.
  *
  * Return: 0.
  */
int main(int argc, char **argv)
{
	FILE *fp;
	size_t size = 0;
	char *line = NULL, **temp = NULL;
	unsigned long long int n, p, q;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: factors <file>\n");
		exit(EXIT_FAILURE);
	}
	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		fprintf(stderr, "Could not open file");
		exit(EXIT_FAILURE);
	}
	while (getline(&line, &size, fp) != -1)
	{
		n = strtoul(line, temp, 10);
		printf("%llu\n", n);		
	}
	return (0);
}
