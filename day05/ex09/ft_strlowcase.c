/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaleh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 12:01:19 by rsaleh            #+#    #+#             */
/*   Updated: 2018/09/04 12:07:27 by rsaleh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			i++;
		else
		{
			str[i] += 32;
			i++;
		}
	}
	return (str);
}

int		main(void)
{
	char str[8] = "HSQiqhqI";

	printf("%s \n", ft_strlowcase(str));
	return (0);
}
