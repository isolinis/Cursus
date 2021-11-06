#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

int main(void)
{
	t_list *l;
	t_list *actual;

	l = ft_lstnew(strdup("1"));
	l->next = ft_lstnew(strdup("2"));
	l->next->next = ft_lstnew(strdup("3"));
	actual = ft_lstlast(l);
	printf("%s\n", actual -> content);
	free(l);
	free(actual);
	return (0);
}
