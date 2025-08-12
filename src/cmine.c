
t_board	*board_create(int width, int height, int mines)
{
	t_board *result;
	int i;

	result = malloc(sizeof(*result));
	if (!result)
		return (NULL);
	result->width = width;
	result->height = height;
	result->mines = mines;
	result->grid = malloc(sizeof(*result->grid) * (width * height));
	if (!board->grid)
		return (NULL);
	i = 0;
	while (i < width * height)
	{
		board->grid[i] = (t_cell) {
			.is_covered = TRUE,
			.is_mine = FALSE,
			.is_flagged = FALSE,
			.nearby_bombs = 0,
		};
		i++;
	}
	return (result);
}

void	board_show(t_board *board, t_screen *scr)
{
}
