/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:00:52 by ltreser           #+#    #+#             */
/*   Updated: 2023/02/20 20:47:35 by ltreser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
*/
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
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
	char dest[] = ("this is what it said before\0");
	char src[]= ("this is what it says after\0");
	int i;
	int j;

	i = 0;
	j = 0;
	while(dest[i])
	{
		write(1, &dest[i], 1);
		i++;
	}
	write(1, "\n", 1);
	ft_strcpy(dest, src);
	i = 0;
	while(dest[i])
    {
        write(1, &dest[i], 1);
        i++;
    }
	return (0);
}*/
