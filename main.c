#include <stdio.h>
#include "push_swap.h"

void leaks(){
	system("leaks a.out");
}

int main(int ac, char **av)
{
	int i = 1;
	char **tab;
	while (i < ac)
	{
		tab = ft_split(av[i], ' ');
		int j = 0;
		while(tab[j])
		{
			printf("==>[%s]\n", tab[j]);
			int k = 0;
			while(tab[j][k] != '\0')
			{
				while(tab[j][k] =='+')
					k++;
				if (tab[j][k] == '-' && k == 0)
					k++;
				if (tab[j][k] < '0' || tab[j][k] > '9')
				{
					printf("\033[1;31mError\033[0m\n");
				}
				k++;
			}
			j++;
		}
		i++;
		freefun(tab);
	}
	// atexit(&leaks);
}
