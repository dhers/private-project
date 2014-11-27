/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoeminn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/15 17:27:23 by cgoeminn          #+#    #+#             */
/*   Updated: 2014/07/20 11:40:56 by cgoeminn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
int		ft_atoi(const char *str);
int		ft_pow(int x, int y);

void	ft_putnbr(int n);
void	ft_swap(int *a, int *b);
void	ft_putstr(char *str);
void	ft_putchar(char c);
void	*ft_memset(void *b, int c, int len);
void	ft_bzero(void *s, int n);

char	*ft_strnew(int size);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strcpy(char *s1, char *s2);
char	*ft_strcat(char *s1, char *s2);
char	*ft_strsub(char *s, int start, int len);

#endif
