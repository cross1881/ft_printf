/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <mrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 19:59:01 by mrossett          #+#    #+#             */
/*   Updated: 2024/05/29 02:19:52 by mrossett         ###   ########.fr       */
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

int	ft_printf(const char *str, ...);
int	ft_printchar(char c);
int	ft_printdecimal(int n);
int	ft_printstr(char *str);
int	ft_printundecimal(unsigned int n);
int	ft_printpoint(unsigned long long p, char *hex);
int	ft_strlen(const char *str);

#endif
