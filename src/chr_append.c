/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chr_append.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chughes <chughes@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:47:53 by chughes           #+#    #+#             */
/*   Updated: 2022/10/04 15:02:25 by chughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

// Appends 'c' to 'str' and frees 'str'
char	*chr_append(int c, char *str)
{
	char	*rtn;

	if (str == NULL)
		return (NULL);
	rtn = ft_calloc((ft_strlen(str) + 2), sizeof(char));
	if (str[0])
		ft_strlcpy(rtn, str, ft_strlen(str));
	rtn[ft_strlen(str)] = c;
	free(str);
	return (rtn);
}
