/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaleh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 14:37:00 by rsaleh            #+#    #+#             */
/*   Updated: 2018/09/03 15:27:57 by rsaleh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int neg;
	int nbr;

	i = 0;
	neg = 0;
	nbr = 0;
	while((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\v') ||
			(str[i] == '\n') || (str[i] == '\f') || (str[i]	== '\r'))
		i++;
	if (str[i] == 45)
		neg = 1;
	if (str[i] == 45 || str[i] == 43)
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		nbr *= 10;
		nbr += (str[i] - 48);
		i++;
	}
	if (neg == 1)
		return (-nbr);
	else
		return (nbr);
}

int		main(void)
{
	printf("%d \n", ft_atoi("1928"));
	return (0);
}
