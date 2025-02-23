#include <stdio.h>

char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		else
		{
			str[i];
		}
		i++;
	}
	return (str);
}

int main(void)
{
	char	srcstr[10] = "Divya";
	printf("%s",ft_strlowcase(srcstr));
	return (0);
}