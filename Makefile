# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbenaddi <hbenaddi@student.42lehavre.fr>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/21 16:29:36 by hbenaddi          #+#    #+#              #
#    Updated: 2023/11/21 20:10:13 by hbenaddi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	=	libftprintf.a

CC				= clang
RM				= rm -rf
CFLAGS			= -Wall -Wextra -Werror -I.

SRCS    		=	

OBJS			=	$(SRCS:.c=.o)

all: ${NAME}

${NAME}:		${OBJS} 
				ar rcs $(NAME) ${OBJS}
clean:
				$(RM) $(OBJS) 
fclean:			clean
				$(RM) $(NAME)	
re: fclean ${NAME}

.PHONY: all, clean, fclean, re
