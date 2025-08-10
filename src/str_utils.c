/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri- <atahiri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 16:43:43 by atahiri-          #+#    #+#             */
/*   Updated: 2025/08/10 17:29:49 by atahiri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cmine.h"

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int ft_strlcat(char *dest, char *src, int n)
{
	int dest_len;
	int src_len;
	int i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (dest_len >= n)
		return (n + src_len);
	i = 0;
	while (dest_len + i < n - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	if (n > 0)
		dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

char	*ft_strext(char **dest, char *src, int *n)
{
	int dest_len;
	int src_len;
	char *new_dest;

	dest_len = ft_strlen(*dest);
	src_len = ft_strlen(src);

	if (dest_len + src_len >= *n - 1)
	{
		*n *= 2;
		new_dest = malloc(sizeof(char) * (*n));
		ft_strlcat(new_dest, *dest, *n);
		free(*dest);
		*dest = new_dest;
	}
	ft_strlcat(*dest, src, *n);
	return (*dest);
}
