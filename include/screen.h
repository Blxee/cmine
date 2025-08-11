/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   screen.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri- <atahiri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 16:43:18 by atahiri-          #+#    #+#             */
/*   Updated: 2025/08/11 19:29:54 by atahiri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCREEN_H
# define SCREEN_H

# define SCREEN_BUF_LEN (1024)

typedef enum e_color {
	BLACK = '0',
	RED,
	GREEN,
	YELLOW,
	BLUE,
	MAGENTA,
	CYAN,
	WHITE,
	DEFAULT,
}	t_color;

typedef struct s_screen {
	char	*buf;
	int		buf_len;
	int		width;
	int		height;
	t_color	clear_color;
	t_color	fg_color;
	t_color	bg_color;
}	t_screen;

void		disable_raw_mode();
void		enable_raw_mode();
t_screen	*screen_create();
void		screen_clear(t_screen *scr, t_color color);
void		screen_move_to(t_screen *scr, int x, int y);
void		screen_set_fg_color(t_screen *scr, t_color color);
void		screen_set_bg_color(t_screen *scr, t_color color);
void		screen_put_char(t_screen *scr, char c);
void		screen_flush(t_screen *scr);
void		screen_free(t_screen *scr);

#endif
