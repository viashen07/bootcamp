/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgovende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/09 11:57:32 by vgovende          #+#    #+#             */
/*   Updated: 2016/06/09 12:08:14 by vgovende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	int		i;

	i = 'a';
	while (i >= 'a' && i <= 'z')
	{
		ft_putchar(i);
		i++;
	}
	ft_putchar('\n');
	return (0);
}

