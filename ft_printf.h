/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 17:49:25 by hbenaddi          #+#    #+#             */
/*   Updated: 2023/11/28 11:20:16 by hbenaddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>
# include <stddef.h>
# include <stdio.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	print_char(int c);
int	print_string(char *str);
int	print_digit(long n, int base);
int	print_digit_maj(long n, int base);
#endif
