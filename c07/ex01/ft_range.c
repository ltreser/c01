/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 02:21:19 by ltreser           #+#    #+#             */
/*   Updated: 2023/03/02 20:10:34 by ltreser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*a;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	a = (int *) malloc(sizeof(int) *(max - min));
	while (min < max)
	{
		a[i] = min;
		min++;
		i++;
	}
	return (a);
}
/*
int	main(void)
{
	int min = 5;
	int max = 5;
	int *a = ft_range(min, max);
	int i;

	i = 0;
	while (i < (max - min))
	{
		printf("%d\n", a[i]);
		i++;
	}
	return (0);
}*/
