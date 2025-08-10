CC := cc
CFLAGS := -Wall -Werror -Wextra -I ./include
NAME := cmine
SRCS_DIR := src
SRCS := $(wildcard $(SRCS_DIR)/*.c)
OBJS := $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $^ -o $@

%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
