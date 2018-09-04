/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaleh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 21:45:24 by rsaleh            #+#    #+#             */
/*   Updated: 2018/09/04 11:31:34 by rsaleh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;

	i = 0;
	while (i < n - 1)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(void)
{
	printf("%d \n", ft_strncmp("bonjour", "boir", 3));
	printf("%d \n", strncmp("bonjour", "boir", 3));
	return (0);
}
