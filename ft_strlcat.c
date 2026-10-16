/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-kou <abel-kou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 13:48:23 by abel-kou          #+#    #+#             */
/*   Updated: 2026/10/15 22:29:33 by abel-kou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t ft_strlen(const char *s)
{
    size_t i = 0;
    while (s[i])
        i++;
    return (i);
}
size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t dst_len;
    size_t src_len;
    size_t i;
    size_t j;

    src_len = ft_strlen(src);
    dst_len = 0;
    while (dst[dst_len] != '\0' && dst_len < size)
        dst_len++;
    if (dst_len == size)
        return (size + src_len);
    i = dst_len;
    j = 0;
    while (src[j] != '\0' && i < (size - 1))
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = '\0';

    return (dst_len + src_len);
}