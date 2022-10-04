
# Special variables
DEFAULT_GOAL: all
.PHONY: all bonus clean fclean re

# Hides calls
VERBOSE	=	FALSE
ifeq ($(VERBOSE),TRUE)
	HIDE =
else
	HIDE = @
endif

# Compiler and flags
CC		=	gcc
AFLAGS	=	-rcs
CFLAGS	=	-Wall -Werror -Wextra
RM		=	rm -rf

# Dir and file names
NAME	=	libft.a
SRCDIR	=	src/
OBJDIR	=	bin/
SRCS	=	src/ft_atoi.c			\
			src/ft_bzero.c			\
			src/ft_calloc.c			\
			src/chr_prepend.c		\
			src/ft_isalnum.c		\
			src/ft_isalpha.c		\
			src/ft_isascii.c		\
			src/ft_isdigit.c		\
			src/ft_isprint.c		\
			src/ft_itoa.c			\
			src/ft_itox.c			\
			src/ft_linelen.c		\
			src/ft_lstadd_back.c	\
			src/ft_lstadd_front.c	\
			src/ft_lstclear.c		\
			src/ft_lstdelone.c		\
			src/ft_lstiter.c		\
			src/ft_lstlast.c		\
			src/ft_lstmap.c			\
			src/ft_lstnew.c			\
			src/ft_lstsize.c		\
			src/ft_memchr.c			\
			src/ft_memcmp.c			\
			src/ft_memcpy.c			\
			src/ft_memmove.c		\
			src/ft_memset.c			\
			src/ft_ptoa.c			\
			src/ft_putchar_fd.c		\
			src/ft_putendl_fd.c		\
			src/ft_putnbr_fd.c		\
			src/ft_putstr_fd.c		\
			src/ft_split.c			\
			src/str_append.c		\
			src/str_prepend.c		\
			src/ft_strchr.c			\
			src/ft_strdup.c			\
			src/ft_striteri.c		\
			src/ft_strjoin.c		\
			src/ft_strlcat.c		\
			src/ft_strlcpy.c		\
			src/ft_strlen.c			\
			src/ft_strmapi.c		\
			src/ft_strncmp.c		\
			src/ft_strnstr.c		\
			src/ft_strrchr.c		\
			src/ft_strtrim.c		\
			src/ft_substr.c			\
			src/ft_tolower.c		\
			src/ft_toupper.c		\
			src/ft_utoa.c			\
			src/get_next_line.c
			
OBJS	=	$(patsubst $(SRCDIR)%.c,$(OBJDIR)%.o,$(SRCS))

# Targets
all: $(NAME)

$(NAME): $(OBJS)
	$(HIDE)ar $(AFLAGS) $@ $(OBJS)

$(OBJS): $(OBJDIR)%.o : $(SRCDIR)%.c
	$(HIDE)mkdir -p $(OBJDIR)
	$(HIDE)$(CC) $(CFLAGS) -c $< -o $@

# Removes objects
clean:
	$(HIDE)$(RM) $(OBJS)

# Removes objects and executables
fclean: clean
	$(HIDE)$(RM) $(NAME)

# Removes objects and executables and remakes
re: fclean all
