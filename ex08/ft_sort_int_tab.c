#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	for(i; i < size-1; i++)
	{
		int	j;
		
		j = i;
		for(j; j < size - 1; j++)
		{
			int	temp;
			
			if(tab[j] > tab[j + 1])
			{
			temp = tab[j];
			tab[j] = tab[j + 1];
			tab[j + 1] = temp;
			}			
		}
	}
}
