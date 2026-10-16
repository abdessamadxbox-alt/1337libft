/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-kou <abel-kou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 12:12:24 by abel-kou          #+#    #+#             */
/*   Updated: 2026/10/16 18:08:49 by abel-kou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void *ft_calloc(size_t nmemb, size_t size)
{
    if(!nmemb || !size)
        return NULL;
    size_t i = size*nmemb;
    char *res = malloc(i);
    if(!res)
        return NULL;
    while (i > 0)
    {
        i--;
        res[i] = 0;
    }
    return((void *)res);
}