CFILES	=	ft_atoi.c\
			ft_bzero.c\
			ft_calloc.c\
			ft_isalnum.c\
			ft_isalpha.c\
			ft_isascii.c\
			ft_isdigit.c\
			ft_isprint.c\
			ft_memchr.c\
			ft_memcmp.c\
			ft_memcpy.c\
			ft_memmove.c\
			ft_memset.c\
			ft_split.c\
			ft_strchr.c\
			ft_strdup.c\
			ft_strjoin.c\
			ft_strlcat.c\
			ft_strlcpy.c\
			ft_strlen.c\
			ft_strncmp.c\
			ft_strnstr.c\
			ft_strrchr.c\
			ft_substr.c\
			ft_tolower.c\
			ft_toupper.c\
			ft_strtrim.c\
			ft_itoa.c\
			ft_strmapi.c\
			ft_striteri.c\
			ft_putchar_fd.c\
			ft_putstr_fd.c\
			ft_putendl_fd.c\
			ft_putnbr_fd.c

FILESBONUS =	ft_lstnew_bonus.c\
				ft_lstadd_front_bonus.c\
				ft_lstsize_bonus.c\
				ft_lstlast_bonus.c

OFILES	= $(CFILES:.c=.o)

OFILESBONUS = $(FILESBONUS:.c=.o)

CC	= gcc

CFLAGS	= -Wall -Wextra -Werror

RM	= rm -f

AR	= ar -rcs

NAME	= libft.a

all: $(NAME)

$(NAME): $(OFILES)
	$(AR) $(NAME) $(OFILES)

bonus: $(OFILESBONUS)
	$(AR) $(NAME) $(OFILESBONUS)
	$(MAKE)

clean:
	$(RM) $(OFILES) $(OFILESBONUS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME) $(OFILESBONUS)

PHONY: all clean fclean re bonus