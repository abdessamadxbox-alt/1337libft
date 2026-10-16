/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-kou <abel-kou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 13:48:23 by abel-kou          #+#    #+#             */
/*   Updated: 2026/10/16 17:23:34 by abel-kou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static size_t ft_strlen(const char *s)
{
    size_t i = 0;
    while (s[i])
        i++;
    return (i);
}
char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i = 0;
    size_t j = 0;
    size_t len_little = ft_strlen(little);

    if (!little[0])
        return ((char *)big);
    if(len_little > len)
        return NULL;

    while(i < len)
    {
        j = 0;
        while (i + j < len && little[j] && big[j + i] && (big[i + j] == little[j]))
            j++;
        if(little[j] == '\0')
            return((char *)&big[i]);
        i++;
    }
    return NULL;
}