/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 20:48:56 by ltreser           #+#    #+#             */
/*   Updated: 2023/02/20 22:53:59 by ltreser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

char	*ft_strncpy(char	*dest, char	*src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src [i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char src[] = "After overwriting the destination string";
	char dest[] = "The original destination string";
	unsigned int n;
	int i;

	n = 41;
	i = 0;
	while (dest[i])
	{
		write(1, &dest[i], 1);
		i++;
	}
	write(1, "\n", 1);
	ft_strncpy(dest, src, n);
	i = 0;
	while (dest[i])
    {
        write(1, &dest[i], 1);
		i++;
    }
	return (0);
}*/
