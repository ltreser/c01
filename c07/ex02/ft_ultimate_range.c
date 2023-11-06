/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 19:38:44 by ltreser           #+#    #+#             */
/*   Updated: 2023/03/02 22:02:14 by ltreser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*a;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	a = (int *) malloc(sizeof(int) * (max - min));
	if (!a)
		return (-1);
	while (min < max)
	{
		a[i] = min;
		min++;
		i++;
	}
	*range = a;
	return (i);
}
/*
int	main(void)
{
	int	*range;
	int min;
	int max;
	int i;

	min = -1111111115;
	max = 2000000005;
	i = 0;
	printf("%d\n", ft_ultimate_range(&range, min, max));
	while (min < max)
	{
		printf("%d\n", range[i]);
		min++;
		i++;
	}
	free(range);
	return (0);
}*/
