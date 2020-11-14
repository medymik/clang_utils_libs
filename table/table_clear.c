#include "table.h"

void	table_clear(char **tab)
{
	size_t i;

	if (!tab)
		return ;
	i = 0;
	while (tab[i] != NULL)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}
