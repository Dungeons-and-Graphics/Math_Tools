NAME = libMT.a

F_N =			\
	MT_matrix	\
	MT_v2		\
	MT_v3		\
	MT			\

OBJS = $(addprefix objects/, $(addsuffix .o, $(F_N)))
FILES = $(addprefix srcs/, $(addsuffix .c, $(F_N)))

INCL = -I incl/
FLAGS = -Wall -Wextra -Werror

all : $(NAME)

objects/%.o : srcs/%.c
	@/bin/mkdir -p objects
	gcc $(FLAGS) -c $(INCL) $< -o $@

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean :
	@/bin/rm -rf objects

fclean : clean
	@/bin/rm -rf $(NAME)

re : fclean all
