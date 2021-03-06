/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chughes <chughes@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:15:55 by chughes           #+#    #+#             */
/*   Updated: 2022/03/28 17:15:56 by chughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

// Turns 'c' into its ASCII lowercase
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c ^= 1 << 5;
	return (c);
}
