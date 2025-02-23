#include <stdio.h>

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	int	i;
	int	k;

	i = 0;
	while(str[i] == '\0')
	{
		return (1);
	}
	while(str[i] != '\0')
	{
		if(str[i] >= 32 && str[i] <= 126)
		{
			k = 1;
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (k);
}

int	main(void)
{
	int	x;
	char	str[10] = "	";
	
	x = ft_str_is_printable(str);
	printf("%d",x);
	return (0);
}