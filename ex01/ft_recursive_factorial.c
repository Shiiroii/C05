/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lionelulm <lionelulm@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 01:13:41 by lionelulm         #+#    #+#             */
/*   Updated: 2024/07/24 01:17:44 by lionelulm        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	return(nb * ft_recursive_factorial(nb - 1));
}

// -------------------------------------------------

#include <stdio.h>

int	main()
{
	printf("%i", ft_recursive_factorial(4));
}
