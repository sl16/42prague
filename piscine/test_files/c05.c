/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_c05.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbartos <vbartos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 10:50:22 by nroth             #+#    #+#             */
/*   Updated: 2022/10/26 13:14:20 by vbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex00/ft_iterative_factorial.c"
#include "ex01/ft_recursive_factorial.c"
#include "ex02/ft_iterative_power.c"
#include "ex03/ft_recursive_power.c"
#include "ex04/ft_fibonacci.c"
#include "ex05/ft_sqrt.c"
//#include "ex06/ft_is_prime.c"
#include "ex07/ft_find_next_prime.c"

#define KCYN  "\x1B[36m"
#define KNRM  "\x1B[0m"
#include <stdio.h>

int main(void)
{
	int num = 5;
	int power = 0;


	printf("\n%s-------ex00------%s\n", KCYN, KNRM);
		printf("factorial of {%i} is {%i}\n", num, ft_iterative_factorial(num));
		num = 2;
		printf("factorial of {%i} is {%i}\n", num, ft_iterative_factorial(num));
		num = -5;
		printf("factorial of {%i} is {%i}\n", num, ft_iterative_factorial(num));

	printf("\n%s-------ex01------%s\n", KCYN, KNRM);
		num = 5;
		printf("factorial of {%i} is {%i}\n", num, ft_recursive_factorial(num));
		num = 2;
		printf("factorial of {%i} is {%i}\n", num, ft_recursive_factorial(num));
		num = 0;
		printf("factorial of {%i} is {%i}\n", num, ft_recursive_factorial(num));
		num = 1;
		printf("factorial of {%i} is {%i}\n", num, ft_recursive_factorial(num));

	printf("\n%s-------ex02------%s\n", KCYN, KNRM);
		num = 5;
		printf("{%i} to the power of {%i} is {%i}\n", num,power,ft_iterative_power(num, power));
		num = 2;
		power = 2;
		printf("{%i} to the power of {%i} is {%i}\n", num,power,ft_iterative_power(num, power));
		num = 5;
		power = 2;
		printf("{%i} to the power of {%i} is {%i}\n", num,power,ft_iterative_power(num, power));
		num = 0;
		power = 7;
		printf("{%i} to the power of {%i} is {%i}\n", num,power,ft_iterative_power(num, power));
		num = -5;
		power = 3;
		printf("{%i} to the power of {%i} is {%i}\n", num,power,ft_iterative_power(num, power));

	printf("\n%s-------ex03------%s\n", KCYN, KNRM);
		num = 5;
		printf("{%i} to the power of {%i} is {%i}\n", num,power,ft_recursive_power(num, power));
		num = 2;
		power = 2;
		printf("{%i} to the power of {%i} is {%i}\n", num,power,ft_recursive_power(num, power));
		num = 5;
		power = 2;
		printf("{%i} to the power of {%i} is {%i}\n", num,power,ft_recursive_power(num, power));
		num = 0;
		power = 7;
		printf("{%i} to the power of {%i} is {%i}\n", num,power,ft_recursive_power(num, power));
		num = -5;
		power = 3;
		printf("{%i} to the power of {%i} is {%i}\n", num,power,ft_recursive_power(num, power));
	
	printf("\n%s-------ex04------%s\n", KCYN, KNRM);
		num = 0;
		printf("num is {%i}, res is {%i}\n", num,ft_fibonacci(num));
		num = 1;
		printf("num is {%i}, res is {%i}\n", num,ft_fibonacci(num));
		num = 2;
		printf("num is {%i}, res is {%i}\n", num,ft_fibonacci(num));
		num = 3;
		printf("num is {%i}, res is {%i}\n", num,ft_fibonacci(num));
		num = 4;
		printf("num is {%i}, res is {%i}\n", num,ft_fibonacci(num));
		num = 9;
		printf("num is {%i}, res is {%i}\n", num,ft_fibonacci(num));

	printf("\n%s-------ex05------%s\n", KCYN, KNRM);
		num = 0;
		printf("root of {%i} is {%i}\n", num,ft_sqrt(num));
		num = 1;
		printf("root of {%i} is {%i}\n", num,ft_sqrt(num));
		num = 4;
		printf("root of {%i} is {%i}\n", num,ft_sqrt(num));
		num = 25;
		printf("root of {%i} is {%i}\n", num,ft_sqrt(num));
		num = 64;
		printf("root of {%i} is {%i}\n", num,ft_sqrt(num));
		num = 124;
		printf("root of {%i} is {%i}\n", num,ft_sqrt(num));

	// printf("\n%s-------ex06------%s\n", KCYN, KNRM);
	// 	num = 0;
	// 	printf("{%i} is prime? - {%i}\n", num,ft_is_prime(num));
	// 	num = 1;
	// 	printf("{%i} is prime? - {%i}\n", num,ft_is_prime(num));
	// 	num = 11;
	// 	printf("{%i} is prime? - {%i}\n", num,ft_is_prime(num));
	// 	num = 23;
	// 	printf("{%i} is prime? - {%i}\n", num,ft_is_prime(num));
	// 	num = 24;
	// 	printf("{%i} is prime? - {%i}\n", num,ft_is_prime(num));
	// 	num = 100;
	// 	printf("{%i} is prime? - {%i}\n", num,ft_is_prime(num));

	printf("\n%s-------ex07------%s\n", KCYN, KNRM);
		num = 0;
		printf("{%i} next prime - {%i}\n", num,ft_find_next_prime(num));
		num = 1;
		printf("{%i} next prime - {%i}\n", num,ft_find_next_prime(num));
		num = 2;
		printf("{%i} next prime - {%i}\n", num,ft_find_next_prime(num));
		num = 4;
		printf("{%i} next prime - {%i}\n", num,ft_find_next_prime(num));
		num = 24;
		printf("{%i} next prime - {%i}\n", num,ft_find_next_prime(num));
		num = 100;
		printf("{%i} next prime - {%i}\n", num,ft_find_next_prime(num));


	return 0;
}
