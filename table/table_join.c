#include "table.h"

char	**table_join(char **tab, char *line)
{
	size_t tab_len;
	char	**new_tab;
	size_t i;

	tab_len = table_count(tab);
	i = 0;
	if (!(new_tab = malloc(sizeof(char*) * tab_len + 2)))
		return (NULL);
	while (i < tab_len)
	{
		new_tab[i] = strdup(tab[i]);
		i++;
	}
	new_tab[i++] = strdup(line);	
	new_tab[i] =  NULL;
	table_clear(tab);
	return (new_tab);
}
