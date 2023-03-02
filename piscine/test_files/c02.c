/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbartos <vbartos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:28:19 by osuchane          #+#    #+#             */
/*   Updated: 2022/10/19 17:23:37 by vbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

//#include "ex00/ft_strcpy.c"
//#include "ex01/ft_strncpy.c"
//#include "ex02/ft_str_is_alpha.c"
//#include "ex03/ft_str_is_numeric.c"
//#include "ex04/ft_str_is_lowercase.c"
//#include "ex05/ft_str_is_uppercase.c"
//#include "ex06/ft_str_is_printable.c"
//#include "ex07/ft_strupcase.c"
//#include "ex08/ft_strlowcase.c"
//#include "ex09/ft_strcapitalize.c"
//#include "ex10/ft_strlcpy.c"
#include "ex11/ft_putstr_non_printable.c"


int main()
{
	//00
	/*
	char src[] = "Hellogggggggg";
	char src2[] = "Hello";
	char dest[] = "Wogg";
	char dest1[] = "Testingggg";
	printf("%s", ft_strcpy(dest, src));
	printf("\n%s", ft_strcpy(dest1, src));
	printf("\n");
	*/
	//01
	/*
	char src[] = "Hello";
	char dest[] = "World";
	char dest1[] = "Testing";
	printf("%s", ft_strncpy(dest, src, 2));
	printf("\n%s", strncpy(dest1, src, 7));
	*/
	//02
	/*
	printf("%d", ft_str_is_alpha("Hello"));
	printf("\n%d", ft_str_is_alpha("Hel?lo"));
	printf("\n%d", ft_str_is_alpha(""));
	printf("\n");
	*/
	//03
	/*
	printf("%d", ft_str_is_numeric(""));
	printf("\n%d", ft_str_is_numeric("asd48"));
	printf("\n%d", ft_str_is_numeric("asd"));
	printf("\n%d", ft_str_is_numeric("666666?"));
	printf("\n%d", ft_str_is_numeric("58"));
	*/
	//04
	/*
	printf("%d", ft_str_is_lowercase("whatsUP"));
	printf("\n%d", ft_str_is_lowercase(""));
	printf("\n%d", ft_str_is_lowercase("hello"));
	*/
	//05
	/*
	printf("%d", ft_str_is_uppercase("WHATSup"));
	printf("\n%d", ft_str_is_uppercase(""));
	printf("\n%d", ft_str_is_uppercase("HELLO"));
	*/
	//06
	/*
	printf("%d", ft_str_is_printable("¶something wrong¶"));
	printf("\n%d", ft_str_is_printable(""));
	printf("\n%d", ft_str_is_printable("@#this should work *,"));
	*/
	//07
	/*
	char upper[] = "TestingThisLovelyFunction595959?!?!";
	printf("%s", ft_strupcase(upper));
	*/
	//08
	/*
	char lower[] = "TestingThisLovelyFunction595959?!?!";
	printf("%s", ft_strlowcase(lower));
	*/
	//09
	/*
	char capitalize[] = "SALUT, comment -TU -VAS- a-Aa-cc Blll__a -Af -af ? 42mots ?A ?b ?1A aaA AaAa ?A? ?A A? aaa?aabf3Aq12ffa quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(capitalize));
	*/
	//10
	/*
	char x[] = "hellofdfgfdg";
	char y[] = "XX";
	printf("string to copy: %s before copy: %s\n", y, x);
	printf("len of string: %d string to copy: %s after copy: %s\n", ft_strlcpy(x, y, 2), y, x);
	*/
	//11

	char nonprint[] = "xxxxx\bxx\fx\txxxx\axx\nxxxx\exxx";
	ft_putstr_non_printable(nonprint);

	//12
	//Error 404 not found
	return 0;
}