/* ************************************************************************** */
/*                                                                            */
/*                                                           :::      ::::::::*/
/*main.c                                                   :+:      :+:    :+:*/
/*                                                       +:+ +:+         +:+  */
/*By: lugonzal <lugonzal@student.42urduliz.com>        +#+  +:+       +#+     */
/*                                                   +#+#+#+#+#+   +#+        */
/*Created: 2021/05/24 16:17:18 by lugonzal                #+#    #+#          */
/*Updated: 2021/05/24 16:17:18 by lugonzal               ###   ########.fr    */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
//Libft
//
//ft_memset
/*
int	main(void)
{
	char	*str2;
	int 	ntr[3];
	int 	*ntr2;

	char	*str2_;
	int 	ntr_[3];
	int 	*ntr2_;
	int		n = 10;

	while (n--)
	{
		char str[] = "xxxxxxxxx";
		char str_[] = "xxxxxxxxx";
		printf("\nMINE\n");
		printf("B->%d", ntr[0]);
		printf("\nB->%d", ntr[1]);
		printf("\nB->%d", ntr[2]);
		printf("str-%s", str);
		ntr = ft_memset(str, 'a', n);
		printf("\nstr_changed-%s", str);
		printf("\nPTR-%s", str2);
		printf("\nA->%d", ntr2[0]);
		printf("\nA->%d", ntr2[1]);
		printf("\nA->%d", ntr2[2]);
		printf("\nORIGINAL\n");
		printf("B->%d", ntr_[0]);
		printf("\nB->%d", ntr_[1]);
		printf("\nB->%d", ntr_[2]);
		printf("str-%s", str_);
		ntr2_ = memset(str_, 'a', n);
		printf("\nstr_changed-%s", str_);
		printf("\nPTR-%s", str2_);
		printf("\nA->%d", ntr2_[0]);
		printf("\nA->%d", ntr2_[1]);
		printf("\nA->%d", ntr2_[2]);
	
		if (*str2 != *str2_)
		{
			printf("\nERROR");
			printf("\n->%d", n);
			printf("\nlebghtMine%lu", ft_strlen(str2));
			printf("\nlebghtOriginal%lu", ft_strlen(str2_));
		}
		printf("\n");
	}
}
*/
//bzero
/*
int	main(void)
{
	char	str[] = "qwer asdf fgh";
	char 	str2[] = "qwer asdf fgh";
	//int		ntr[1];
	//int		ntr2[1];
	int i = 0;

	//ntr[0] = 255;
	//ntr2[0] = 255;
	//printf("B->%d\n", ntr[0]);
	while (str[i])
	{
		printf("%c", str[i]);
		i++;
	}
	ft_bzero(str, 2);
	i = 0;
	printf("\n");
	while (i < 12)
	{
		printf("%c", str[i]);
		i++;
	}
	i = 0;
	printf("\n");
	while (str2[i])
	{
		printf("%c", str2[i]);
		i++;
	}
	bzero(str2, 2);
	i = 0;
	printf("\n");
	printf("A->");
	while (i < 12)
	{
		printf("%c", str2[i]);
		i++;
	}
	//printf("\nX->%d", ntr2[0]);
	//printf("\nX->%d", ntr2[0]);
}
*/
//ft_memcpy
/*

int main(void)
{
	char	str_[10] = "bbbbbbbb";
	char	*str2_;

	char	str[10] = "bbbbbbbb";
	char	*str2;
	
	int			n_[1];
	char		n2_[1];
	int 		*ptr_;

	int			n[1];
	char		n2[1];
	int 		*ptr;

	n[0] = 2;
	n2[0] = 'A';

	n_[0] = 2;
	n2_[0] = 'A';

	printf("\n////MEMCPY - INT////\n");
	
	printf("\tORIGINAL\n");
	printf("(n) = %d\n", n_[0]);
	printf("(n2) = %d\n", n2_[0]);
	ptr_ = memcpy(n_, n2_, 2);
	printf("(result)-> %d\n", *ptr_);

	printf("\n\tMINE\n");
	printf("(n) = %d\n", n[0]);
	printf("(n2) = %d\n", n2[0]);
	ptr = ft_memcpy(n, n2, 2);
	printf("(result)-> %d\n", *ptr_);
	
	printf("\n////MEMCPY - CHAR////\n");
	
	printf("\tORIGINAL\n");
	printf("(str) = %s\n", str);
	str2 = memcpy(str, "qwerty", 10);
	printf("(result)-> %s\n", str2);
	printf("(str)-> %s\n", str);

	printf("\n\tMINE\n");
	
	printf("(str) = %s\n", str_);
	str2_ = ft_memcpy(str_, "qwerty", 10);
	printf("(str2)-> %s\n", str2_);
	printf("(str)-> %s\n", str_);
}
*/
//ft_memccpy
/*

int	main(void)
{
	char	dst[100] = "123456789";
	char	src[] = "Helloasdg";
	char	prueba = 'l';
	char	*ptr;

	char	dst_[100] = "123456789";
	char	src_[] = "Helloasdg";
	char	prueba_ = 'l';
	char	*ptr_;
	int		n = 10;
	while (n--)
	{
		printf("\nTEST");
		printf("\n\nMINE\nB->%s", dst);	
		printf("\nB->%s", src);	
		ptr = ft_memccpy(dst, src, prueba, n);
		printf("\nA->%s", dst);	
		printf("\nA->%s", src);
		printf("\nA->%s", ptr);
		printf("\n\n////////////");
		printf("\n\nORIGINAL\nB->%s", dst_);
		printf("\nB->%s", src_);
		ptr_ = memccpy(dst, src_, prueba_, n);
		printf("\nA->%s", dst_);
		printf("\nA->%s", src_);
		printf("\nA->%s\n", ptr_);
		printf("\nn->%d", n);
		if (*ptr != *ptr_)
			printf("\nERROR");
		printf("\n");
	}
}
*/
//ft_memmove
/*

int	main(void)
{
	char	src[] = "lorem ipsum dolor sit amet";
	char	src_[] = "lorem ipsum dolor sit amet";
	char	*dest;
	char	*dest_;

	dest = src + 1;
	dest_ = src_ + 1;
	dest = memmove(dest, "consectetur", 5);
	printf("\n->%s", dest);
	dest_ = ft_memmove(dest_, "consectetur", 5);
	printf("\n->%s", dest_);
}
*/
//ft_memchr
/*

int	main(void)
{
	char	*str1;
	char	str2[] = "qweqwe";
	char	*str3;
	char	str4[] = "qweqwe";

	printf("\n->%s", str2);
	str1 = memchr(str2, -200, 10);
	printf("\n->%s", str1);
	printf("\n->%s", str4);
	str3 = ft_memchr(str4, -200, 10);
	printf("\n->%s", str3);
}
*/
//ft_memcmp
/*

int	main(void)
{
	char	str1_[] = "abcdefghij";
	char	str2_[] = "abcdefgxyz";
	int		n;
		
	printf("\n////MINE/////");
	n = ft_memcmp(str1_, str2_, 7);
	printf("\n->str[6]=%c", str1_[7]);
	printf("\n->str[6]=%c", str2_[7]);
	printf("\n->%d\n", n);
	printf("\n->%d", memcmp(str1_, str2_, 7));
}
*/
//ft_strlen
/*

int	main(void)
{
	char	str[] = "asdf";
	int		n;

	n = strlen(str);
	printf("\n->%d", n);
	n = ft_strlen(str);
	printf("\n->%d", n);
}
*/
//ft_strlcpy
/*

int	main(void)
{
	char			dst_1[] = "qwer";
	char			src_1[] = "ac";
	char			dst_2[] = "qwer";
	char			src_2[] = "ac";
	unsigned int	n;
	unsigned int	n2;

	n = strlcpy(dst_1, src_1, 0);
	printf("\n->%s", src_1);
	printf("\n->%s", dst_1);
	printf("\n->%d", n);

	n2 = strlcpy(dst_2, src_2, 0);
	printf("\nX->%s", src_2);
	printf("\nX->%s", dst_2);
	printf("\nX->%d", n2);
}
*/
//ft_strlcat//FAIL
/*
int main(void)
{
    char    str1[100] = "1234";
    char    str3[] = "56789";
    char    str2[100] = "1234";
	char    str4[] = "56789";
    int     n;
    int     n3 = 4;
    int     n2;
	
	printf("\nORIGINAL\n");
    n = strlcat(str1, str3, n3);
    printf("\nRES: %s", str1);
    printf("\nSRC: %s", str3);
    printf("\nSIZE: %d", n);
	printf("\n\nMINE\n");
    n2 = ft_strlcat(str2, str4, n3);
    printf("\nRES: %s", str2);
    printf("\nSRC: %s", str4);
    printf("\nSIZE: %d", n2);
}
*/
//ft_strchr
/*

int main(void)
{
    char    str[] = "Hello eole";
    //char  c = 'o';
    char    *str2;

    str2 = strchr(str, 'e');
    printf("\nstr->%s", str2);
    str2 = ft_strchr(str, 'e');
    printf("\nstr->%s", str2);
}
*/
//ft_strrchr
/*
int main(void)
{
    char    str[] = "Hello eolpwpwpepxo123";
    //char  c = 'o';
    char    *str2;

    str2 = strrchr(str, '\0');
    printf("\nstr->%s", str2);
	str2 = ft_strrchr(str, '\0');
   	printf("\nstr->%s", str2);
}
*/
//ft_strnstr//SEGFAULT//TRY1//LIBFT
//REMOVED_STR_CHAR*_VAR_JUST_RETURN_HAYSTACK_VALUE_CASTED_TO_CHAR*

#include <string.h>
/*
int	main(void)
{
	char	str1[] = "ABCD";
//	char	str2[] = "t a";
	char	*str3;

	str3 = strnstr(str1, str1, 4);
	printf("\n%s", str3);
	str3 = ft_strnstr(str1, str1, 4);
	printf("\n%s", str3);
}
*/
//ft_strncmp
/*
int	main(void)
{
	char	str1[] = "asd";
	char	str2[] = "asdf";
	int		n;

	n = strncmp(str1, str2, 3);
	printf("\n%d", n);
	n = strncmp(str1, str2, 3);
	printf("\n%d", n);
}
*/
//ft_atoi
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	str[] = "-9223372036854775808";
	int		n;

	n = atoi(str);
	printf("\n%d", n);
	n = ft_atoi(str);
	printf("\n%d", n);
}
*/
//ft_isalpha
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char	str = 0;
	int		n;
	int		n2;

	while (str < 127)
	{
		printf("\n->%c", str);
		n = isalpha(str);
		printf("\n%d", n);
		n2 = ft_isalpha(str);
		printf("\n%d", n);
		if (n != n2)
		{
			printf("\n->n= %d\n->n2= %d\n //ERROR", n, n2);
			break ;
		}
		str++;
	}
}
*/
//ft_isdigit
/*
	#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char	str = 0;
	int		n;
	int		n2;

	while (str < 127)
	{
		printf("\n->%c", str);
		n = isdigit(str);
		printf("\n%d", n);
		n2 = ft_isdigit(str);
		printf("\n%d", n);
		if (n != n2)
		{
			printf("\n->n= %d\n->n2= %d\n //ERROR", n, n2);
			break ;
		}
		str++;
	}
}
*/
//ft_isalnum
/*
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char    str = 0;
    int     n;
    int     n2;

    while (str < 127)
    {
        printf("\n->%c", str);
        n = isalnum(str);
        printf("\n%d", n);
        n2 = ft_isalnum(str);
        printf("\n%d", n);
        if (n != n2)
        {
            printf("\n->n= %d\n->n2= %d\n //ERROR", n, n2);
            break ;
        }
        str++;
    }
}
*/
//ft_isascii
/*
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int str = -100;
    int n;
    int n2;

    while (str < 200)
    {
        printf("\n->%c", str);
        n = isascii(str);
        printf("\n%d", n);
        n2 = ft_isascii(str);
        printf("\n%d", n);
        if (n != n2)
        {
            printf("\n->n= %d\n->n2= %d\n //ERROR", n, n2);
            break ;
        }
        str++;
    }
}
*/
//ft_isprint
/*
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int str = 0;
    int n;
    int n2;

    while (str < 200)
    {
        printf("\n->%c", str);
        n = isprint(str);
        printf("\n%d", n);
        n2 = ft_isprint(str);
        printf("\n%d", n);
        if (n != n2)
        {
            printf("\n->n= %d\n->n2= %d\n //ERROR", n, n2);
            break ;
        }
        str++;
    }
}
*/
//ft_toupper
/*
#include <ctype.h>

int main(void)
{
    int str = 0;
    int n;
    int n2;

    while (str < 127)           {
        printf("\n->%c", str);
        n = toupper(str);
        printf("\n%c", n);
        n2 = ft_toupper(str);
        printf("\n%c", n);
        if (n != n2)
        {
            printf("\n->n= %d\n->n2= %d\n //ERROR", n, n2);
            break ;
        }
        str++;
    }
}
*/
//ft_tolower
/*
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int str = 0;
    int n;
    int n2;

    while (str < 127)           {
        printf("\n->%c", str);
        n = tolower(str);
        printf("\n%c", n);
        n2 = ft_tolower(str);
        printf("\n%c", n);
        if (n != n2)
        {
            printf("\n->n= %d\n->n2= %d\n //ERROR", n, n2);
            break ;
        }
        str++;
    }
}
*/
//ft_calloc
/*
#include <stdlib.h>

int main(void)
{
    size_t      size = 10;
    int        *ptr2;

    size_t      size_ = 10;
    int       *ptr2_;

    printf("\nINIT-%lu", size);
    printf("\nINIT-%lu", size_);
    ptr2 = calloc(size, sizeof(int));
    printf("ORIGINAL\n");
    size *= 4;
    while (size--)
    {
        printf("Zero->%d Memory->%p\n", *ptr2, ptr2);
        ptr2++;
    }
    printf("\nPRE-%lu", size);
    printf("\nPRE-%lu", size_);
    ptr2_ = ft_calloc(size_, sizeof(int));
    printf("MINE\n");
	size_ *= 4;
    char *ptr3;
    ptr3 = (char *) ptr2_;
    while (size_--)
    {
        printf("Zero->%d Memory->%p\n", *ptr3, ptr3);
        ptr3++;
    }
}
*/
//ft_strdup
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
    char    str[] = "HAHAHA \0 tu me vois pas !";
    char    *str2;

    str2 = NULL;
    printf("\nstr%s", str2);
    str2 = ft_strdup(str);
    printf("\nstr%s", str2);
    str2 = NULL;
    printf("\nstr%s", str2);
    str2 = strdup(str);
    printf("\nstr%s", str2);
}
*/
//ft_substr
/*
#include <stdio.h>

int main(void)
{
    char    str1[] = "1";
    char    *str2;

    str2 = ft_substr(str1, 1, 1312);
    printf("\n->%s", str2);
}
*/
//ft_strjoin
/*
int main(void)
{
    char    str1[] = "123456789";
    char    str2[] = "";
    char    *str3;

    str3 = ft_strjoin(str1, str2);
    printf("\n->%s", str3);
}
*/
//ft_strtrim
/*
int	main(void)
{
	char	str1[] = "ttttttttttttttttttttttt";
	char	set[] = "tnas";

	char	*n_str;

	n_str = ft_strtrim(str1, set);
	printf("\n%s\n%s", str1, n_str);
}
*/
//ft_split//SEGFAUL//TRY1//CHANGE
//MAIN_POINTER_MOVE_BY_ITSELF_TO_ITERATE_VIA_VARIABLE
//FREELOCK_CHANGE_FROM_END_TO_START__TO_STRAT_TO_END
/*
int main(void)
{
    char    str[] = "asdf asdf asdf asdf asdf     i";
    int     i;
    char    **ptr;

    i = 0;
    ptr = ft_split(str, ' ');
    while (ptr)
    {
        if (ptr[i] == NULL)
			break ;

		printf("\n->%s [%d]", ptr[i], i);
        i++;
    }
}
*/
//ft_itoa
/*
int main(void)
{
    int     n = 0;
    char    *str;

    str = ft_itoa(n);
    printf("\n->>%s", str);
}
*/
//ft_strmapi
/*
int main(void)
{
    char    str[] = "iepaaaaAAaaaa";
    char    *str2;

    char    (*f)(unsigned int, char);
	f = ft_do_some;
    str2 = ft_strmapi(str, f);
    printf("\nFT_END // %s", str2);
}
*/
//ft_putchar_ft
/*
int	main(void)
{
	int	fd;

	fd = open("text.txt", O_RDWR);
	printf("\nFD: %d", fd);
	ft_putchar_fd('w', fd);
}
*/
//ft_putstr_fd
/*
int	main(void)
{	
	int	fd;

	fd = open("text.txt", O_RDWR);
	printf("\nFD: %d", fd);
	ft_putstr_fd("qwerty", fd);
}
*/
//ft_putendl_fd
/*
int	main(void)
{
    int fd;

    fd = open("text.txt", O_RDWR);
    printf("\nFD: %d", fd);
    ft_putendl_fd("qwerty", fd);
}
*/
//ft_putnbr_fd
/*
int	main(void)
{
    int fd;

    fd = open("text.txt", O_RDWR);
    printf("\nFD: %d", fd);
    ft_putnbr_fd(-2147483646, fd);
}
*/
//t_list
/*
int	main(void)
{
	int n[1];

	n[0] = 11;
	t_list *root;

	root = ft_lstnew((void *) "Hello");
	printf("\nCONTENT: %s", (char *)root->content);
	//printf("\nCONTENT: %p", root->next);
	printf("\nSTRUCT: %p", root);
}
*/
//ft_lstadd_front
/*
int	main(void)
{
	t_list *root;
	t_list	*new;

	root = ft_lstnew((void *) "Hello");
	printf("\nCONTENT: %p", root);
	new = (t_list*)malloc(sizeof(t_list*));
	ft_lstadd_front(&root, new);
	printf("\nCONTENT: %p", root);
}
*/
//ft_lstadd_back
/*
int	main(void)
{
	t_list	*node;
	t_list	*node_2;

	node = (t_list *)malloc(sizeof(t_list *));
	node_2 = (t_list *)malloc(sizeof(t_list *));
	ft_lstadd_back(node, node_2);
}
*/
//ft_lstdelone
/*
void	ft_delete(void	*content)
{
	printf("\nDISSAPEAR!! %s", content);
	content = "change";
}

void	ft_lsttravel(t_list **head)
{
	int	i;
	t_list	*tmp;

	tmp = *head;
	i = 0;
	while (tmp != NULL)
	{
		printf("\n [%d] lst->content = %s", i, (char *)tmp->content);
		tmp = tmp->next;
		i++;
	}	
}
char	*ft_read_malloc(void)
{
	int		fd;
	int		size;
	char	runner;
	char	*str;
	int		i;

	i = 0;
	size = 0;
	fd = open("text.txt", O_RDWR);
	while (read(fd, &runner, sizeof(char) != 0))
		size++;
	close(fd);
	fd = open("text.txt", O_RDWR);
	str = (char *)malloc(sizeof(char) * size);
	while (read(fd, &runner,sizeof(runner) != 0))
	{		
		printf("\nRUNNER->%c", runner);
		str[i] = runner;
		if (!str[i])
			break ;
		i++;
	}
	close(fd);
	return (str);
}
int	main(void)
{
	t_list	*created = NULL;
	void	(*del)(void	*);
	t_list	*head;
	t_list	*tmp;
	char	**sentence;
	char	*str;
	int		i;

	i = 0;
	str = ft_read_malloc();
	printf("\nSTR: %s", str);
	sentence = ft_split(str, ' ');
	del = ft_delete;
	head = created;
	while (sentence[i] != NULL)
	{	
		created = ft_lstnew(sentence[i]);
		ft_lstadd_back(&head, created);
		i++;	
	}
	ft_lsttravel(&head);
	tmp = head;
	while (tmp != NULL)
	{
		char *str = tmp->content;
		if (str[0] == 'W')
		{
			ft_lstdelone(tmp, del);
			break ;
		}
		tmp = tmp->next;
	}
	printf("\nCONTENT: %s", (char *)tmp->content);
	ft_lsttravel(&head);
}
*/
//COPIADA_LSTMAP_MAIN¿
/*
int	main(void)
{
	void *		lstmap_f(void *content) 
	{
	(void)content;
	return ("OK !");
	}

void			test_ft_lstmap_basic(void *ptr) 
	{
	t_list *	(*ft_lstmap)(t_list *, void * (*)(void *), void (*)(void *)) = ptr;
	SET_EXPLANATION("your lstmap does not work with basic input");

	SANDBOX_RAISE(
			t_list	*l = lstnew(strdup(" 1 2 3 "));
			t_list	*ret;

			l->next = lstnew(strdup("ss"));
			l->next->next = lstnew(strdup("-_-"));
			ret = ft_lstmap(l, lstmap_f, NULL);
			if (!strcmp(ret->content, "OK !") && !strcmp(ret->next->content, "OK !")
		   	&& !strcmp(ret->next->next->content, "OK !") && !strcmp(l->content, " 1 2 3 ")
		   	&& !strcmp(l->next->content, "ss") && !strcmp(l->next->next->content, "-_-"))
				exit(TEST_SUCCESS);
			SET_DIFF(" 1 2 3 ", l->content);
			exit(TEST_FAILED);
			);
	}

void			test_ft_lstmap_null(void *ptr) 
	{
	t_list *	(*ft_lstmap)(t_list *, void * (*)(void *), void (*)(void *)) = ptr;
	SET_EXPLANATION("your lstmap does not segfault when null parameter is sent");

	SANDBOX_PROT(
			ft_lstmap(NULL, lstmap_f, NULL);
			);
	}

void			test_ft_lstmap_malloc_null(void *ptr) 
	{
	t_list *	(*ft_lstmap)(t_list *, void *(*)(void *)) = ptr;
	SET_EXPLANATION("you did not protect your malloc");

	SANDBOX_RAISE(
			t_list	*l = lstnew(strdup(" 1 2 3 "));
			t_list	*ret;

			l->next = lstnew(strdup("ss"));
			l->next->next = lstnew(strdup("-_-"));
			MALLOC_DEBUG;
			ret = ft_lstmap(l, lstmap_f);
			MALLOC_RESET;
			if (!ret)
				exit(TEST_SUCCESS);
			SET_DIFF_PTR(NULL, ret);
			exit(TEST_FAILED);
			);
	}

void			test_ft_lstmap(void)
	{
	add_fun_subtest(test_ft_lstmap_basic);
	add_fun_subtest(test_ft_lstmap_null);
//	add_fun_subtest(test_ft_lstmap_malloc_null);
	}
}*/
