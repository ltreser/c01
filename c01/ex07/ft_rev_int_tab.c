/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 00:12:34 by ltreser           #+#    #+#             */
/*   Updated: 2023/02/20 18:48:38 by ltreser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <unistd.h>
*/
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = size -1;
	while (i < j)
	{
		tmp = tab[i];
		tab[i] = tab [j];
		tab[j] = tmp;
		i++;
		j--;
	}
}
/*
int	main(void)
{
	int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

	ft_rev_int_tab(array, 9);
	int i;

	i = 0;
	while(i < 9)
	{
		char c;

		c = array[i] + '0';
		write(1, &c, 1);
		write(1, " ", 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
} */
