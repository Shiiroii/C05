/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lionelulm <lionelulm@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 02:26:17 by lionelulm         #+#    #+#             */
/*   Updated: 2024/07/24 02:30:37 by lionelulm        ###   ########.fr       */
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

// ------------------------------

#include <stdio.h>

int	main()
{
	printf("%d\n", ft_is_prime(2));
	printf("%d\n", ft_is_prime(5));
	printf("%d\n", ft_is_prime(11));
	printf("%d\n", ft_is_prime(97));
	printf("%d", ft_is_prime(44));
}
