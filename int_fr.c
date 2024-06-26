/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_fr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 15:50:29 by itahri            #+#    #+#             */
/*   Updated: 2024/05/25 16:26:48 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	int_fr(va_list args)
{
	int	arg;

	arg = va_arg(args, int);
	ft_putnbr_base(arg, "0123456789");
	return (convert_len(arg, "0123456789"));
}
