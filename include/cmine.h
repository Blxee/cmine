/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmine.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri- <atahiri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 16:43:02 by atahiri-          #+#    #+#             */
/*   Updated: 2025/08/10 16:43:13 by atahiri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CMINE_H
# define CMINE_H

# include <unistd.h>
# include <stdlib.h>
# include <termios.h>

# include "screen.h"
# include "str_utils.h"

typedef int t_bool;

# define TRUE (1)
# define FALSE (0)

typedef struct s_cell {
	t_bool	is_covered;
	t_bool	is_mine;
	t_bool	is_flagged;
	int		nearby_bombs;
}	t_cell;

typedef struct s_board {
	t_cell	*grid;
	int		width;
	int		height;
	int		mines;
}	t_board;

t_board	*board_create(int width, int height, int mines);
void	board_show(t_board *board, t_screen *scr);

#endif
