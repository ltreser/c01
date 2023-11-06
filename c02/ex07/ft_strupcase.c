/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:45:32 by ltreser           #+#    #+#             */
/*   Updated: 2023/02/21 18:19:49 by ltreser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

char	*ft_strupcase(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 96 && str[i] < 123)
			str[i] -= 32;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	int i;

	i = 0;
	char c[] = "alllowercasenowuppercase";
	char a[25];

	strcpy(a, ft_strupcase(c));
	while(a[i])
	{
		write(1, &a[i], 1);
		i++;
	}
	return (0);
}*/
