/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 15:13:52 by ltreser           #+#    #+#             */
/*   Updated: 2023/02/16 15:23:20 by ltreser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
*/
void	ft_ft(int *nbr)
{
	*nbr = 42;
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
    int a = 5;
    ft_ft(&a);
    ft_putnbr(a);
    return (0);
}*/
