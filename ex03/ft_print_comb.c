/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 02:12:34 by seli              #+#    #+#             */
/*   Updated: 2018/09/20 02:21:16 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	char first;
	char second;
	char third;

	first = '0';
	second = '1';
	third = '2';

	while (first <= '7')
	{
		while (second <= '8')
		{
			while (third <= '9')
			{
				ft_putchar(first);
				ft_putchar(second);
				ft_putchar(third);
				third++;
			}
			second++;
			third = second + 1;
		}
		first++;
		second = first + 1;
		thrid = second + 1;
	}
}
