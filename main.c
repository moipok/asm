
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "libasm.h"
#include <errno.h>

int main(void)
{
	char s[20] = "HELLO WORLD";
	char s1[20] = "BYE!!!";
	char s3[20] = "BYE!!!";
	char s_1[20] = "HELLO WORLD";
	char *s2;
	errno = 0;
	int i;
	s2 = NULL;
	printf("__________len__________\n");
	printf("%d = s= NULL\n", (int)ft_strlen(s2));
	printf("%d  s= HELLO\n", (int)ft_strlen("HELLO"));
	printf("%d  s= HELLO\n", (int)strlen("HELLO"));
	printf("__________cmp__________\n");
	printf("%s\n", s);
	printf("%s\n", s1);
	printf("           %d\n", ft_strcmp(s,s1));
	printf("           %d\n", strcmp(s,s1));
	printf("%s\n", "1234");
	printf("%s\n", "122");
	printf("           %d\n", ft_strcmp("1234","122"));
	printf("           %d\n", strcmp("1234","122"));
	printf("%s\n", "12");
	printf("%s\n", "122");
	printf("           %d\n", ft_strcmp("12","122"));
	printf("           %d\n", strcmp("12","122"));
	printf("%s\n", "126");
	printf("%s\n", "122");
	printf("           %d\n", ft_strcmp("126","122"));
	printf("           %d\n", strcmp("126","122"));
	printf("%s\n", NULL);
	printf("%s\n", NULL);
	printf("           %d\n", ft_strcmp(NULL,NULL));
	//printf("           %d\n", strcmp(NULL,NULL)); seg original



	printf("__________cpy__________\n");
	printf("%s\n", s);
	printf("%s\n", s1);
	printf("%s\n", ft_strcpy(s,s1));
	s[3] = '5';
	printf("%s\n", s);
	printf("%s\n", s1);
	s[3] = 'L';
	printf("__________cpy original__________\n");
	printf("%s\n", s_1);
	printf("%s\n", s3);
	printf("%s\n", strcpy(s_1,s3));
	s_1[3] = '5';
	printf("%s\n", s_1);
	printf("%s\n", s3);
	s_1[3] = 'L';
	printf("________NULL test____________\n");
	printf("%s\n",ft_strcpy("qwqw", NULL));
	printf("%s\n",ft_strcpy(NULL, "qwesdfd"));
	printf("%s\n",ft_strcpy(NULL, NULL));



	printf("\n___________write_________\n");
	printf("symbols = %d\n", (int)ft_write(1, "HELLO\n", 6));
	printf("errno = %d\n", errno);
	printf("symbols = %d\n", (int)write(1, "HELLO\n", 6));
	printf("errno = %d\n", errno);
	printf("___________write NULL_________\n");
	printf("symbols = %d\n", (int)ft_write(1, NULL, 6));
	printf("errno = %d\n", errno);
	printf("symbols = %d\n", (int)write(1, NULL, 6));
	printf("errno = %d\n", errno);
	printf("____________________\n\n");
	printf("\n___________read_________\n");
	errno = 0;
	int fd;
	fd = open("Makefile");
	printf("symbols = %d\n", (int)ft_read(fd, s, 3));
	s[3] = '\0';
	printf("errno = %d\n", errno);
	printf("%s\n", s);
	close(fd);
	fd = open("Makefile");
	printf("symbols = %d\n", (int)read(fd, s, 3));
	s[3] = '\0';
	printf("errno = %d\n", errno);
	printf("%s\n", s);
	close(fd);
	printf("\n________________dup_______________\n");
	s2 = NULL;
	printf("s = %s\n", s2);
	s2 = ft_strdup("LALALALLAAL\n");
	printf("s = %s\n", s2);
	s2 = NULL;
	printf("s = %s\n", s2);
	s2 = strdup("LALALALLAAL\n");
	printf("s = %s\n", s2);
	return (0);
}
//nasm -f macho64