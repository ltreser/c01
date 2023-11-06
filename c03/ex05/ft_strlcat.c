/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 20:06:08 by ltreser           #+#    #+#             */
/*   Updated: 2023/02/22 22:52:19 by ltreser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	a;
	unsigned int	b;

	i = ft_strlen(dest);
	j = 0;
	a = ft_strlen(dest);
	b = ft_strlen(src);
	if (size < 1)
		return (b + size);
	while (src[j] && i < size -1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < a)
		return (b + size);
	else
		return (a + b);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
    char    dest[] = "Hellooo";
    char    src[] = "helll";
    unsigned int    size;

    size = 4;
    printf("%u", ft_strlcat(dest, src, size));
}*/
