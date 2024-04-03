/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <mrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 19:59:01 by mrossett          #+#    #+#             */
/*   Updated: 2024/03/20 11:00:00 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "libft/libft.h"
# include <limits.h>

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
int	ft_printbigesadecimal(size_t n, int i, char *hex);
int	ft_printesadecimal(size_t n, int i, char *hex);
int	ft_printunsigned(unsigned int n, int i);

#endif
