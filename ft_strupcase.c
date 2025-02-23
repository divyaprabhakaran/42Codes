#include <stdio.h>

char	*ft_strupcase(char *str);

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
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
	printf("%s",ft_strupcase(srcstr));
	return (0);
}