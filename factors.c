#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile - read, send to standard output number of chars
 * @filename: filename
 * Return: number of chars printed
 */

int main(int ac, char **av)
{
	int i, j, flag, fd, h;
	int leido = 0;
	long int number, number2, k;
	char *buf, *buf2;
	int letters = 100;

	leido = leido;
	ac = ac;
	number = 0;
	fd = open(av[1], O_RDONLY);
	buf malloc(1000 * sizeof(char));
	buf2 = malloc(120 * sizeof(char));
	leido = read(fd, buf, letters);
	i = 0;
	while (buf[i] != 0)
	{
		j = 0;
		for (h = 0; h <= 100; h++)
			buf2[h] = 0;
		while (buf[i] != 10)
		{
			buf2[j] = buf[i];
			i++;
			j++;
		}
		number = atoi(buf2);
		flag = 0;
		for (k = 2; k < number / 2 && flag == 0; k++)
		{
			if (number % k == 0)
				flag = 1;
		}
		number2 = number / (k - 1);
		i++;
	}
	free(buf);
	free(buf2);
	close(fd);
	return (0);
}
