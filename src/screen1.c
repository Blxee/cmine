/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   screen1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri- <atahiri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 16:43:39 by atahiri-          #+#    #+#             */
/*   Updated: 2025/08/11 19:26:58 by atahiri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cmine.h"

static struct termios g_original_raw;

void		disable_raw_mode()
{
	tcsetattr(STDIN_FILENO, TCSAFLUSH, &g_original_raw);
}

void		enable_raw_mode()
{
	struct termios raw;

	tcgetattr(STDIN_FILENO, &g_original_raw);
	atexit(disable_raw_mode);
	raw = g_original_raw;
	raw.c_lflag &= ~(ECHO | ICANON);
	tcsetattr(STDIN_FILENO, TCSAFLUSH, &raw);
}

t_screen	*screen_create()
{
	t_screen	*scr;
	scr = malloc(sizeof(t_screen));
	if (!scr)
		return (NULL);
	scr->buf_len = SCREEN_BUF_LEN;
	scr->buf = malloc(sizeof(char) * SCREEN_BUF_LEN);
	if (!scr->buf)
	{
		free(scr);
		return (NULL);
	}
	scr->buf[0] = '\0';
	return (scr);
}

void		screen_clear(t_screen *scr, t_color color)
{
	scr->clear_color = color;
	ft_strext(&scr->buf, "\x1B[4", &scr->buf_len);
	ft_strext(&scr->buf, (char *)&scr->clear_color, &scr->buf_len);
	ft_strext(&scr->buf, "m\x1b[2J", &scr->buf_len);
}

void		screen_set_fg_color(t_screen *scr, t_color color);
