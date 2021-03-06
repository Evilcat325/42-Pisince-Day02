/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 02:12:34 by seli              #+#    #+#             */
/*   Updated: 2018/09/20 04:51:01 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_print(char f, char s, char t, int end);

void	ft_print_comb(void)
{
	char first;
	char second;
	char third;

	first = '0';
	while (first <= '7')
	{
		second = first + 1;
		while (second <= '8')
		{
			third = second + 1;
			while (third <= '9')
			{
				if (first == '7')
					ft_print(first, second, third, 1);
				else
					ft_print(first, second, third, 0);
				third++;
			}
			second++;
		}
		first++;
	}
}

void	ft_print(char f, char s, char t, int end)
{
	ft_putchar(f);
	ft_putchar(s);
	ft_putchar(t);
	if (!end)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}
