/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chughes <chughes@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:08:51 by chughes           #+#    #+#             */
/*   Updated: 2022/10/03 20:41:34 by chughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

// Returns str turned into an int
int	ft_atoi(const char *str)
{
	int	i;
	int	negative;
	int	result;

	if (str == NULL)
		return (0);
	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' ||
			str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	negative = 1;
	if (str[i] == '-')
		negative = -1;
	if (negative == -1 || str[i] == '+')
		i++;
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
		result = (result * 10) + (str[i++] - '0');
	return (result * negative);
}
