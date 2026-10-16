/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-kou <abel-kou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 13:48:23 by abel-kou          #+#    #+#             */
/*   Updated: 2026/10/15 22:48:15 by abel-kou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i = 0;
    if (n == 0)
        return (0);
    while (s1[i] && s1[i] == s2[i] && i < n)
        i++;
    if (i == n)
        return (0);
    return(((unsigned char)s1[i]) - ((unsigned char)s2[i]));
}
// #include <stdio.h>
// #include <string.h>

// int main() {
//   char myStr1[] = "ABCD";
//   char myStr2[] = "ABCE";
//   int cmp = strncmp(myStr1, myStr2, 0);
//     printf("%d\n",cmp);
// }