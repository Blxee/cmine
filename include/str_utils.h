/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_utils.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri- <atahiri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 16:43:31 by atahiri-          #+#    #+#             */
/*   Updated: 2025/08/10 16:43:32 by atahiri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_UTILS_H
# define STR_UTILS_H

int		ft_strlen(char *str);
int		ft_strlcat(char *dest, char *src, int n);
char	*ft_strext(char **dest, char *src, int *n);

#endif
