/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-kou <abel-kou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 12:12:24 by abel-kou          #+#    #+#             */
/*   Updated: 2026/10/16 15:08:35 by abel-kou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char    *ft_strrchr(const char *s, int c)
{
    int i;
    int cs;

    i = 0;
    cs = (char)c;
    
    while (s[i])
        i++;
    while (i >= 0)
    {
        if(s[i] == cs)
            return ((char *)&s[i]);
        i--;
    }
    return NULL;
}
    