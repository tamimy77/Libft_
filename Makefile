# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mzadakan <mzadakan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/05 11:20:31 by mzadakan          #+#    #+#              #
#    Updated: 2023/07/22 10:54:33 by mzadakan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_strlen.c ft_tolower.c \
		ft_toupper.c ft_isascii.c ft_isprint.c ft_bzero.c ft_strlcpy.c \
		ft_memcpy.c ft_memset.c ft_strchr.c ft_strlen.c ft_strlcat.c \
		ft_strncmp.c ft_strrchr.c ft_memchr.c ft_memmove.c ft_strnstr.c \
		ft_memcmp.c ft_atoi.c ft_strdup.c ft_calloc.c ft_substr.c \
		ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
		ft_striteri.c ft_putchar_fd.c ft_putnbr_fd.c ft_putnbr_fd.c \
		ft_putendl_fd.c ft_putstr_fd.c \
		
SRC_BONUS = ft_lstnew.c ft_lstadd_front.c \
			ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
			ft_lstclear.c ft_lstiter.c ft_lstmap.c \

OBJ_SRC = $(SRC:.c=.o)
OBJ_BONUS = $(SRC_BONUS:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

$(NAME): $(OBJ_SRC)
	ar -rcs $(NAME) $(OBJ_SRC)

all: $(NAME)

clean:
	rm -f $(OBJ_BONUS) $(OBJ_SRC)
	
fclean: clean
	rm -f $(NAME) rm -f a.out

re: fclean all

bonus : $(OBJ_BONUS) $(OBJ_SRC)
		ar rcs $(NAME) $(OBJ_BONUS) $(OBJ_SRC)

.PHONY: all clean fclean re bonus
