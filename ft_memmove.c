/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-kou <abel-kou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 13:48:23 by abel-kou          #+#    #+#             */
/*   Updated: 2026/10/15 14:21:52 by abel-kou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

 void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d;
    const unsigned char *s;
    
    d = (unsigned char *)dest;
    s = (const unsigned char *)src;

    size_t i = 0;
    if(d < s)
    {
        while (i < n)
        {
            d[i] = s[i];
            i++;
        }
    }
    else
    {
        while (n > 0)
        {
            n--;
            d[n] = s[n];
        }           
    }
    return dest;
}