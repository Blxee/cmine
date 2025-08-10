#include "cmine.h"

t_screen	*screen_create()
{
	t_screen	*scr;

	scr = malloc(sizeof(t_screen));
	if (!scr)
		return (NULL);
	scr->buf = malloc
	return (scr);
}

void		screen_clear(t_screen *scr, t_color color);
void		screen_set_fg_color(t_screen *scr, t_color color);
void		screen_set_bg_color(t_screen *scr, t_color color);
void		screen_move_to(t_screen *scr, int x, int y);
