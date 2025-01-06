#include"../push_swap.h"

int	cheack_valide_input(int ac,char *str[])
{
	int	i = 1;
	int j = 0;
	int data = 0;
	while(i< ac)
	{
		j = 0;
		while(str[i][j])
		{
			if (ft_isdigit(str[i][j]))
				j++;
			else
				return (0);
		}
		i++;
	}
	return (1);
}
