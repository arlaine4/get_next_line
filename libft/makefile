# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arlaine <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/07 17:00:50 by arlaine           #+#    #+#              #
#    Updated: 2018/11/23 16:52:12 by arlaine          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_strlen.c \
		ft_strdup.c \
		ft_strcmp.c \
		ft_tolower.c \
		ft_toupper.c \
	 	ft_atoi.c \
		ft_isprint.c \
		ft_strcpy.c \
		ft_strncpy.c \
		ft_strcat.c \
		ft_strncat.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strncmp.c \
		ft_isdigit.c \
		ft_isascii.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_putnbr.c \
		ft_putendl.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_strjoin.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_strnew.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memcmp.c \
		ft_memalloc.c \
		ft_memdel.c \
		ft_memccpy.c \
		ft_strdel.c \
		ft_strclr.c \
		ft_striter.c \
		ft_striteri.c \
		ft_strmap.c \
		ft_strmapi.c \
		ft_strequ.c \
		ft_strnequ.c \
		ft_strsub.c \
		ft_strrchr.c \
		ft_strstr.c \
		ft_strnstr.c \
		ft_itoa.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_strtrim.c \
		ft_strsplit.c \
		ft_lstnew.c \
	   	ft_lstdelone.c \
		ft_lstdel.c	\
		ft_lstadd.c \
		ft_lstiter.c \
		ft_lstmap.c \
		ft_strcsub.c

HEADER = includes/

FLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	@gcc $(FLAGS) -c $(SRC) -I $(HEADER)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "make $(NAME)\033[31m done\033."

clean:
	@rm -rf $(OBJ)
	@echo "rm *.o\033[35m done\033."

fclean:
	@rm -rf $(NAME)
	@rm -rf $(OBJ)
	@echo "rm $(NAME)\033[34;5m done\033."

re: fclean all
	@echo "rm *.o && $(NAME) \033[33;7m done\033."
