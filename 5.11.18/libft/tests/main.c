/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgaribot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 17:41:59 by fgaribot          #+#    #+#             */
/*   Updated: 2018/11/09 19:15:33 by fgaribot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// BIBLIOTHEQUES

#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

// PROTOTYPES

void		*ft_memset(void *b, int c, size_t len);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memccpy(void *dst, const void *src, int c, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);
void		ft_bzero(void *s, size_t n);
size_t		ft_strlen(const char *s);
char        *ft_strdup(const char *s1);
char    	*ft_strcpy(char *dst, const char *src);
int			ft_atoi(const char *str);
void		ft_putstr(char const *s);
void		ft_putstr_fd(char const *s, int fd);
void		ft_putchar(char c);
void		ft_putchar_fd(char c, int fd);
void		ft_putnbr(int n);
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);
char		*ft_strncpy(char *dst, const char *src, size_t len);
char		*ft_strcat(char *s1, const char *s2);
char		*ft_strncat(char *s1, const char *s2, size_t n);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
char		*ft_strstr(const char *haystack, const char *needle);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
int			ft_strcmp(const char *s1, const char *s2);
int			ft_strncmp(const char *s1, const char *s2, size_t n);



// FONCTIONS


/*
   ft_putstr("\n\n\nappuyer sur entrer");
   getchar();
   system("clear");
   ft_putstr("\n\n\nFONCTION :\n\n\n");
   ft_putstr("\n\nMOI  :");
   ft_putstr("\nTEST :");
   */


int     main(int ac, char **av)
{

	// FT_MEMSET

	char tab[50];
	char tab2[50];


	strcpy(tab, "blablablablibliblimmm");
	strcpy(tab2, "blablablablibliblimmm");

	ft_putstr("\n\n\nappuyer sur entrer");
	getchar();
	system("clear");
	ft_putstr("\n\n\nFT_MEMSET :\n\n\n");
	ft_putstr("\n\nMOI  :");
	ft_putstr(ft_memset(tab, '\0', 50));
	ft_putstr("\nTEST :");
	ft_putstr(memset(tab2, '\0', 50));
	ft_putstr("\n\nMOI  :");
	ft_putstr(ft_memset(tab, '?', 40));
	ft_putstr("\nTEST :");
	ft_putstr(memset(tab2, '?', 40));
	ft_putstr("\n\nMOI  :");
	ft_putstr(ft_memset(tab, '#', 30));
	ft_putstr("\nTEST :");
	ft_putstr(memset(tab2, '#', 30));
	ft_putstr("\n\nMOI  :");
	ft_putstr(ft_memset(tab, '0', 0));
	ft_putstr("\nTEST :");
	ft_putstr(memset(tab2, '0', 0));
	ft_putstr("\n\nMOI  :");
	ft_putstr(ft_memset(tab, '8', 49));
	ft_putstr("\nTEST :");
	ft_putstr(memset(tab2, '8', 49));


	// FT_BZERO

	char tab3[50];
	char tab4[50];
	int	i_bzero = -1;

	strcpy(tab3, "blablablablibliblimmm");
	strcpy(tab4, "blablablablibliblimmm");

	ft_putstr("\n\n\nappuyer sur entrer");
	getchar();
	system("clear");
	ft_putstr("\n\n\nFT_BZERO :\n\n\n");
	ft_putstr("\n\nMOI  :");
	ft_bzero(tab3, 10);
	while (++i_bzero < 20)
		ft_putchar(tab3[i_bzero]);
	ft_putstr("\nTEST :");
	i_bzero = -1;
	bzero(tab4, 10);
	while (++i_bzero < 20)
		ft_putchar(tab4[i_bzero]);

	strcpy(tab3, "blablablablibliblimmm");
	strcpy(tab4, "blablablablibliblimmm");

	ft_putstr("\n\nMOI  :");
	i_bzero = -1;
	ft_bzero(tab3, 0);
	while (++i_bzero < 20)
		ft_putchar(tab3[i_bzero]);
	ft_putstr("\nTEST :");
	i_bzero = -1;
	bzero(tab4, 0);
	while (++i_bzero < 20)
		ft_putchar(tab4[i_bzero]);

// FT_MEMCPY

	char  tab_memcpy[50];

   ft_putstr("\n\n\nappuyer sur entrer");
   getchar();
   system("clear");
   ft_putstr("\n\n\nFT_MEMCPY :\n\n\n");
   ft_putstr("\n\nMOI  :");
	memset(tab_memcpy, 'F', 42);
   ft_putstr(ft_memcpy(tab_memcpy, "123456789123456789", 14));
   ft_putstr("\nTEST :");
	memset(tab_memcpy, 'F', 42);
   ft_putstr(memcpy(tab_memcpy, "123456789123456789", 14));
   ft_putstr("\n\nMOI  :");
	memset(tab_memcpy, 'F', 42);
   ft_putstr(ft_memcpy(tab_memcpy, "12345'\0'67'\0'89123456789", 14));
   ft_putstr("\nTEST :");
	memset(tab_memcpy, 'F', 42);
   ft_putstr(memcpy(tab_memcpy, "12345'\0'67'\0'89123456789", 14));
   ft_putstr("\n\nMOI  :");
	memset(tab_memcpy, 'F', 42);
   ft_putstr(ft_memcpy(tab_memcpy, "123456789123456789", 0));
   ft_putstr("\nTEST :");
	memset(tab_memcpy, 'F', 42);
   ft_putstr(memcpy(tab_memcpy, "123456789123456789", 0));
   ft_putstr("\n\nMOI  :");
	memset(tab_memcpy, 'F', 42);
   ft_putstr(ft_memcpy(tab_memcpy, "123456789123456789", 20));
   ft_putstr("\nTEST :");
	memset(tab_memcpy, 'F', 42);
   ft_putstr(memcpy(tab_memcpy, "123456789123456789", 20));


// FT_MEMCCPY	


	char  tab_memccpy[50];

   ft_putstr("\n\n\nappuyer sur entrer");
   getchar();
   system("clear");
   ft_putstr("\n\n\nFT_MEMCCPY :\n\n\n");
   ft_putstr("\n\nMOI  :");
	memset(tab_memccpy, 'F', 42);
   ft_putstr(ft_memccpy(tab_memccpy, "123456789123456789", '9', 15));
   ft_putstr("\nTEST :");
	memset(tab_memccpy, 'F', 42);
   ft_putstr(memccpy(tab_memccpy, "123456789123456789", '9', 15));
   ft_putstr("\n\nMOI  :");
	memset(tab_memccpy, 'F', 42);
   ft_putstr(ft_memccpy(tab_memccpy, "12345'\0'67'\0'89123456789", '1', 14));
   ft_putstr("\nTEST :");
	memset(tab_memccpy, 'F', 42);
   ft_putstr(memccpy(tab_memccpy, "12345'\0'67'\0'89123456789", '1', 14));
   ft_putstr("\n\nMOI  :");
	memset(tab_memccpy, 'F', 42);
   if (tab_memccpy != ft_memccpy(tab_memccpy, "123456789123456789", '8', 0))
	   ft_putchar('0');
   ft_putstr(tab_memccpy);
   ft_putstr("\nTEST :");
	memset(tab_memccpy, 'F', 42);
   if (tab_memccpy != memccpy(tab_memccpy, "123456789123456789", '8', 0))
	   ft_putchar('0');
   ft_putstr(tab_memccpy);
   ft_putstr("\n\nMOI  :");
	memset(tab_memccpy, 'F', 42);
   ft_putstr(ft_memccpy(tab_memccpy, "123456789123456789", '3', 20));
   ft_putstr("\nTEST :");
	memset(tab_memccpy, 'F', 42);
   ft_putstr(memccpy(tab_memccpy, "123456789123456789", '3', 20));

// FT_MEMMOVE

   ft_putstr("\n\n\nappuyer sur entrer");
   getchar();
   system("clear");
   ft_putstr("\n\n\nFT_MEMMOVE :\n\n\n");

	char  smemmove[] = "ceci est un test je sais pas trop quoi ecrire";
	char *mm1;
	char *mm2;

	*mm1 = smemmove[8];
	*mm2 = smemmove[10];
   ft_putstr("\n\nMOI  :");
   if (smemmove != ft_memmove(mm1, mm2, 6))
	   ft_putstr("fail");
   ft_putstr(smemmove);
   ft_putstr("\nTEST :");
	char smemmove2[] = "ceci est un test je sais pas trop quoi ecrire";
	*mm1 = smemmove2[8];
	*mm2 = smemmove2[10];
   if (memmove != memmove(mm1, mm2, 6))
	   ft_putchar('0');
   ft_putstr(smemmove);


	//          FT_strlen

	/*
	   printf("%ld\n", strlen(av[1]));
	   printf("%ld\n", ft_strlen(av[1]));
	   return (0);
	   */

	//           FT_strdup

	/*
	   printf("%s\n", strdup(av[1]));
	   printf("%s\n", ft_strdup(av[1]));
	   */

	// 			FT_STRCPY
	/*
	   printf("%s\n", strcpy(av[1], av[2]));
	   printf("%s\n", ft_strcpy(av[1], av[2]));
	   */

	//FT_STRNCPY
	/*
	   char* 	str1 = av[1];
	   char*	str2 = av[2];
	   printf("%s\n", strncpy(str1, str2, atoi(av[3])));
	   printf("%s\n", ft_strncpy(av[1], av[2], atoi(av[3])));

	   printf("%s\n", strncpy("123456789", "979", 3));
	   printf("%sft\n", ft_strncpy("123456789", "123456", 3));



	   printf("%s\n", strncpy("chien", "", 0));
	   printf("%sft\n", ft_strncpy("chien", "", 0));

	   printf("%s\n", strncpy("test", "te", 1));
	   printf("%sft\n", ft_strncpy("test", "te", 1));

*/

	// FT_STRCAT

	/*

	   char	tab[50] = "salut";
	   const char	tab2[4] = "123";
	   printf("%s\n", strcat(tab, tab2));
	//	printf("%s\n", ft_strcat(tab, tab2));

*/


	/// FT_STRNCAT

	/*

	   char    tab[50] = "salut";
	   const char  tab2[4] = "123";
	//		printf("%s\n", strncat(tab, tab2, 2));
	printf("%s\n", ft_strncat(tab, tab2, 1));

*/

	// FT_STRLCAT

	/*

	   int i = 0;
	   char		tab[50] = "bla";
	   const char	tab2[10] = "123456789";
	//	printf("%lu\n", strlcat(tab, tab2, 9));
	printf("%lu\n", ft_strlcat(tab, tab2, 9));
	while (tab[i])
	{
	printf("%c", tab[i]);
	i++;
	}


*/


	// FT_STRCHR



	char	*str;

	ft_putstr("\n\n\nappuyer sur entrer");
	getchar();
	system("clear");

	ft_putstr("\n\n\nFT_STRSTR :\n\n\n");

	ft_putstr("\n\nMOI :");
	ft_putstr(ft_strchr("blabl'\0'Abla", 0));
	ft_putstr("\nTEST :");
	ft_putstr(strchr("blabl'\0'Abla", 0));
	ft_putstr("\n\nMOI :");
	ft_putstr(ft_strchr("blablAbla", 97));
	ft_putstr("\nTEST :");
	ft_putstr(strchr("blablAbla", 97));
	ft_putstr("\n\nMOI :");
	ft_putstr(ft_strchr("blablAbla", 65));
	ft_putstr("\nTEST :");
	ft_putstr(strchr("blablAbla", 65));
	ft_putstr("\n\nMOI :");
	if (!(str = ft_strchr("blablAbla", 's')))
		ft_putstr("NULL");
	else
		ft_putstr(str);
	ft_putstr("\nTEST :");
	if (!(str = strchr("blablAbla", 's')))
		ft_putstr("NULL");
	else
		ft_putstr(str);


	// FT_STRRCHR

	char	*str2;

	ft_putstr("\n\n\nappuyer sur entrer");
	getchar();
	system("clear");

	ft_putstr("\n\n\nFT_STRRCHR :\n\n\n");

	ft_putstr("\n\nMOI :");
	ft_putstr(ft_strrchr("blabl'\0'Abla", 0));
	ft_putstr("\nTEST :");
	ft_putstr(strrchr("blabl'\0'Abla", 0));
	ft_putstr("\n\nMOI :");
	ft_putstr(ft_strrchr("blablAbla", 97));
	ft_putstr("\nTEST :");
	ft_putstr(strrchr("blablAbla", 97));
	ft_putstr("\n\nMOI :");
	ft_putstr(ft_strrchr("blablAbla", 65));
	ft_putstr("\nTEST :");
	ft_putstr(strrchr("blablAbla", 65));
	ft_putstr("\n\nMOI :");
	if (!(str2 = ft_strrchr("blablAbla", 's')))
		ft_putstr("NULL");
	else
		ft_putstr(str2);
	ft_putstr("\nTEST :");
	if (!(str2 = strrchr("blablAbla", 's')))
		ft_putstr("NULL");
	else
		ft_putstr(str2);


	// FT_STRSTR


	char *str3;

	ft_putstr("\n\n\nappuyer sur entrer");
	getchar();
	system("clear");
	ft_putstr("\n\n\nFT_STRSTR :\n\n\n");
	ft_putstr("\n\nMOI :");
	ft_putstr(ft_strstr("huihuihefewuiuhieBonjourhwruiw", "Bonjour"));
	ft_putstr("\nTEST :");
	ft_putstr(strstr("huihuihefewuiuhieBonjourhwruiw", "Bonjour"));
	ft_putstr("\n\nMOI :");
	ft_putstr(ft_strstr("huihuihefewuiuhieBonjourhwruiw", "rui"));
	ft_putstr("\nTEST :");
	ft_putstr(strstr("huihuihefewuiuhieBonjourhwruiw", "rui"));
	ft_putstr("\n\nMOI :");
	ft_putstr(ft_strstr("huihuihefewuiuhieBonjourhwruiw", "hui"));
	ft_putstr("\nTEST :");
	ft_putstr(strstr("huihuihefewuiuhieBonjourhwruiw", "hui"));
	ft_putstr("\n\nMOI :");
	ft_putstr(ft_strstr("huihuihefewuiuhieBonjourhwruiw", "huihe"));
	ft_putstr("\nTEST :");
	ft_putstr(strstr("huihuihefewuiuhieBonjourhwruiw", "huihe"));
	ft_putstr("\n\nMOI :");
	if (!(str3 = ft_strstr("huihuihefewuiuhieBonjourhwruiw", "\n")))
		ft_putstr("NULL");
	else
		ft_putstr(str3);
	ft_putstr("\nTEST :");
	if (!(str3 = ft_strstr("huihuihefewuiuhieBonjourhwruiw", "\n")))
		ft_putstr("NULL");
	else
		ft_putstr(str3);
	ft_putstr("\n\nMOI :");
	if (!(str3 = ft_strstr("huihuihefewuiuhieBonjourhwruiw", "riuw")))
		ft_putstr("NULL");
	else
		ft_putstr(str3);
	ft_putstr("\nTEST :");
	if (!(str3 = ft_strstr("huihuihefewuiuhieBonjourhwruiw", "riuw")))
		ft_putstr("NULL");
	else
		ft_putstr(str3);
	ft_putstr("\n\nMOI :");
	if (!(str3 = ft_strstr("huihuihefewuiuhieBonjourhwruiw", "riuw\0")))
		ft_putstr("NULL");
	else
		ft_putstr(str3);
	ft_putstr("\nTEST :");
	if (!(str3 = ft_strstr("huihuihefewuiuhieBonjourhwruiw", "riuw\0")))
		ft_putstr("NULL");
	else
		ft_putstr(str3);

	// FT_STRNSTR


	char *str4;

	ft_putstr("\n\n\nappuyer sur entrer");
	getchar();
	system("clear");
	ft_putstr("\n\n\nFT_STRNSTR :\n\n\n");
	ft_putstr("\n\nMOI :");
	if (!(str4 = ft_strnstr("huihuihefewuiuhieBonjourhwruiw", "Bonjour", 20)))
		ft_putstr("NULL");
	else
		ft_putstr(str4);
	//ft_putstr(ft_strnstr("huihuihefewuiuhieBonjourhwruiw", "Bonjour", 20));
	ft_putstr("\nTEST :");
	if (!(str4 = ft_strnstr("huihuihefewuiuhieBonjourhwruiw", "Bonjour", 20)))
		ft_putstr("NULL");
	else
		ft_putstr(str4);
	//ft_putstr(strnstr("huihuihefewuiuhieBonjourhwruiw", "Bonjour", 20));
	ft_putstr("\n\nMOI :");
	ft_putstr(ft_strnstr("huihuihefewuiuhieBonjourhwruiw", "Bonjour", 30));
	ft_putstr("\nTEST :");
	ft_putstr(strnstr("huihuihefewuiuhieBonjourhwruiw", "Bonjour", 30));
	ft_putstr("\n\nMOI :");
	ft_putstr(ft_strnstr("huihuihefewuiuhieBonjourhwruiw", "ruiw", 30));
	ft_putstr("\nTEST :");
	ft_putstr(strnstr("huihuihefewuiuhieBonjourhwruiw", "ruiw", 30));
	ft_putstr("\n\nMOI :");
	ft_putstr(ft_strnstr("huihuihefewuiuhieBonjourhwruiw", "hui", 10));
	ft_putstr("\nTEST :");
	ft_putstr(strnstr("huihuihefewuiuhieBonjourhwruiw", "hui", 10));
	ft_putstr("\n\nMOI :");
	ft_putstr(ft_strnstr("huihuihefewuiuhieBonjourhwruiw", "huihe", 11));
	ft_putstr("\nTEST :");
	ft_putstr(strnstr("huihuihefewuiuhieBonjourhwruiw", "huihe", 11));
	ft_putstr("\n\nMOI :");
	if (!(str4 = ft_strnstr("huihuihefewuiuhieBonjourhwruiw", "\n", 30)))
		ft_putstr("NULL");
	else
		ft_putstr(str4);
	ft_putstr("\nTEST :");
	if (!(str4 = ft_strnstr("huihuihefewuiuhieBonjourhwruiw", "\n", 30)))
		ft_putstr("NULL");
	else
		ft_putstr(str4);
	ft_putstr("\n\nMOI :");
	if (!(str4 = ft_strnstr("huihuihefewuiuhieBonjourhwruiw", "riuw", 30)))
		ft_putstr("NULL");
	else
		ft_putstr(str4);
	ft_putstr("\nTEST :");
	if (!(str4 = ft_strnstr("huihuihefewuiuhieBonjourhwruiw", "riuw", 30)))
		ft_putstr("NULL");
	else
		ft_putstr(str4);
	ft_putstr("\n\nMOI :");
	if (!(str4 = ft_strnstr("huihuihefewuiuhieBonjourhwruiw", "h", 0)))
		ft_putstr("NULL");
	else
		ft_putstr(str4);
	ft_putstr("\nTEST :");
	if (!(str3 = ft_strnstr("huihuihefewuiuhieBonjourhwruiw", "h", 0)))
		ft_putstr("NULL");
	else
		ft_putstr(str4);


	// FT_STRCMP

	ft_putstr("\n\n\nappuyer sur entrer");
	getchar();
	system("clear");
	ft_putstr("\n\n\nFT_STRCMP :\n\n\n");
	ft_putstr("\nMOI :");
	ft_putstr("\nTEST :");


	// FT_STRCMP

	ft_putstr("\n\n\nappuyer sur entrer");
	getchar();
	system("clear");
	ft_putstr("\n\n\nFT_STRCMP :\n\n\n");
	ft_putstr("\nMOI :");
	ft_putstr("\nTEST :");
	// 			FT_ATOI

	/*
	   printf("%d\n", ft_atoi(av[1]));
	   printf("%d\n", atoi(av[1]));
	   printf("%d\n", ft_atoi("2147483647"));
	   printf("%d\n", atoi("2147483647"));
	   printf("%d\n", ft_atoi("1"));
	   printf("%d\n", atoi("1"));
	   printf("%d\n", ft_atoi("-214783648"));
	   printf("%d\n", atoi("-214783648"));
	   printf("%d\n", ft_atoi("0"));
	   printf("%d\n", atoi("0"));
	   printf("%d\n", ft_atoi("-214783649"));
	   printf("%d\n", atoi("-214783649"));
	   printf("%d\n", ft_atoi("2147483647"));
	   printf("%d\n", atoi("2147483647"));
	   */

	//			FT_ISALPHA

	/*

	   printf("%dft\n", ft_isalpha(atoi(av[1])));
	   printf("%d\n", isalpha(atoi(av[1])));
	   printf("%dft\n", ft_isalpha(63));
	   printf("%d\n", isalpha(63));
	   printf("%dft\n", ft_isalpha(64));
	   printf("%d\n", isalpha(64));
	   printf("%dft\n", ft_isalpha(65));
	   printf("%d\n", isalpha(66));
	   printf("%dft\n", ft_isalpha(90));
	   printf("%d\n", isalpha(90));
	   printf("%dft\n", ft_isalpha(91));
	   printf("%d\n", isalpha(91));
	   printf("%dft\n", ft_isalpha(92));
	   printf("%d\n", isalpha(92));
	   printf("%dft\n", ft_isalpha(95));
	   printf("%d\n", isalpha(95));
	   printf("%dft\n", ft_isalpha(96));
	   printf("%d\n", isalpha(96));
	   printf("%dft\n", ft_isalpha(97));
	   printf("%d\n", isalpha(97));
	   printf("%dft\n", ft_isalpha(122));
	   printf("%d\n", isalpha(122));
	   printf("%dft\n", ft_isalpha(123));
	   printf("%d\n", isalpha(123));
	   printf("%dft\n", ft_isalpha(124));
	   printf("%d\n", isalpha(124));

*/

	// FT_ISDIGIT

	/*

	   printf("%dft\n", ft_isdigit(atoi(av[1])));
	   printf("%d\n", isdigit(atoi(av[1])));
	   printf("%dft\n", ft_isdigit(47));
	   printf("%d\n", isdigit(47));
	   printf("%dft\n", ft_isdigit(48));
	   printf("%d\n", isdigit(48));
	   printf("%dft\n", ft_isdigit(49));
	   printf("%d\n", isdigit(49));
	   printf("%dft\n", ft_isdigit(57));
	   printf("%d\n", isdigit(57));
	   printf("%dft\n", ft_isdigit(58));
	   printf("%d\n", isdigit(58));
	   printf("%dft\n", ft_isdigit(59));
	   printf("%d\n", isdigit(59));

*/

	// FT_ISALNUM

	/*

	   printf("%dft\n", ft_isalnum(atoi(av[1])));
	   printf("%d\n", isalnum(atoi(av[1])));
	   printf("%dft\n", ft_isalnum(63));
	   printf("%d\n", isalnum(63));
	   printf("%dft\n", ft_isalnum(64));
	   printf("%d\n", isalnum(64));
	   printf("%dft\n", ft_isalnum(65));
	   printf("%d\n", isalnum(66));
	   printf("%dft\n", ft_isalnum(90));
	   printf("%d\n", isalnum(90));
	   printf("%dft\n", ft_isalnum(91));
	   printf("%d\n", isalnum(91));
	   printf("%dft\n", ft_isalnum(92));
	   printf("%d\n", isalnum(92));
	   printf("%dft\n", ft_isalnum(95));
	   printf("%d\n", isalnum(95));
	   printf("%dft\n", ft_isalnum(96));
	   printf("%d\n", isalnum(96));
	   printf("%dft\n", ft_isalnum(97));
	   printf("%d\n", isalnum(97));
	   printf("%dft\n", ft_isalnum(122));
	   printf("%d\n", isalnum(122));
	   printf("%dft\n", ft_isalnum(123));
	   printf("%d\n", isalnum(123));
	   printf("%dft\n", ft_isalnum(124));
	   printf("%d\n", isalnum(124));

	   printf("%dft\n", ft_isalnum(47));
	   printf("%d\n", isalnum(47));
	   printf("%dft\n", ft_isalnum(48));
	   printf("%d\n", isalnum(48));
	   printf("%dft\n", ft_isalnum(49));
	   printf("%d\n", isalnum(49));
	   printf("%dft\n", ft_isalnum(57));
	   printf("%d\n", isalnum(57));
	   printf("%dft\n", ft_isalnum(58));
	   printf("%d\n", isalnum(58));
	   printf("%dft\n", ft_isalnum(59));
	   printf("%d\n", isalnum(59));




*/

	// FT_ISASCII

	/*


	   printf("%dft\n", ft_isascii(atoi(av[1])));
	   printf("%d\n", isascii(atoi(av[1])));

	   printf("%dft\n", ft_isascii(-1));
	   printf("%d\n", isascii(-1));
	   printf("%dft\n", ft_isascii(0));
	   printf("%d\n", isascii(0));
	   printf("%dft\n", ft_isascii(1));
	   printf("%d\n", isascii(1));
	   printf("%dft\n", ft_isascii(127));
	   printf("%d\n", isascii(127));
	   printf("%dft\n", ft_isascii(128));
	   printf("%d\n", isascii(128));
	   printf("%dft\n", ft_isascii(129));
	   printf("%d\n", isascii(129));


*/

	// FT_ISPRINT

	/*

	   printf("%dft\n", ft_isprint(atoi(av[1])));
	   printf("%d\n", isprint(atoi(av[1])));


	   printf("%dft\n", ft_isprint(31));
	   printf("%d\n", isprint(31));
	   printf("%dft\n", ft_isprint(127));
	   printf("%d\n", isprint(127));
	   printf("%dft\n", ft_isprint(32));
	   printf("%d\n", isprint(32));
	   printf("%dft\n", ft_isprint(126));
	   printf("%d\n", isprint(126));

*/

	//	FT_TOUPPER

	/*

	   printf("%dft\n", ft_toupper(atoi(av[1])));
	   printf("%d\n", toupper(atoi(av[1])));
	   printf("%dft\n", ft_toupper(97));
	   printf("%d\n", toupper(97));
	   printf("%dft\n", ft_toupper(96));
	   printf("%d\n", toupper(96));
	   printf("%dft\n", ft_toupper(123));
	   printf("%d\n", toupper(123));
	   printf("%dft\n", ft_toupper(122));
	   printf("%d\n", toupper(122));
	   printf("%dft\n", ft_toupper(65));
	   printf("%d\n", toupper(65));
	   printf("%dft\n", ft_toupper(64));
	   printf("%d\n", toupper(64));
	   printf("%dft\n", ft_toupper(90));
	   printf("%d\n", toupper(90));
	   printf("%dft\n", ft_toupper(91));
	   printf("%d\n", toupper(91));


*/

	//	FT_TOLOWER

	/*	
		printf("%dft\n", ft_tolower(atoi(av[1])));
		printf("%d\n", tolower(atoi(av[1])));
		printf("%dft\n", ft_tolower(97));
		printf("%d\n", tolower(97));
		printf("%dft\n", ft_tolower(96));
		printf("%d\n", tolower(96));
		printf("%dft\n", ft_tolower(123));
		printf("%d\n", tolower(123));
		printf("%dft\n", ft_tolower(122));
		printf("%d\n", tolower(122));
		printf("%dft\n", ft_tolower(65));
		printf("%d\n", tolower(65));
		printf("%dft\n", ft_tolower(64));
		printf("%d\n", tolower(64));
		printf("%dft\n", ft_tolower(90));
		printf("%d\n", tolower(90));
		printf("%dft\n", ft_tolower(91));
		printf("%d\n", tolower(91));

*/

	// FT_PUTSTR
	/*	
		ft_putstr(av[1]);
		*/

	// FT_PUTSTR_FD

	/*
	   ft_putstr_fd(av[1], atoi(av[2]));

*/

	// FT_PUTNBR

	/*	
		ft_putnbr(atoi(av[1]));
		ft_putchar('\n');
		ft_putnbr(2147483647);
		ft_putchar('\n');
		ft_putnbr(-2147483648);
		ft_putchar('\n');
		ft_putnbr(1);
		ft_putchar('\n');
		ft_putnbr(0);
		ft_putchar('\n');

*/

	// FT_PUTCHAR
	/*
	   ft_putchar(*av[1]);
	   */

	// FT_PUTCHAR_FD

	/*
	   ft_putchar_fd(*av[1], atoi(av[2]));
	   */
	return (0);
}
