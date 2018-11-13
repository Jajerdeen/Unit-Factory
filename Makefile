# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mzhelezn <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/07 21:36:08 by mzhelezn          #+#    #+#              #
#    Updated: 2018/11/07 21:36:10 by mzhelezn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CFLAGS		= -Wall -Wextra -Werror -Wpedantic -ansi -std=c99

NAME		= libft.a

CC			= clang

#############################
##	LIBC FUNCTIONS			#
#############################

SRC_FIRST	=	ft_memset.c \
				ft_bzero.c \
				ft_memcpy.c \
				ft_memccpy.c \
				ft_memmove.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_strlen.c \
				ft_strdup.c \
				ft_strcpy.c \
				ft_strcat.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_strstr.c \
				ft_strnstr.c \
				ft_strcmp.c \
				ft_strncmp.c \
				ft_atoi.c \
				ft_isalpha.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_toupper.c \
				ft_tolower.c \

#############################
##	ADVANCED FUNCTIONS		#
#############################

SRC_SECOND	=	ft_itoa.c \
				ft_memalloc.c \
				ft_memdel.c \
				ft_putchar.c \
				ft_putchar_fd.c \
				ft_putendl.c \
				ft_putendl_fd.c \
				ft_putnbr.c \
				ft_putnbr_fd.c \
				ft_putstr.c \
				ft_putstr_fd.c \
				ft_strclr.c \
				ft_strdel.c \
				ft_strequ.c \
				ft_striter.c \
				ft_striteri.c \
				ft_strjoin.c \
				ft_strlcat.c \
				ft_strmap.c \
				ft_strmapi.c \
				ft_strncat.c \
				ft_strncpy.c \
				ft_strnequ.c \
				ft_strnew.c \
				ft_strsplit.c \
				ft_strsub.c \
				ft_strtrim.c \

#############################
##	BONUS FUNCTIONS			#
#############################

SRC_BONUS	=	ft_lstnew.c \
				ft_lstdelone.c \
				ft_lstdel.c \
				ft_lstadd.c \
				ft_lstiter.c \
				ft_lstmap.c \

#############################
##	EXTRA FUNCTIONS			#
#############################
SRC_EXTRA	=	ft_putkek.c \
				ft_abs.c \
				ft_bitcalc.c \
				ft_intlen.c \
				ft_swap.c \
				ft_strndup.c \
				ft_str_addchar.c \
				ft_strcpy_until.c \
				ft_iswhitespace.c

SRC = $(SRC_FIRST) $(SRC_SECOND) $(SRC_BONUS) $(SRC_EXTRA)

OBJ			= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc -ru $(NAME) $(OBJ)
	@echo "$(NAME) created"
	@ranlib $(NAME)
	@echo "$(NAME) indexed"

norme: norminette

norminette: $(SRC)
	@$@ $(SRC)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@echo "OBJ deleted"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) deleted"

re: fclean all
