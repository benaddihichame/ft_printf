/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 22:21:23 by hbenaddi          #+#    #+#             */
/*   Updated: 2023/11/24 18:05:57 by hbenaddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_char(int c)
{
	return (write(1, &c, 1));
}

int	print_string(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		print_char(*str);
		str++;
		count++;
	}
	return (count);
}

int	print_digit(long n, int base)
{
	int count;
	char *symbols;

	symbols = "0123456789abcdef";
	if (n < 0)
	{
		write(1, "-", 1);
		return print_digit(-n , base) + 1;
	}
	else if (n < base)
	{
		return print_char(symbols[n]);
	}
	else 
	{
		count = print_digit(n / base, base);
		return (count + print_digit(n % base, base));
	}
}
