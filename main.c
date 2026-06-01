#include "libft.h"
void	*f(void *content)
{
		void *new = malloc(2);
		*(char *)new = *(char *)content + 1;
		return new;
}

void	del(void *content)
{
//		*(char *)content = 0;
		free(content);
}

void	print_lst(t_list *lst)
{
		while (lst)
		{
				printf("content: %s\n", (char *)lst->content);
				lst = lst->next;
		}
}


int main()
{
		int i = 0;
		char    c = 'A';

		t_list  *lst = NULL;
		while (i < 10)
		{
				char *copy = malloc(2);
				copy[0] = c++;
				copy[1] = '\0';
				ft_lstadd_back(&lst, ft_lstnew(copy));
				i++;
		}

		t_list *head = lst;
		printf("LISTA\n");
		print_lst(lst);

		printf("---------------------------------------\n");

		printf("FT_LSTMAP\n");
		t_list	*new = ft_lstmap(head, *(f), del);
		print_lst(new);

		printf("---------------------------------------\n");

		printf("FT_LSTSIZE\n");
		printf("List size: %d\n", ft_lstsize(new));

		printf("---------------------------------------\n");

		printf("FT_LSTADD_BACK\n");
		char	*back = ft_strdup("added back");
		ft_lstadd_back(&new, ft_lstnew(back));
		print_lst(new);

		printf("---------------------------------------\n");

		printf("FT_LSTSIZE\n");
		printf("List size: %d\n", ft_lstsize(new));

		printf("---------------------------------------\n");

		printf("FT_LSTADD_FRONT\n");
		char	*front = ft_strdup("added front");
		ft_lstadd_front(&new, ft_lstnew(front));
		print_lst(new);

		printf("---------------------------------------\n");

		printf("FT_LSTSIZE\n");
		printf("List size: %d\n", ft_lstsize(new));

		printf("---------------------------------------\n");

		t_list *newer = new;
		printf("FT_LSTCLEAR\n");
		ft_lstclear(&newer, *(del));
		if (!newer)
				printf("list was cleared\n");

		printf("---------------------------------------\n");

		printf("FT_LSTSIZE\n");
		printf("List size: %d\n", ft_lstsize(newer));

		printf("---------------------------------------\n");

		// AIUTOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOo
		printf("FT_LSTLAST\n");
		print_lst(ft_lstlast(new));

		printf("---------------------------------------\n");

		printf("FT_LSTDELONE\n");
		ft_lstdelone(ft_lstlast(new), *(del));
		print_lst(new);
}
