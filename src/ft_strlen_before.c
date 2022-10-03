/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_before.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 07:52:51 by malord            #+#    #+#             */
/*   Updated: 2022/10/03 07:53:02 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/* Returns the length of a string until a certain character. 
	Char c not included.*/
size_t	ft_strlen_bef(char *s, char c)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] && s[i] != c)
		i++;
	if (!c)
		return (i);
	if (s[i] != c)
		return (0);
	else
		return (i);
}
