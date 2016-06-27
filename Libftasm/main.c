/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/10 07:01:02 by kpedro            #+#    #+#             */
/*   Updated: 2015/03/10 07:25:01 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfts.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

void		check_alnum(void)
{
	printf("[-] ALNUM [-]\n");
	printf("[+] Test on %c, return = %d [+]\n", 'a', ft_isalnum('a'));
	printf("[+] Test on %c, return = %d [+]\n", 'z', ft_isalnum('z'));
	printf("[+] Test on %c, return = %d [+]\n", '*', ft_isalnum('*'));
	printf("[+] Test on %c, return = %d [+]\n", 'Z', ft_isalnum('Z'));
	printf("[+] Test on %c, return = %d [+]\n", 'A', ft_isalnum('A'));
	printf("[+] Test on %c, return = %d [+]\n", '0', ft_isalnum('0'));
	printf("[+] Test on %c, return = %d [+]\n", '9', ft_isalnum('9'));
	printf("[+] Test on %c, return = %d [+]\n", '4', ft_isalnum('4'));
	printf("[-] Test with NULL [-]\n");
	printf("[+] Test return = %d [+]\n", ft_isalnum(0));
	printf("[-] END OF ALNUM [-]\n");
}

void		check_digit(void)
{
	printf("[-] DIGIT [-]\n");
	printf("[+] Test on %c, return = %d [+]\n", 'a', ft_isdigit('a'));
	printf("[+] Test on %c, return = %d [+]\n", 'z', ft_isdigit('z'));
	printf("[+] Test on %c, return = %d [+]\n", '*', ft_isdigit('*'));
	printf("[+] Test on %c, return = %d [+]\n", 'Z', ft_isdigit('Z'));
	printf("[+] Test on %c, return = %d [+]\n", 'A', ft_isdigit('A'));
	printf("[+] Test on %c, return = %d [+]\n", '0', ft_isdigit('0'));
	printf("[+] Test on %c, return = %d [+]\n", '9', ft_isdigit('9'));
	printf("[+] Test on %c, return = %d [+]\n", '4', ft_isdigit('4'));
	printf("[-] Test with NULL [-]\n");
	printf("[+] Test return = %d [+]\n", ft_isdigit(0));
	printf("[-] END OF DIGIT [-]\n");
}

void		check_alpha(void)
{
	printf("[-] ALPHA [-]\n");
	printf("[+] Test on %c, return = %d [+]\n", 'a', ft_isalpha('a'));
	printf("[+] Test on %c, return = %d [+]\n", 'z', ft_isalpha('z'));
	printf("[+] Test on %c, return = %d [+]\n", '*', ft_isalpha('*'));
	printf("[+] Test on %c, return = %d [+]\n", 'Z', ft_isalpha('Z'));
	printf("[+] Test on %c, return = %d [+]\n", 'A', ft_isalpha('A'));
	printf("[+] Test on %c, return = %d [+]\n", '0', ft_isalpha('0'));
	printf("[+] Test on %c, return = %d [+]\n", '9', ft_isalpha('9'));
	printf("[+] Test on %c, return = %d [+]\n", '4', ft_isalpha('4'));
	printf("[-] Test with NULL [-]\n");
	printf("[+] Test return = %d [+]\n", ft_isalpha(0));
	printf("[-] END OF ALPHA [-]\n");
}

void		check_tolower(void)
{
	printf("[-] TOLOWER [-]\n");
	printf("[+] Test on %c, return = %c [+]\n", 'a', ft_tolower('a'));
	printf("[+] Test on %c, return = %c [+]\n", 'z', ft_tolower('z'));
	printf("[+] Test on %c, return = %c [+]\n", '*', ft_tolower('*'));
	printf("[+] Test on %c, return = %c [+]\n", 'Z', ft_tolower('Z'));
	printf("[+] Test on %c, return = %c [+]\n", 'A', ft_tolower('A'));
	printf("[+] Test on %c, return = %c [+]\n", '0', ft_tolower('0'));
	printf("[+] Test on %c, return = %c [+]\n", '9', ft_tolower('9'));
	printf("[+] Test on %c, return = %c [+]\n", '4', ft_tolower('4'));
	printf("[-] Test with NULL [-]\n");
	printf("[+] Test return = %c [+]\n", ft_tolower(0));
	printf("[-] END OF TOLOWER [-]\n");
}

void		check_toupper(void)
{
	printf("[-] TOUPPER [-]\n");
	printf("[+] Test on %c, return = %c [+]\n", 'a', ft_toupper('a'));
	printf("[+] Test on %c, return = %c [+]\n", 'z', ft_toupper('z'));
	printf("[+] Test on %c, return = %c [+]\n", '*', ft_toupper('*'));
	printf("[+] Test on %c, return = %c [+]\n", 'Z', ft_toupper('Z'));
	printf("[+] Test on %c, return = %c [+]\n", 'A', ft_toupper('A'));
	printf("[+] Test on %c, return = %c [+]\n", '0', ft_toupper('0'));
	printf("[+] Test on %c, return = %c [+]\n", '9', ft_toupper('9'));
	printf("[+] Test on %c, return = %c [+]\n", '4', ft_toupper('4'));
	printf("[-] Test with NULL [-]\n");
	printf("[+] Test return = %c [+]\n", ft_toupper(0));
	printf("[-] END OF TOUPPER [-]\n");
}

void		check_isascii(void)
{
	printf("[-] ISASCII [-]\n");
	printf("[+] Test on %c : %d, return = %d [+]\n", 'a', 'a', ft_isascii('a'));
	printf("[+] Test on %c : %d, return = %d [+]\n", 'z', 'z', ft_isascii('z'));
	printf("[+] Test on %c : %d, return = %d [+]\n", 'A', 'A', ft_isascii('A'));
	printf("[+] Test on %c : %d, return = %d [+]\n", 'Z', 'Z', ft_isascii('Z'));
	printf("[+] Test on %c : %d, return = %d [+]\n", 245, 245, ft_isascii(245));
	printf("[+] Test on %c : %d, return = %d [+]\n", 221, 221, ft_isascii(221));
	printf("[-] Test with NULL [-]\n");
	printf("[+] Test return = %d [+]\n", ft_isascii(0));
	printf("[-] END OF ISASCII [-]\n");
}

void		check_strlen(void)
{
	char	str[5] = "abcd";
	char	str2[3] = "op";

	printf("[+] STRLEN [+]\n");
	printf("[-] %s, sized: %d [-]\n", str, (int)ft_strlen(str));
	printf("[-] %s, sized: %d [-]\n", str2, (int)ft_strlen(str2));

	printf("[-] Test with NULL [-]\n");
	printf("[-] sized: %d [-]\n", (int)ft_strlen(0));
	printf("[+] END OF STRLEN [+]\n");
}

void		check_puts(void)
{
	printf("[+] PUTS [+]\n");
	ft_puts("[-] a [-]");
	ft_puts("[-] $#@#',./,~!@~=+ [-]");
	printf("[+] Test with null [+]\n");
	ft_puts(NULL);
	printf("[+] END OF PUTS [+]\n");
}

void		check_strcat(void)
{
	char		str[5];

	str[0] = '\0';
	printf("[+] STRCAT [+]\n");
	printf("[-] Str init with empy char : %s [-]\n", ft_strcat(str, ""));
	printf("[-] Str: %s [-]\n", ft_strcat(str, "h"));
	printf("[-] Str: %s [-]\n", ft_strcat(str, "ello"));
	printf("[-] Str: %s [-]\n", ft_strcat(str, "!"));
	printf("[+] END OF STRCAT [+]\n");
}

void		check_bzero(void)
{
	char	str[4] = "jui";

	printf("[-] BZERO [-]\n");
	printf("[+] str[0] = %d = %c [+]\n", str[0], str[0]);
	printf("[+] str[1] = %d = %c [+]\n", str[1], str[1]);
	printf("[+] str[2] = %d = %c [+]\n", str[2], str[2]);
	printf("[-] FT_BZERO DONE [-]\n");
	ft_bzero(str, 3);
	printf("[+] str[0] = %d = %c [+]\n", str[0], str[0]);
	printf("[+] str[1] = %d = %c [+]\n", str[1], str[1]);
	printf("[+] str[2] = %d = %c [+]\n", str[2], str[2]);
	printf("[-] Test with NULL [-]\n");
	ft_bzero(NULL, 0);
	printf("[-] END OF BZERO [-]\n");
}

void		check_memset(void)
{
	printf("[+] MEMSET [+]\n");
	printf("[-] Befor memset: %s [-]\n", "abcd");
	printf("[-] After memset: %s [-]\n", (char*)ft_memset(ft_strdup("abcd"),
				'A', 3));
	printf("[+] END OF MEMSET [+]\n");
}

void		check_memcpy(void)
{
	char		str[2];
	char		str2[6];

	ft_bzero(str, 2);
	ft_bzero(str2, 6);

	printf("[+] MEMCPY [+]\n");
	printf("[-] Str1 size: %d, Content: %s [-]\n", (int)ft_strlen(str), str);
	printf("[-] Str2 size: %d, Content: %s [-]\n", (int)ft_strlen(str2), str2);
	ft_memcpy((void*)str, (void*)"a", 1);
	ft_memcpy((void*)str2, (void*)"hello", 5);
	printf("[+] Using ft_memcpy [+]\n");
	printf("[-] Str1 size: %d, Content: %s [-]\n", (int)ft_strlen(str), str);
	printf("[-] Str2 size: %d, Content: %s [-]\n", (int)ft_strlen(str2), str2);
	printf("[+] END OF MEMCPY [+]\n");
}

void		check_strdup(void)
{
	char		*str;
	char		f[] = "h";
	char		s[] = "hello";
	char		t[] = "";

	printf("[+] STRDUP [+]\n");
	printf("[-] Str init [-]\n");
	str = ft_strdup(f);
	printf("[-] Str after strdup (\"%s\") %d [-]\n", str, (int)ft_strlen(str));
	str = ft_strdup(s);
	printf("[-] Str after strdup (\"%s\") %d [-]\n", str, (int)ft_strlen(str));
	str = ft_strdup(t);
	printf("[-] Str after strdup (\"%s\") %d [-]\n", str, (int)ft_strlen(str));
	printf("[+] END OF STRDUP [+]\n");
}

void 		check_cat(void)
{
	int fd;

	fd = open("auteur", O_RDONLY);
	printf("[+] CAT [+]\n");
	ft_cat(0); // Ctrl + D to Continue !
	ft_cat(open(__FILE__, O_RDONLY));
	ft_cat(fd);
	ft_cat(-42);
	printf("[+] END OF CAT [+]\n");
	close(fd);
}

int			main(void)
{
	check_digit();
	printf("\n");
	check_alpha();
	printf("\n");
	check_alnum();
	printf("\n");
	check_tolower();
	printf("\n");
	check_toupper();
	printf("\n");
	check_puts();
	printf("\n");
	check_isascii();
	printf("\n");
	check_bzero();
	printf("\n");
	check_strlen();
	printf("\n");
	check_strdup();
	printf("\n");
	check_memset();
	printf("\n");
	check_memcpy();
	printf("\n");
	check_strcat();
	printf("\n");
	check_cat();
	return 0;
}
