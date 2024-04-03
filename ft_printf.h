/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <mrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 19:59:01 by mrossett          #+#    #+#             */
/*   Updated: 2024/04/03 13:00:07 by mrossett         ###   ########.fr       */
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
int	ft_printchar(char c, int i);
int	ft_printstr(char *str, int i);
int	ft_printpoint(size_t p, int i, char *hex);
int	ft_printdecimal(int n, int i);
int	ft_printesadecimal(size_t n, int i, char *hex);
int	ft_printunsigned(unsigned int n, int i);
int	ft_strlen(const char *str);

#endif
