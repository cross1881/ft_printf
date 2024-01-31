/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 15:41:19 by mrossett          #+#    #+#             */
/*   Updated: 2024/01/31 13:15:48 by mrossett         ###   ########.fr       */
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

int		ft_printf(const char *str, ...);
int		ft_len(int whidh, int precision, int val, int v);
int		ft_in_set(char c, char const *set);
t_str	*ft_str_add(t_str **str, char *content);
int		ft_str_write(t_str *str);
int		ft_str_clear(t_str **str);
int		ft_parse_flags(char const *flags, int *width, int *precison);
char	*ft_malloc_decimal(int length, int precision);
char	*ft_format_signed(int width, int precision, int val);
char	*ft_format_hex(int width, int precision, int val);
char	*ft_format_str(int width, int precision, char *str);
char	*ft_format_missing(char const *flags, char format);
int		ft_do_free(void *ptr);
int		ft_add_format(t_str **str, char *flags, char d, va_list *args);
int		ft_clear_all(t_str **str, va_list *args);

#endif
