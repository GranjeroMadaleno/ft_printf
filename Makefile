# NOMBRE PROGRAMA #
NAME = libftprintf.a

# FLAGS DE COMPILACION #
CC = gcc
CFLAGS = -Wall -Wextra -Werror #-g3 -fsanitize=address
AR = ar rc
RM = /bin/rm -rf

# ARCHIVOS #
SRC =	ft_utilities.c \
		ft_utilities2.c \
		ft_printf.c


# OBJETOS (*.o) #
OBJ = $(SRC:.c=.o)

INCLUDE = ft_printf.h

# MAKEFILE ART #
# COLORS #
BLACK=\033[0;30m
RED=\033[0;31m
GREEN=\033[0;32m
YELLOW=\033[0;33m
BLUE=\033[0;34m
MAG=\033[0;35m
CYAN=\033[0;36m
WHITE=\033[0;37m
PAPYRUS=\033[38;5;223m
END=\033[0m

# VARIABLE DE ENTORNO #
define PRINTF
$(YELLOW)

██████╗ ██████╗ ██╗███╗   ██╗████████╗███████╗
██╔══██╗██╔══██╗██║████╗  ██║╚══██╔══╝██╔════╝
██████╔╝██████╔╝██║██╔██╗ ██║   ██║   █████╗  
██╔═══╝ ██╔══██╗██║██║╚██╗██║   ██║   ██╔══╝  
██║     ██║  ██║██║██║ ╚████║   ██║   ██║     
╚═╝     ╚═╝  ╚═╝╚═╝╚═╝  ╚═══╝   ╚═╝   ╚═╝     
                                             
$(END)                                    
endef
export PRINTF

# REGLAS #
.SILENT:

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
	$(AR) $(NAME) $(OBJ)
	echo "$$PRINTF"

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)

clean:
	$(RM) $(OBJ)
	echo "objs deleted"

fclean: clean
	$(RM) $(NAME)
	echo "executable deleted"

re: fclean all

.PHONY: all clean fclean re