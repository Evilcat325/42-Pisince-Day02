/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 00:12:12 by seli              #+#    #+#             */
/*   Updated: 2018/09/20 02:03:56 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(void);

void	ft_print_reverse_alphabet(void)
{
	char letter;
	
	letter = 'z';
	while (letter >= 'a')
		ft_putchar(letter);
}

