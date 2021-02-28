# include "ft_printf.h"

int check_flags(t_data *data, char *str)
{
    int i;

    i = 0;
    while (str[i] && (str[i] <= '0' || str[i] > '9') && str[i] != '.' &&
	str[i] != '*')
    {
        if (str[i] == '0')
            data->zero;
        if (str[i] == '-')
            data->minus;
        i++;
    }
    return 1;
}

int		check_width(t_data *data, char *str)
{
	int		i;

	i = 0;
	while (str[i] && (str[i] <= '0' || str[i] > '9') &&
	str[i] != '*' && str[i] != '.')
		i++;
	if (str[i] == '*' || (str[i] > '0' && str[i] <= '9'))
		data->is_width = 1;
	while (str && str[i] && str[i] != '.')
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else if (str[i] == '*')
			i++;
		else
			return (-1);
	}
	return (1);
}

int		check_precision(t_data *data, char *str)
{
	int		i;

	i = 0;
	while (str[i] && str[i] != '.')
		i++;
	if (str[i] == '.')
	{
		i++;
		if ((str[i] >= '0' && str[i] <= '9') || str[i] == '*')
			data->is_precision = 1;
	}
	while (str && str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else if (str[i] == '*')
			i++;
		else
			return (-1);
	}
	return (1);
}

int				set_format(t_data *data, char *str)
{
	if (check_flags(data, str) != 1)
		return (-1);
	if (check_width(data, str) != 1)
		return (-1);
	if (check_precision(data, str) != 1)
		return (-1);
	return (1);
}