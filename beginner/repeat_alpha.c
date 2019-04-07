#include <unistd.h>

int main(int argc, char **argv)
{
	int letter;
	int i = 0;

	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			letter = 0;
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				letter = argv[1][i] - 63;
				while (--letter)
					write(1, &argv[1][i], 1);
			}
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				letter = argv[1][i] - 95;
				while (--letter)
					write(1, &argv[1][i], 1);
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}

