/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 00:07:05 by ltreser           #+#    #+#             */
/*   Updated: 2023/03/02 21:53:30 by ltreser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	while (src[i])
		i++;
	i++;
	dest = (char *) malloc(sizeof(char) * i);
	if (!dest)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char c[] = "hello evaluator i hope ill finish c07";
	char *d = ft_strdup(c);
	int i;

	i = 0;
	while (d[i])
		i++;
	write(1, d, i);
	return (0);
}
*/	
