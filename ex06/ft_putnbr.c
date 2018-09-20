/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 03:27:50 by seli              #+#    #+#             */
/*   Updated: 2018/09/20 03:42:11 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int divisor;
	int c;

	if (nb <= 0)
		ft_putchar('-');
	divisor = 1000000000;
	while (divisor != 1)
	{
		c = (nb / divisor) % 10;
		if (c)
			ft_putchar(c + '0');
		divisor /= 10;
	}
	ft_putchar(nb % 10 + '0');
}
