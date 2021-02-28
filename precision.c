#include "ft_printf.h"

int		get_precision(t_data *data, char *str)
{
	int i;
	
	i = 0;
	
	while (str && str[i] && str[i - 1] != '.')
		i++;
	while (str[i])
	{
		data->precision = 0;
		while (str && str[i] >= '0' && str[i] <= '9')
		{
			data->precision *= 10;
			data->precision += str[i++] - '0';
		}
		while (str && str[i++] == '*')
		{
			data->precision = va_arg(data->arg, int);
		}
	}
	return (1);
}