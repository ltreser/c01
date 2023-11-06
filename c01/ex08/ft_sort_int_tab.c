/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 00:59:12 by ltreser           #+#    #+#             */
/*   Updated: 2023/02/20 19:29:59 by ltreser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <unistd.h>
*/
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size -1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab [i])
			{
				tmp = tab [i];
				tab [i] = tab [j];
				tab [j] = tmp;
			}
			j++;
		}
		i++;
	}
}
/*
int	main(void)
{
	int array[] = {2, 1, 4, 1, 8, 3, 5, 6, 5, 4};

	ft_sort_int_tab(array, 10);
	int i;

	i = 0;
	while(i < 10)
	{
		char c;

		c = array[i] + '0';
		write(1, &c, 1);
		write(1, " ", 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}*/
