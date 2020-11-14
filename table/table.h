#ifndef TABLE_H
# define TABLE_H
# include <stdlib.h>
# include <string.h>

char	**table_new(void);
size_t	table_count(char **tab);
void	table_clear(char **tab);
char	**table_join(char **tab, char *line);
#endif
