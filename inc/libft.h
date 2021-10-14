#ifndef LIBFT_H
# define LIBFT_H
# define SIZE_T_MAX 18446744073709551615
#include <stdlib.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void    *ft_memccpy(void *dest, const void *src, int c, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int 	ft_memcmp(const void *s1, const void *s2, size_t n);

int	ft_strlen(char *str);
char	*ft_strdup(const char *s);
char 	*ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *dest, const char *src, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
char 	*ft_strcat(char *dest, const char *src);
char	*ft_strncat(char *dest, const char *src, size_t n);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
char	*ft_strnew(size_t length);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *haysack, const char *needle);
char 	*ft_strnstr(const char *big, const char *little, size_t len);
int	ft_strcmp(const char *s1, const char *s2);
int	ft_strncmp(const char *s1, const char *s2, size_t n);

int	ft_atoi(const char *str);
int	ft_isspace(int c);
int	ft_isalpha(int c);
int 	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isprint(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);

void	*ft_calloc(size_t nmemb, size_t size);
#endif

