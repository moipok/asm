#ifndef LIBASM_H
# define LIBASM_H

size_t	ft_strlen(char const *str);
char	*ft_strcpy(char *dst, const char *src);
int		ft_strcmp(const char *dst, const char *src);
ssize_t	ft_write(int fildes, const void *buf, size_t nbyte);
ssize_t	ft_read(int fildes, void *buf, size_t nbyte);
char	*ft_strdup(const char *s1);

#endif