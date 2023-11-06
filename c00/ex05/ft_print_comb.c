/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 00:23:10 by ltreser           #+#    #+#             */
/*   Updated: 2023/02/14 16:54:34 by ltreser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	output(char count0, char count1, char count2)
{
	ft_putchar(count0);
	ft_putchar(count1);
	ft_putchar(count2);
	if (count0 < '7')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	count0;
	char	count1;
	char	count2;

	count0 = '0';
	while (count0 <= '7')
	{
		count1 = count0 + 1;
		while (count1 <= '8')
		{
			count2 = count1 + 1;
			while (count2 <= '9')
			{
				output(count0, count1, count2);
				count2++;
			}
			count1++;
		}	
		count0++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}*/
