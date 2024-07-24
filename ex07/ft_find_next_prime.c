/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lionelulm <lionelulm@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 02:35:28 by lionelulm         #+#    #+#             */
/*   Updated: 2024/07/24 02:38:20 by lionelulm        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
	{
		return (0);
	}
	while (i <= nb / i)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb <= 1)
	{
		nb = 2;
	}
	i = nb;
	while (i < 2 * nb)
	{
		if (ft_is_prime(i))
		{
			return (i);
		}
		i++;
	}
	return (0);
}

// ----------------------------------

#include <stdio.h>

int	main()
{
	printf("%d\n", ft_find_next_prime(4));
	printf("%d\n", ft_find_next_prime(9));
	printf("%d", ft_find_next_prime(44));
}
