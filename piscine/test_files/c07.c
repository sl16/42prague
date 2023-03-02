/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c07.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbartos <vbartos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:26:35 by vbartos           #+#    #+#             */
/*   Updated: 2022/10/29 09:08:54 by vbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

// #include "ex00/ft_strdup.c"
// #include "ex01/ft_range.c"
// #include "ex02/ft_ultimate_range.c"
#include "ex03/ft_strjoin.c"

int main(void)
{
	// //EX00
	// printf("\n");
	// printf("-------------EX00-------------\n");
	// char *str = "Hello mf";
	// printf("Input string: %s\n", str);
	// printf("Standard C function: %s\n", strdup(str));
	// printf("My C function: %s\n", ft_strdup(str));
	// printf("\n");

	// //EX01
	// int min = 15;
	// int max = 26;
	// int	size = max - min;
	// int *foo = ft_range(min, max);
	
	// printf("\n");
	// printf("-------------EX01-------------\n");
	// printf("Min is: %d\n", min);
	// printf("Max is: %d\n", max);
	// printf("Array:\n");
	// for (int i = 0; i < size; i++)
	// {
	// 	printf("%d\n",foo[i]);
	// }
	// printf("\n");

	// //EX02
	// min = 15;
	// max = 26;
	// int *arr;
	// size = max - min;
	
	// printf("\n");
	// printf("-------------EX02-------------\n");
	// printf("Min is: %d\n", min);
	// printf("Max is: %d\n", max);
	// printf("Ultimate range returns: %d\n", ft_ultimate_range(&arr, min, max));
	// printf("Array:\n");
	// for (int i = 0; i < size; i++)
	// {
	// 	printf("%d\n", arr[i]);
	// }
	// printf("\n");

	//EX03
	char	*strs[4];
	strs[0] = "ahoj";
	strs[1] = "zdar";
	strs[2] = "cau";
	strs[3] = "sbohem";
	char *sep = "-+";
	char *str = ft_strjoin(0, strs, sep);
	
	printf("\n");
	printf("-------------EX03-------------\n");
	printf("Concatenated string: %s", str);
	free(str);
	printf("\n");

	return (0);
}