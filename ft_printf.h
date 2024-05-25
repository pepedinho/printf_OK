/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 15:12:26 by itahri            #+#    #+#             */
/*   Updated: 2024/05/25 17:08:50 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h> 

typedef struct s_form
{
	int	len;
	int i;
}				t_form;

int		convert_len(long long int nbr, char *base);
void	ft_putnbr_base(long long int nbr, char *base);
int		ft_strlen(char *str);

int	ft_printf(const char *format, ...);
int	monitoring(va_list args, char *c);

int	hex_fr(va_list args, int cas);
int	car_fr(va_list args);
int	mem_fr(va_list args);
int int_fr(va_list args);
int str_fr(va_list args);
int	uns_fr(va_list args);

#endif 
