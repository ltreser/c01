/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 15:32:23 by ltreser           #+#    #+#             */
/*   Updated: 2023/02/16 19:19:02 by ltreser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
*/
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int n)
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

int main(void)
{
	int x;
	int y;

	x = 5;
	y = 10;
	int *a;
	int *b;

    a = &x;
    b = &y;
	ft_putnbr(*a);
	ft_putchar(' ');
	ft_putnbr(*b);
	ft_putchar('\n');
	ft_swap(a, b);
    ft_putnbr(*a);
	ft_putchar(' ');
	ft_putnbr(*b);
    return (0);
}*/
