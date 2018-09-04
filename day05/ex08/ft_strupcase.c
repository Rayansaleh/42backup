/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaleh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 11:32:09 by rsaleh            #+#    #+#             */
/*   Updated: 2018/09/04 12:00:24 by rsaleh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			i++;
		else if (str[i] >= 97 && str[i] <= 122)
		{	
			str[i] -= 32;
			i++;
		}
	}
	return (str);
}

int	main(void)
{
	char str[8] = "hHsiUjx";

	printf("%s \n", ft_strupcase(str));
	return (0);
}
