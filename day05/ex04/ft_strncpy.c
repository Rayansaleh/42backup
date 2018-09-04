/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaleh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 16:48:27 by rsaleh            #+#    #+#             */
/*   Updated: 2018/09/04 11:49:40 by rsaleh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	while(i <= n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

int	main(void)
{
	char dest[2] = "o";
	char src[9] = "ahouioui";
	printf("%s \n", ft_strncpy(dest, src, 4));
	return(0);
}
