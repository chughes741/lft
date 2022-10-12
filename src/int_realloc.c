/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_realloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 14:34:25 by malord            #+#    #+#             */
/*   Updated: 2022/10/12 14:39:38 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	*int_realloc(int *old_array, int size)
{
	int		*new_array;
	int		i;

	new_array = ft_calloc(size + 1, sizeof(int));
	i = 0;
	while (old_array[i] && i < size)
	{
		new_array[i] = old_array[i];
		i++;
	}
	old_array = xfree(old_array);
	return (new_array);
}
