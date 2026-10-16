/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-kou <abel-kou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 13:48:23 by abel-kou          #+#    #+#             */
/*   Updated: 2026/10/15 23:45:58 by abel-kou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)

{
    unsigned char *d;
    const unsigned char *s;
    
    d = (const unsigned char *)s1;
    s = (const unsigned char *)s2;

    if (n == 0)
        return (0);
    size_t i = 0;
     while (i < n)
     {
        if(s[i] != d[i])
            return ((int)(d[i] - s[i]));
        i++;
     }
    return (0);
}