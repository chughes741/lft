/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_preppend.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chughes <chughes@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 17:08:51 by chughes           #+#    #+#             */
/*   Updated: 2022/08/16 17:09:07 by chughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

// Appends s2 to s1 and frees s1
char	*ft_str_preppend(char *s1, char *s2)
{
	char	*rtn;
	int		i;
	int		j;

	i = -1;
	j = -1;
	if (s2[0] == '\0')
		return (s1);
	rtn = ft_calloc((ft_strlen(s1) + ft_strlen(s2) + 1), sizeof(char));
	while (s1[++i])
		rtn[i] = s1[i];
	while (s2[++j])
		rtn[i + j] = s2[j];
	free(s1);
	return (rtn);
}
