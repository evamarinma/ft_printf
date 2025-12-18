/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emarin-m <emarin-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 15:07:26 by emarin-m          #+#    #+#             */
/*   Updated: 2025/11/13 15:07:28 by emarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
# define FT_PRINTF

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(char const *format, ...);
int	ft_low_hex(unsigned int n);
int	ft_putchar(int c);
int	ft_putnbr_u(unsigned int n);
int	ft_putnbr(int n);
int	ft_putstr(char *s);
int	ft_up_hex(unsigned int n);
int	ft_get_address(void *address);

#endif