/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-kou <abel-kou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 13:48:23 by abel-kou          #+#    #+#             */
/*   Updated: 2026/10/15 15:19:13 by abel-kou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *d;
    const unsigned char *s;
    
    d = (unsigned char *)dest;
    s = (const unsigned char *)src;

    size_t i = 0;

    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return dest;
}
#include <stdio.h>

int main()
{
    int dest[16] = {1};
    int src[] = {8, 8, 8, 8};
    ft_memcpy(dest + 2 ,src, 16);
    int i = 0;
    while(i < 4)
    {
        printf("%d\n",dest[i]);
        i++;
    }
}
