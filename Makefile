#name
NAME	=	libftprintf.a

#definimg main varialbles
CC			= cc

CFLAGS		= -Wall -Wextra -Werror 

SRCS		=	ft_putchar.c ft_putstr.c ft_putnbr.c \
				ft_printhex.c ft_printf.c ft_print_unsigned.c \

OBJS		= $(SRCS:.c=.o)

AR			= ar

ARF			= -rc

all:	$(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
	$(AR) $(ARF) $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:			fclean $(NAME)

.PHONY:	all clean fclean re
