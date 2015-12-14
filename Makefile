##
## Makefile for 104intersection in /home/VEYSSI_B/rendu/104intersection
##
## Made by Baptiste veyssiere
## Login   <VEYSSI_B@epitech.net>
##
## Started on  Mon Dec 14 14:33:55 2015 Baptiste veyssiere
## Last update Mon Dec 14 15:27:23 2015 Baptiste veyssiere
##

NAME	= 104intersection

SRCS	= 104intersection.c \
	check.c

CC	= gcc

RM	= rm -f

LDFLAGS	= -lm

CFLAGS	= -I./include

OBJS	= $(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(LDFLAGS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
