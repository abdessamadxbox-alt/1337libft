/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-kou <abel-kou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 12:12:24 by abel-kou          #+#    #+#             */
/*   Updated: 2026/10/16 14:58:39 by abel-kou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char    *ft_strchr(const char *s, int c)
{
    int     i;
    char    cs;

    cs = (char)c;
    i = 0;
    while (s[i] && s[i] != cs)
        i++;
    if (s[i] == cs)
        return ((char *)&s[i]);
    
    return (NULL);
}