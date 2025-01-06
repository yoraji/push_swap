NAME = push_swap


libft_path= ./libft/

all : $(NAME)

re: fclean all

$(NAME) : 

clean :
	make -C $(libft_path) clean
	rm -f *.o
fclean : clean
	rm -f $(NAME)

.PHONY: re,all ,clean,fclean
