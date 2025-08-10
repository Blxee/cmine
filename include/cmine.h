#ifndef CMINE_H
# define CMINE_H

# include <unistd.h>

typedef int t_bool;

typedef struct s_cell {
	t_bool is_mine;
	t_bool is_flagged;
	int nearby_bombs;
}	t_cell;

typedef struct s_board {
	t_cell *grid;
	int width;
	int height;
	int mines;
}	t_board;

#endif
