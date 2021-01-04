NAME = MT.a

F_N =			\
	MT			\
	MT_vec		\
	MT_matrix	\

OBJS = $(addprefix objects/, $(addsuffix .o, $(F_N)))
FILES = $(addprefix srcs/, $(addsuffix .c, $(F_N)))

INCL = -I incl/
FLAGS = -Wall -Wextra -Werror

all : $(NAME)

objects/%.o : srcs/%.c
	@/bin/mkdir -p objects
	gcc $(FLAGS) -c $(INCL) $< -o $@ -lm

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)

clean :
	@/bin/rm -rf objects

fclean : clean
	@/bin/rm -rf $(NAME)

re : fclean all
