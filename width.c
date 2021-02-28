#include "ft_printf.h"

int		get_width(t_data *data, char *str)
{
	int i;
	
	i = 0;
	while (str && str[i] && (str[i] <= '0' || str[i] > '9') && str[i] != '.' &&
	str[i] != '*')
		i++;
	while (str[i] && str[i] != '.')
	{
		while (str && (str[i] >= '0' && str[i] <= '9'))
		{
			data->width *= 10;
			data->width += str[i] - '0';
			++i;
		}
		while (str && str[i] == '*')
		{
			data->width = va_arg(data->arg, int);
			i++;
		}
	}
	return (1);
}