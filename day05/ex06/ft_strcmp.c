/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaleh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 20:39:44 by rsaleh            #+#    #+#             */
/*   Updated: 2018/09/03 21:44:10 by rsaleh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int strcmp(const char *s1, const char *s2);

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	if (s1[0] == '\0' && s2[0] == '\0')
		return (0);
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}

int	main(void)
{
	printf("%d \n", ft_strcmp("bonjour", "boujour"));
	printf("%d \n", strcmp("bonjour", "boujour"));
	return (0);
}
