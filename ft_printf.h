/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <mrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 19:59:01 by mrossett          #+#    #+#             */
/*   Updated: 2024/04/09 13:09:39 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <limits.h>
# include <stddef.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_str
{
	void			*content;
	struct s_str	*next;
}	t_str;

int	ft_printf(const char *str, ...);
int	ft_printchar(char c);
int	ft_printstr(char *str);
int	ft_printpoint(size_t p, char *hex);
int	ft_printdecimal(int n);
int	ft_printesadecimal(size_t n, char *hex);
int	ft_printunsigned(unsigned int n);
int	ft_strlen(const char *str);

#endif
