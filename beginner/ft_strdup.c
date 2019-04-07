#include <stdlib.h>

char *ft_strdup(char *src)
{
	int len = 0;
	int i = 0;
	char *res;

	while (src[len] != '\0')
		len++;
	res = (char*)malloc(sizeof(char) * len +1);
	while (src[i] != '\0')
	{
		res[i] = src[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
