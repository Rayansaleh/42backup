/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaleh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 23:48:41 by rsaleh            #+#    #+#             */
/*   Updated: 2018/08/31 23:50:19 by rsaleh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_pattern(char start, char mid, char end, int length)
{
	ft_putchar(start);
	while(length > 2)
	{
		ft_putchar(mid);
		length--;
	}
	if(length > 1)
		ft_putchar(end);
	ft_putchar('\n');
}

void rush(int x, int y)
{
	int height;

	if (x <= 0 || y <= 0)
		return ;
	height = 1;
	while (height <= y)
	{
		if (height == 1)
		{
			ft_pattern('A', 'B', 'A', x);
		}
		else if (height > 1 && height < y)
		{
			ft_pattern('B', ' ', 'B', x);
		}
		else if(height == y)
		{
			ft_pattern('C', 'B', 'C', x);
		}
		height++;
	}
}

int		main(void)
{
	rush(4, 4);
	return (0);
}
