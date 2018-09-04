/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaleh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 12:46:54 by rsaleh            #+#    #+#             */
/*   Updated: 2018/09/04 13:41:29 by rsaleh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalyze(char *str)
{
	int i;
	int maj;

	maj = 0;
	i = 0;
	while (str[i] != '\0')
	{

		if (maj == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		else if (maj == 1 && str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		if (ft_check(str[i] == 1))
			maj = 1;
		else
			maj = 0;

		i++;	
	}
	return (str);
}

int main(void)
{
	char str[9] = "Yccw xwu";

	printf("%s \n", str);
	return (0);
}
