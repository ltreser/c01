/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 01:23:49 by ltreser           #+#    #+#             */
/*   Updated: 2023/02/14 16:55:47 by ltreser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	count0;
	int	count1;

	count1 = 0;
	while (count1 <= 98)
	{
		count0 = count1 + 1;
		while (count0 <= 99)
		{
			ft_putchar(count1 / 10 + 48);
			ft_putchar(count1 % 10 + 48);
			ft_putchar(' ');
			ft_putchar(count0 / 10 + 48);
			ft_putchar(count0 / 10 + 48);
			if (count1 != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			count0++;
		}
		count1++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
