#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int main(int argc, char *argv[])
{
	if(argc != 3)
		return 0;

	char *needle = ft_strstr(argv[1], argv[2]);
	printf("String: %s\n", needle);
	return 0;
}
