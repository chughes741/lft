/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_space_to_zero.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chughes <chughes@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 09:57:54 by chughes           #+#    #+#             */
/*   Updated: 2022/05/20 09:57:58 by chughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

// Swaps all ' ' at the start of 'str' to '0'
void	ft_space_to_zero(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] == ' ')
	{
		str[i] = '0';
		i++;
	}
	return ;
}