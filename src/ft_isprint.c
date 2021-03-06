/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chughes <chughes@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:12:18 by chughes           #+#    #+#             */
/*   Updated: 2022/03/28 17:12:19 by chughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

// Bool return if 'c' is printable ASCII
int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	return (0);
}
