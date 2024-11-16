/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-medi <lde-medi@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 01:18:21 by lde-medi          #+#    #+#             */
/*   Updated: 2024/11/16 03:33:20 by lde-medi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "rush_utils.h"

void	ft_putstr(char	*str);
int		is_char_digit(char c);
int		is_even_number(int n);
int		is_valid_input(int argc, char	*input);

int	main(int argc, char	*argv[])
{
	if (!is_valid_input(argc, argv[1]))
		return (1);
	return (0);
}

int	is_valid_input(int argc, char	*input)
{
	int	i;

	i = 0;
	if (argc != 2)
	{
		ft_putstr("Error\n");
		return (0);
	}
	while (input[i])
	{
		if ((!is_even_number(i) && input[i] != ' ')
			|| (is_even_number(i) && !is_char_digit(input[i]))
			|| i > 30)
		{
			ft_putstr("Error\n");
			return (0);
		}
		i++;
	}
	return (1);
}

void	ft_putstr(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	is_char_digit(char c)
{
	return (c >= '0' && c <= '9');
}

int	is_even_number(int n)
{
	return (n % 2 == 0);
}
