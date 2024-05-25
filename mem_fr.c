/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_fr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 16:11:38 by itahri            #+#    #+#             */
/*   Updated: 2024/05/25 18:26:27 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"



static void	ft_putnbr_base_ptr(unsigned long long int nbr, char *base)
{
	char				char_nbr;
	unsigned long long	base_len;

	base_len = ft_strlen(base);
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= base_len)
		ft_putnbr_base(nbr / base_len, base);
	char_nbr = base[nbr % base_len];
	write(1, &char_nbr, 1);
}

static void print_mem(unsigned long long int nbr)
{ 
	write(1, "0x", 2);
	ft_putnbr_base_ptr(nbr, "0123456789abcdef");
}

static int	addr_len(unsigned long long int nbr)
{
	int	i;

	i = 0;
	while (nbr != 0)
	{
		nbr /= 16;
		i++;
	}
	return (i);
}

int	mem_fr(va_list args)
{
	unsigned long long int	temp;
	void					*arg;

	arg = va_arg(args, void *);
	if (arg == (void *)0)
		return (write(1, "(nil)", 5), 5);
	temp = (unsigned long long int)arg;
	print_mem(temp);
	return (addr_len(temp) + 2);
}
