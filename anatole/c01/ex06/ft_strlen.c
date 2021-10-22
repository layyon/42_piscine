#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(void)
{
	char	*str;
	int		i;

	str = "fcku";
	i = ft_strlen(str);
	printf("%d\n", i);
	return (0);
}
