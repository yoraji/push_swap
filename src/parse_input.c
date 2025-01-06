#include"../push_swap.h"

/*
 * The thing is that you need to cheack letters(upper/letter) 
 * symbols, empty inputs or duplicate and then parse the argument into an array or
 *  linked list (your stack representation) */

int has_duplicates(t_stack *stack_a)
{
	t_stack *curr = stack_a;
	t_stack *tmp = curr->next;
	while(curr->next)
	{
		tmp = curr->next;
		while(tmp)
		{
			if(tmp->data == curr->data)
				return 1; // just duplicate found
			tmp = tmp->next;
		}
		curr = curr->next;
	}
	return 0; // nothing found
}

int is_valid_number(const char *str)
{
	int i=0;
	if(str[i] == '-' || str[i] == '+')
		i++;// because the signe is allowed :)
	if(!str[i])
		return 0;
	while(str[i])
	{
		if(!ft_isdigit(str[i]))
			return 0;
		i++;
	}
	return 1;
}

int	cheack_is_digit(int argc,char *argv[])
{
	int i=1;
	while(i < argc)
        {
		if(!is_valid_number(argv[i]))
			return 0;
                i++;
        }
	return 1;
}
int	parse_input(int argc, char *argv[], t_stack *stack_a)
{
	int	i = 1;
	int	j;
	char	**split;

	while(i <argc)
	{
		split = ft_split(argc[i], ' ');
		if(!split)
			return (0);
		j = 0;
		while(split[j])
		{
			if(!is_valid_number(split[j]))
			{
				free_split(split);
				return 0;
			}
			push(stack_a,ft_atoi(split[j]));
			j++;
		}
		free_split(split); // free after use
		i++;
	}
	if(has_duplicates(*stack_a))
                return 0;
	return (1);
}


void	free_split(char **split)
{
	int i=0;
	while(split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}
