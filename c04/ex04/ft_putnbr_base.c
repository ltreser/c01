/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 18:54:46 by ltreser           #+#    #+#             */
/*   Updated: 2023/02/23 20:13:46 by ltreser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c) // putchar to use later
{
	write(1, &c, 1);
}

int	ft_strlen(char *str) //strlen to measure the length of the string
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	check_base(char *base) // checking invalid arguments
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')  // 1) check if the base entered is empty/only size 1
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == '*' // checks if theres unprintable characters or mathematical operators
			|| base[i] == '/' || base[i] == '%' || base[i] == '='
			|| base[i] == ',' || base [i] == '.'
			|| base[i] < 33 || base[i] > 126)
			return (0);
		while (base[j])
		{
			if (j != i && base[i] == base[j]) // checks if 2 following characters in the base are the same
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nbr_l;
	int		divider;

	divider = ft_strlen(base);  // dividing through the stringlength
	if (check_base(base) == 0)  // if theres an invalid argument for the base, return NULL
		return ;
	if (nbr < 0) // if negative, converting nbr to long int variable, making it positive and printing minus
	{
		nbr_l = nbr;
		nbr_l *= -1;
		ft_putchar('-');
	}
	else // again converting nbr to a long int and checking if the base provided is shorter than the number
		nbr_l = nbr;
	if (nbr_l >= divider)
	{
		ft_putnbr_base(nbr_l / divider, base); // recursion to get call stack for number
		ft_putnbr_base(nbr_l % divider, base);
	}
	if (nbr_l < divider)
		ft_putchar(base[nbr_l]); // taking all the storage from the call stack and printing each position in the base code
}
/*
int		main(void)
{
	ft_putnbr_base(-2147483648, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(3, "01");
	write(1, "\n", 1);
	ft_putnbr_base(10, "0123456789ABCDEF");
	write(1, "\n", 1);
	ft_putnbr_base(3, "poneyvif");	
}*/
