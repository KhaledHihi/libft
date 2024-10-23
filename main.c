#include <stdio.h>
#include "libft.h"
#include <string.h>
int main()
{
	//printf("%d", ft_isalpha(65));
	//printf("%d", ft_isdigit(48));
	//printf("%d", ft_isalnum(65));
	//printf("%zu", ft_strlen("test"));
	char str[] = "kaaled dreb anas";
	char d[] = "dreb";
	char *s = ft_substr(str, 1, 4);
	printf("%s", s);
	


}
