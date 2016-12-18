#include "libft.h"

/*
int		main()
{
	char*	s1 = "pokemon";
	char*	s2 = "digimon";
	char*	s3 = "digimen";
	char*	s4 = "digimon";
	char	s5[100];
	char*	s6 = "tati";
	char	s7[5];

	printf("ft_strlen(mot): %zu\n",ft_strlen("mot"));
	printf("ft_strlen(fraise): %zu\n\n",ft_strlen("fraise"));

	printf("s1: %s\n", s1);
	printf("ft_strdup(s1): %s\n\n", s1);

	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("s3: %s\n", s3);
	printf("s4: %s\n", s4);
	printf("Re1: strcmp(s1, s2): %d\n", ft_strcmp(s1, s2));
	printf("me1: ft_strcmp(s1, s2): %d\n", ft_strcmp(s1, s2));
	printf("Re2: strcmp(s2, s3): %d\n", ft_strcmp(s2, s3));
	printf("me2: ft_strcmp(s2, s3): %d\n", ft_strcmp(s2, s3));
	printf("Re3: strcmp(s2, s4): %d\n", ft_strcmp(s2, s4));
	printf("me3: ft_strcmp(s2, s4): %d\n\n", ft_strcmp(s2, s4));


	printf("s1: %s\n", s1);
	printf("Re: s5: %s\n", strcpy(s5, s1));
	printf("me: s5: %s\n\n", ft_strcpy(s5, s1));


	printf("s2: %s\n", s2);
	printf("s7: %s\n", s7);
	printf("Re: s5: %s\n", strncpy(s7, s2, 4));
	printf("me: s5: %s\n", ft_strncpy(s7, s2, 4));
	return (0);
}
*/

/*
int		main()
{
	char*	n1 = "973";
	char*	n2 = " 2147483647";
	char*	n3 = "973		   ";
	char*	n4 = "    jekfbw973";
	char*	n5 = "+973";
	char*	n6 = "-973jrnv245";
	char*	n7 = "  -+-+973";
	char*	n8 = "  +-+-973re545446454";

	printf("me1: %d\n", ft_atoi(n1));
	printf("RE1: %d\n", atoi(n1));
	printf("me2: %d\n", ft_atoi(n2));
	printf("RE2: %d\n\n", atoi(n2));
	printf("me3: %d\n", ft_atoi(n3));
	printf("RE3: %d\n", atoi(n3));
	printf("me4: %d\n", ft_atoi(n4));
	printf("RE4: %d\n\n", atoi(n4));
	printf("me5: %d\n", ft_atoi(n5));
	printf("RE5: %d\n", atoi(n5));
	printf("me6: %d\n", ft_atoi(n6));
	printf("RE6: %d\n\n", atoi(n6));
	printf("me7: %d\n", ft_atoi(n7));
	printf("RE7: %d\n", atoi(n7));
	printf("me8: %d\n", ft_atoi(n8));
	printf("RE8: %d\n", atoi(n8));

	return(0);
}
*/

int		main()
{
	char*	big = "Nathalie la fille";
	char*	little = "th";

	printf("big: '%s'\n", big);
	printf("little: '%s'\n", little);
	printf("Re: %s\n", strstr(big, little));
	printf("me: %s\n\n", ft_strstr(big, little));
	
	printf("big: '%s'\n", big);
	printf("little: '%s'\n", little);
	printf("Re1: %s\n", strnstr(big, little, 10));
	printf("me1: %s\n", ft_strnstr(big, little, 10));
	printf("Re2: %s\n", strnstr(big, little, 3));
	printf("me2: %s\n", ft_strnstr(big, little, 3));
	printf("Re3: %s\n", strnstr("big", "little", 4));
	printf("me3: %s\n", ft_strnstr("big", "little", 4));
	return (0);
}
