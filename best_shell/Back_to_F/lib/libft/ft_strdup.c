/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imac21 <imac21@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 12:13:56 by mla-rosa          #+#    #+#             */
/*   Updated: 2023/02/20 15:01:34 by imac21           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen_bis(char const *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char const *s1)
{
	int		i;
	char	*dst;

	dst = malloc(sizeof(char) * (ft_strlen_bis(s1) + 1));
	if (!dst)
		return (NULL);
	i = -1;
	while (s1[++i] != '\0')
		dst[i] = s1[i];
	dst[i] = '\0';
	return (dst);
}
