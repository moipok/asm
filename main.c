
#include <stdio.h>
#include "libasm.h"

int main(void)
{
	char s[20] = "qwerty";
	char s1[20] = "ghhqweqwe";

	printf("%d\n", ft_strlen("HELLO00000000"));
	printf("%d\n", strlen("HELLO00000000"));
	printf("%s\n", s);
	printf("%s\n", s1);
	printf("%s\n", ft_strcpy(s,s1));
	printf("%s\n", s);
	printf("%s\n", s1);
	return (0);
}
//nasm -f macho64