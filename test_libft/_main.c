/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vi-hong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 17:24:37 by vi-hong           #+#    #+#             */
/*   Updated: 2016/12/17 01:48:37 by vi-hong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
int		main()
{
	char	mot1[] = "This is string.h library function";

	memset(mot1, '$', 7);
	printf("%s\n", mot1);
	return (0);
}
*/

/*
int		main()
{
	char	mot[] = "chat\n";

	ft_putstr(mot);
	ft_putendl(mot);
	ft_putnbr(2147483647);
	ft_putnbr(-2147483648);
	return (0);
}
*/

/*
int		main()
{
//	char	mot[] = "pickachu";
	int		fd = 0;

	fd = open("fruits", O_WRONLY | O_CREAT | S_IRUSR | S_IWUSR);
	printf("%d\n", fd);
	ft_putchar_fd('o', fd);
	ft_putstr_fd("chien\n", fd);
	ft_putendl_fd("chiot\n", fd);
	ft_putnbr_fd(-2147483648, fd);
	return (0);
}
*/

/*
int		main()
{
	size_t*	ptr;
	
	ptr = ft_memalloc(3);

	printf("adresse : %p\n", ptr);
	printf("contenu à (ptr + 0): %zu\n", *ptr);
	printf("adresse : %p\n", ptr + 1);
	printf("contenu à (ptr + 1): %zu\n", *(ptr + 1));
	printf("adresse : %p\n", ptr + 2);
	printf("contenu à (ptr + 2): %zu\n", *(ptr + 2));
	printf("adresse : %p\n", ptr + 3);
	printf("contenu à (ptr + 3): %zu\n", *(ptr + 3));
	return (0);
}
*/

/*
int		main()
{
	int*	ptr;
	*ptr = 3;
	printf("%p %d\n", ptr, *ptr);
	ft_memdel((void**)&ptr);
	printf("%p %d\n", ptr, *ptr);

	return (0);
}
*/

/*
int		main()
{
	char*	mot = "chat";
	char*	ptr = NULL;

	printf("%p %s\n", mot, mot);
	ptr = ft_strnew(6);
	ft_strcpy(mot, ptr);
	printf("%p %c\n", ptr, *(ptr + 0));
	printf("%p %c\n", ptr + 1, *(ptr + 1));
	printf("%p %c\n", ptr + 2, *(ptr + 2));
	printf("%p %c\n", ptr + 3, *(ptr + 3));
	printf("%p %c\n", ptr + 4, *(ptr + 4));
	printf("%p %c\n", ptr + 5, *(ptr + 5));
	printf("%p %c\n", ptr + 6, *(ptr + 6));
	return (0);
}
*/

/*
int		main()
{
	char	mot[] = "chien";
	printf("%p --> %s\n", mot, mot);
	ft_strclr(mot);
	printf("%p --> %s\n", mot, mot);
	return (0);
}
*/

void	change_char(char* str)
{
	int i = 0;

	while (str[i])
	{
		printf("%c ", str[i]);
		str[i] = 'c';
		i++;
	}
}

/*
int		main()
{
//	void	(*ptrF)(char*) = change_char;
	char*	mot = "chat";
	printf("%s\n", mot);
	
	change_char(mot);
	printf("%s\n", mot);
	
//ft_striter(mot, ptrF);
//	printf("%s\n", mot);
	return (0);
}
*/


/*
int		main()
{
	char	s1[] = "chat";
	char	s2[] = "chat";
	char	s3[] = "chien";
	char	s4[] = "chat ";
	char	s5[] = "cha-- ";
	
	printf("s1: %s\ns2: %s\n", s1, s2);
	printf("%d\n\n", ft_strequ(s1, s2));
	printf("s1: %s\ns3: %s\n", s1, s3);
	printf("%d\n\n", ft_strequ(s1, s3));
	printf("s1: %s\ns4: %s\n", s1, s4);
	printf("%d\n\n", ft_strequ(s1, s4));
	printf("s1: %s\ns5: %s\n", s1, s5);
	printf("%d\n\n", ft_strequ(s1, s5));
	return (0);
}
*/


/*
int		main()
{
	char	s1[] = "chat";
	char	s2[] = "chat";
	char	s3[] = "chien";
	char	s4[] = "chat ";
	char	s5[] = "cha-- ";
	
	printf("s1: %s\ns2: %s\nn: %d\n", s1, s2, 3);
	printf("%d\n\n", ft_strnequ(s1, s2, 3));
	printf("s1: %s\ns5: %s\nn: %d\n", s1, s5, 4);
	printf("%d\n\n", ft_strnequ(s1, s5, 4));
	printf("s1: %s\ns2: %s\nn: %d\n", s1, s2, 5);
	printf("%d\n\n", ft_strnequ(s1, s2, 5));
	return (0);
}
*/

/*
int		main()
{
	char	mot[] = "chaton";
	printf("%s\n", mot);
	printf("%s\n",ft_strsub(mot, 1, 3));
	return (0);
}
*/
