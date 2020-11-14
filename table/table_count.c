#include "table.h"


size_t	table_count(char **tab)
{
	size_t i;

	i = 0;
	if (!tab)
		return (i);
	while (tab[i] != NULL)
		i++;
	return (i);
}
