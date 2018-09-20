/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 03:54:54 by seli              #+#    #+#             */
/*   Updated: 2018/09/20 05:20:39 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_print_combn_recursive(int n, int min);
void	ft_print_prev(void);

int g_max;
int g_prev[10];

void	ft_print_combn(int n)
{
	g_max = n;
	ft_print_combn_recursive(n, 0);
}

void	ft_print_prev(void)
{
	int i;

	i = 0;
	while (i < g_max - 1)
	{
		ft_putchar(g_prev[i++] + '0');
	}
}

void	ft_print_combn_recursive(int n, int min)
{
	int cur_min;

	if (min >= 10)
		return ;
	if (n == 1)
	{
		while (min < 10)
		{
			ft_print_prev();
			ft_putchar(min + '0');
			if (g_prev[0] == 10 - g_max
				|| (g_max == 1 && min == 9))
				return ;
			ft_putchar(',');
			ft_putchar(' ');
		}
		return ;
	}
	cur_min = min;
	while (cur_min + n <= 10)
	{
		g_prev[g_max - n] = cur_min;
		ft_print_combn_recursive(n - 1, cur_min + 1);
		cur_min++;
	}
}
