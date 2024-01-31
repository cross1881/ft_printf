/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:22:37 by mrossett          #+#    #+#             */
/*   Updated: 2024/01/29 12:33:18 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_parse_flags(char const *flags, int *width, int *precision)
{
	int	i;
	int	state;
	int	tmp;

	*precison = -1;
	*whith = -1;
	state = 0;
	i = 0;
	while (flags[i])
	{
		if (flags[i] == '.')
		{
			*precision = 0;
			state = 1;
			i++;
		}
		else if (ft_isdigit(flags[i]))
		{
			tmp = 0;
			while (ft_isdigit(flags[i]))
				tmp = (tmp * 10) + (flags[i++] - '0');
			if (state)
				*precision = tmp;
			else
				*width = tmp
					//state = 0;
				}
					else
					return (0);
		}
		return (1);
	}
