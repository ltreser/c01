/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 19:23:14 by ltreser           #+#    #+#             */
/*   Updated: 2023/02/16 22:47:32 by ltreser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <unistd.h>
*/
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	if (b != 0)
	{
		div = *a / *b;
		mod = *a % *b;
		*a = div;
		*b = mod;
	}
}
/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
	}
	ft_putchar(n % 10 + '0');
}

int	main(void)
{
	int *a;
	int *b;
	int x;
	int y;

	x = 12;
	y = 5;	
	a = &x;
	b = &y;
		
	ft_ultimate_div_mod(a, b);
	ft_putnbr(*a);
	ft_putchar(' ');
	ft_putnbr(*b);
	return (0);
}*/
