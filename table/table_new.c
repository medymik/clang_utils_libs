#include "table.h"

char	**table_new(void)
{
	char **tab;

	if (!(tab = (char**)malloc(sizeof(char*))))
			return (NULL);
	*tab = NULL;
	return (tab);
}
