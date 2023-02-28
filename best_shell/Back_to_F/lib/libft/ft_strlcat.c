/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imac21 <imac21@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 11:28:05 by mla-rosa          #+#    #+#             */
/*   Updated: 2023/02/20 13:52:53 by imac21           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	ssize;
	size_t	dsize;

	i = 0;
	j = 0;
	ssize = ft_strlen(src);
	if (dstsize == 0)
		return (ssize);
	while (dst[i] != '\0')
		i++;
	dsize = i;
	while (i + j < dstsize - 1 && src[j] != '\0')
	{
		dst[i + j] = src[j];
		j++;
	}
	if (j < dstsize)
		dst[i + j] = '\0';
	if (dsize > dstsize)
		return (ssize + dstsize);
	return (ssize + dsize);
}
