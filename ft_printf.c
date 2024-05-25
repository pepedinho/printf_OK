/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 15:11:59 by itahri            #+#    #+#             */
/*   Updated: 2024/05/25 18:42:50 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			count += monitoring(args, (char *)&format[i]);
			format += 2;
		}
		else
		{
			write(1, &format[i], 1);
			i++;
		}
	}
	va_end(args);
	return (i + count);
}
/*
#include <stdio.h>
#include <limits.h>
int main(void)
{
	printf("ft : \n");
	printf("%d\n", ft_printf("|salut %x|\n", LONG_MAX ));
	printf("original : \n");
	printf("%d\n", printf("|salut %x|\n", (unsigned int)LONG_MAX));
}
*/
