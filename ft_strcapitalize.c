#include <stdio.h>

char	*ft_strcapitalize(char *str);

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if (i == 0 && (str[i] >= 97 && str[i] <= 122))
		{
			str[i] = str[i] - 32;
		}
		else if (str[i] == 32 && (str[i + 1] >= 97 && str[i + 1] <= 122))
		{
			str[i + 1] = str[i + 1] - 32;
		}
		else
		{
			str[i] = str[i];
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char sents[50] = "Welcome to coding with c";
	
	ft_strcapitalize(sents);
	printf("%s", sents);
	return (0);
}