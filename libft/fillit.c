int		validate_block(char **str)
{
	int	i;
	int count;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != '.' || str[i] != '#' || str[i] != '/n' || str[i] != '/0')
			return (-1);
		if (str[i] == '/n' && !((i + 1 % 5) == 0))
			return (-1);
		if (str[i] == '#')
			count++;
		i++;
	}
	if (str[i - 1] != '/n' || count != 4)
		return (-1);
	return (1);
}

void	output_error(int error_nbr)
{
	if (error_nbr == -1)
		ft_putstr("")
	if (error_nbr == -2)
		ft_putstr("")
	if (error_nbr == -3)
		ft_putstr("")
	exit();
}
