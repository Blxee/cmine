/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   screen1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri- <atahiri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 16:43:39 by atahiri-          #+#    #+#             */
/*   Updated: 2025/08/10 17:36:38 by atahiri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cmine.h"

t_screen	*screen_create()
{
	t_screen	*scr;
	scr = malloc(sizeof(t_screen));
	if (!scr)
		return (NULL);
	src->buf_len = SCREEN_BUF_LEN;
	src->buf = malloc(sizeof(char) * SCREEN_BUF_LEN);
	return (scr);
}

void		screen_clear(t_screen *scr, t_color color);
void		screen_set_fg_color(t_screen *scr, t_color color);
void		screen_set_bg_color(t_screen *scr, t_color color);
void		screen_move_to(t_screen *scr, int x, int y);
