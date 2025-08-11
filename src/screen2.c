/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   screen2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri- <atahiri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 14:42:23 by atahiri-          #+#    #+#             */
/*   Updated: 2025/08/11 14:52:51 by atahiri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cmine.h"

void		screen_set_fg_color(t_screen *scr, t_color color);
void		screen_set_bg_color(t_screen *scr, t_color color);
void		screen_put_char(t_screen *scr, char c);

void		screen_flush(t_screen *scr)
{
	write(STDOUT_FILENO, scr->buf, ft_strlen(scr->buf));
}

void		screen_free(t_screen *scr);
