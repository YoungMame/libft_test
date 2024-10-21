/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduvey <mduvey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:51:20 by mduvey            #+#    #+#             */
/*   Updated: 2024/10/16 18:11:34 by mduvey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "../libft/libft.h"
#include <fcntl.h>

char get_c(unsigned int i, char c)
{
	return 'c';
}

void set_c(unsigned int i, char *c)
{
	c[i] = 'c';
}

// int	main()
// {
// 	int test_char = 'l';
// 	int test_int = 42;
// 	char test_string[] = "Hello world";
// 	char test_string_second[] = "from 42";
// 	size_t test_size = sizeof(char) * 10;

// 	//memset

// 	// printf("ft_strlen(%s) = %d\n",test_string, ft_strlen(test_string));
// 	// printf("ft_isalnum(%c) = %d\n",test_char, ft_isalnum(test_char));
// 	// printf("ft_isdigit(%c) = %d\n",test_char, ft_isdigit(test_char));
// 	// printf("ft_isalpha(%c) = %d\n",test_char, ft_isalpha(test_char));
// 	// printf("ft_isascii(%c) = %d\n",test_char, ft_isascii(test_char));
// 	// printf("ft_isprint(%c) = %d\n",test_char, ft_isprint(test_char));
// 	// printf("value of the ptr returned by ft_memset(%c) = %s\n",test_int, memset_arg);
// 	// ft_bzero(memset_arg, memset_arg_size);
// 	// printf("value of the ptr after ft_bzero(%c) = %s\n",test_int, memset_arg);
// 	// ft_memcpy(memset_arg, test_string, memset_arg_size);
// 	// printf("value of the ptr after ft_memcpy(%s) = %s\n",test_string, memset_arg);
// 	// ft_memmove(memset_arg + 3, test_string_second, memset_arg_size);
// 	// printf("value of the ptr after ft_memmove(%s) = %s\n",test_string_second, memset_arg);

// 	//ft_strlcpy && ft_strlcat
// 	// char	*strcpy_dest = malloc(sizeof(char) * 50 + 1);
// 	// char	strcpy_src[] = "Hello world";
// 	// size_t	strcpy_size = sizeof(char) * 20;
// 	// size_t	strcpy_return = ft_strlcpy(strcpy_dest, strcpy_src, strcpy_size);
// 	// printf("ft_strlcpy(%s, %s, %zu) = %zu\n",strcpy_dest, strcpy_src, strcpy_size, strcpy_return);
// 	// printf("value of the ptr after ft_strlcpy = %s\n", strcpy_dest);
// 	// char	strlcat_src[] = " from 42";
// 	// size_t	strlcat_size = sizeof(char) * 5;
// 	// size_t	strlcat_return = ft_strlcat(strcpy_dest, strlcat_src, strlcat_size);
// 	// printf("ft_strlcat(%s, %s, %zu) = %zu\n",strcpy_dest, strlcat_src, strlcat_size, strlcat_return);
// 	// printf("value of the ptr after ft_strlcat = %s\n", strcpy_dest);

// 	//ft_toupper, lower etc
// 	// printf("ft_toupper(%c) = %c\n", test_char, ft_toupper(test_char));
// 	// printf("ft_tolower(ft_toupper(%c)) = %c\n", test_char, ft_tolower(ft_toupper(test_char)));

// 	//ft_strchr
// 	// printf("ft_strchr(%s, %c) = %s\n", test_string, test_char, ft_strchr(test_string, test_char));
// 	// printf("ft_strrchr(%s, %c) = %s\n", test_string, test_char, ft_strrchr(test_string, test_char));

// 	//ft_strncmp
// 	// char	*strncmp1 = "THC";
// 	// char	*strncmp2 = "TH";
// 	// size_t	strncmp_size = sizeof(char) * 3;
// 	// printf("strncmp(%s, %s, %zu) = %i\n", strncmp1, strncmp2, strncmp_size, strncmp(strncmp1, strncmp2, strncmp_size));

// 	//ft_memchr
// 	// printf("ft_memchr(%s, %c, %zu) = %p\n", test_string, test_char, test_size, ft_memchr(test_string, test_char, test_size));

// 	//ft_memcmp
// 	// char	memcmp1[] = "THC";
// 	// char	memcmp2[] = "TH";
// 	// size_t	memcmp_size = sizeof(char) * 3;
// 	// printf("memcmp(%s, %s, %zu) = %i\n", memcmp1, memcmp2, memcmp_size, ft_memcmp(memcmp1, memcmp2, memcmp_size));

// 	//ft_atoi
// 	// const char	nptr[] = "      + 2";
// 	// printf("ft_atoi(%s) = %i et le resultat atoi = %i\n", nptr, ft_atoi(nptr), atoi(nptr));

// 	//ft_strdup
// 	// const char	strdup_string[] = "JESUISNRV";
// 	// printf("%s\n", ft_strdup(strdup_string));

// 	//ft_substr
// 	// const char	substr_string[] = "JESUISNRV";
// 	// const int	substr_index = 2;
// 	// size_t		substr_size = 4; 
// 	// char		*result = ft_substr(substr_string, substr_index, substr_size);
// 	// printf("%s\n", result);

// 	//ft_strjoin
// 	// char  str1[] = "Hello ";
// 	// char  str2[] = "World";
// 	// char  *result;
// 	// result = ft_strjoin(str1, str2);
// 	// printf("%s\n", result);

// 	//ft_strjoin
// 	// char  str1[] = "crisotoh";
// 	// char  str2[] = "thc";
// 	// char  *result;
// 	// result = ft_strtrim(str1, str2);
// 	// printf("%s\n", result);

// 	//ft_strtrim
// 	// char  str1[] = "crisotoh";
// 	// char  str2[] = "thc";
// 	// char  *result;
// 	// result = ft_strtrim(str1, str2);
// 	// printf("%s\n", result);

// 	//ft_split
// 	// 	char  str[] = "je||suis||un||nerd||e";
// 	// char  sep = '|';
// 	// char  **result;
// 	// result = ft_split(str, sep);
// 	// int i = 0;
// 	// while(result[i])
// 	// 	printf("%s\n", result[i++]);

// 	//ft_itoa
// 	// int	number = 20;
// 	// printf("%s\n", ft_itoa(number));

// 	//ft_strmapi
// 	// char str[] = "Hello";
// 	// char *result = ft_strmapi(str, &get_c);
// 	// printf("ft_strmapi = %s\n", result);

// 	//ft_striteri
// 	// char str[] = "Hello";
// 	// ft_striteri(str, &set_c);
// 	// printf("ft_strmapi = %s\n", str);

// 	//ft_putchar_fd
// 	// int fd = open("test.txt", O_RDWR);
// 	// ft_putchar_fd('C', fd);

// 	//ft_putnumber_fd
// 	// int fd = open("test.txt", O_RDWR);
// 	// ft_putnbr_fd(-999, fd);

// 	//ft_lstnew
// 	char	*string = "Hello world";
// 	t_list value = *ft_lstnew(string);
// 	printf("%s", value.content);
// }


int	main(int argc, char **argv)
{
	char	test_char = 'e';
	int		test_int = 10;
	char	*test_string = "heyheyheyyyehHello World!eeehey";
	char	*test_string_2 = "hey";
	size_t test_size = 100 * sizeof(char);
	size_t string_arg_size = 5 * sizeof(char);
	unsigned char	*string_arg = malloc(string_arg_size);
	ft_memset(string_arg, test_char, string_arg_size);
	printf("\nLIBFT TEST :)\n\n");
	if (argc < 2)
	{
		return (0);
		printf("!! YOU NEED TO INDIQUER LE NOM DE LA FUNCTION TO TEST BILOUTE !!");
	}
	if (ft_strncmp(argv[1], "memset", 100) == 0)
	{
		printf("%s", string_arg);
	}
	else if (ft_strncmp(argv[1], "bzero", 100) == 0)
	{
		printf("using ft_bzero(\"%s\", %zu)\n", string_arg, string_arg_size);
		ft_bzero(string_arg, string_arg_size);
		printf("new value = \"%s\"\n", string_arg);
		printf("length of the new value = %i\n", ft_strlen(string_arg));
	}
	else if (ft_strncmp(argv[1], "isalnum", 100) == 0)
	{
		printf("ft_isalnum(\"%c\") = %d\n",test_char, ft_isalnum(test_char));
	}
	else if (ft_strncmp(argv[1], "isalpha", 100) == 0)
	{
		printf("ft_isalpha(\"%c\") = %d\n",test_char, ft_isalpha(test_char));
	}
	else if (ft_strncmp(argv[1], "isascii", 100) == 0)
	{
		printf("ft_isascii(\"%c\") = %d\n",test_char, ft_isascii(test_char));
	}
	else if (ft_strncmp(argv[1], "isprint", 100) == 0)
	{
		printf("ft_isprint(\"%c\") = %d\n",test_char, ft_isprint(test_char));
	}
	else if (ft_strncmp(argv[1], "isdigit", 100) == 0)
	{
		printf("ft_isdigit(\"%c\") = %d\n",test_char, ft_isdigit(test_char));
	}
	else if (ft_strncmp(argv[1], "itoa", 100) == 0)
	{
		printf("ft_itoa(%i) = \"%s\"\n",test_int, ft_itoa(test_int));
	}
	else if (ft_strncmp(argv[1], "atoi", 100) == 0)
	{
		printf("ft_atoi(\"%s\") = %i\n", test_string, ft_atoi(test_string));
	}
	else if (ft_strncmp(argv[1], "substr", 100) == 0)
	{
		printf("ft_substr(\"%s\", %i, %zu) = %s\n", test_string, test_int, test_size, ft_substr(test_string, test_int, test_size));
	}
	else if (ft_strncmp(argv[1], "strchr", 100) == 0)
	{
		printf("ft_strchr(%s, %c) = %s\n", test_string, test_char, ft_strchr(test_string, test_char));
	}
	else if (ft_strncmp(argv[1], "strtrim", 100) == 0)
	{
		printf("ft_strtrim(\"%s\", \"%s\") = \"%s\"\n", test_string, test_string_2, ft_strtrim(test_string, test_string_2));
	}
	else if (ft_strncmp(argv[1], "split", 100) == 0)
	{
		char	**result = ft_split(test_string, test_char);
		int i = 0;
		printf("ft_split(\"%s\", \'%c\') = \n", test_string, test_char);
		while(result[i])
			printf("\"%s\"\n", result[i++]);	
	}
	else if (ft_strncmp(argv[1], "strnstr", 100) == 0)
	{
		printf("ft_strnstr(\"%s\", \"%s\", %zu) = \"%s\"\n", test_string, test_string_2, test_size, ft_strnstr(test_string, test_string_2, test_size));
	}
	else if (ft_strncmp(argv[1], "lstnew", 100) == 0)
	{
		printf("using value = ft_lstnew(\"%s\")\n", test_string);
		t_list *value = ft_lstnew(test_string);
		printf("value.content = \"%s\"\n", value->content);
		printf("value.next = %p\n", value->next);
	}
	else
	{
		printf("No test available for this function");
	}
	free(string_arg);
	printf("\nLIBFT TEST :)");
	return (0);
}

// ## git clone git@github.com:YoungMame/libft_test.git

// ## throw it in you makefile

// test: fclean libft.a
// 	cc -o myprogram.out ../libft_test/test.c -L ./ -l ft
// 	./myprogram.out itoa