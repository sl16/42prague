CC:= cc
CFLAGS:= -Wall -Wextra -Werror
SRCS:= 
SRCS_BONUS:= 
OBJS:= $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)
DEPS:= libftprintf.h
NAME:= libftprintf.a

all: $(NAME)

$(NAME): $(OBJS)
	ar cr $@ $^

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) -c $^ -I $(DEPS)

bonus: ${OBJS_BONUS}
	ar cr ${NAME} $^

clean:
	rm -f $(OBJS)
	rm -f ${OBJS_BONUS}

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all bonus clean fclean re