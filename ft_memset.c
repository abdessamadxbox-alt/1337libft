/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-kou <abel-kou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 12:12:24 by abel-kou          #+#    #+#             */
/*   Updated: 2026/10/15 15:34:57 by abel-kou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
    unsigned char *ptr;
    size_t      i;

    ptr = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        ptr[i] = (unsigned char)c;
        i++;
    }
    return s; 
}
// //#include "libft.h"
// #include <stdio.h>
// // int main(void)
// // {
// //     char    dest[20] = "Hello World";
// //     int src[5];
// //     int     x = 1337;
// //     int     j = 0;
// //     int i = 0;
// //     while (x > 0)
// //     {
// //         src[i] = (x%10) + 48;
// //         x /= 10;
// //         i++;
// //     }
// //     i--;
// //     while (i >= 0)
// //     {
// //         ft_memset(&dest[j], src[i], 1);
// //         x /= 10;
// //         j++;
// //         i--;
// //     }
// //     dest[j] = '\0';
// //     printf("%s\n", dest);
// //     return (0);
// // }

// int main()
// {
//     //long x;
//     //int n = 4;
//     //scanf("%ld", &x);

//     //while (n--)
//     //{
//     //        printf("%ld\n", x % 256);
//     //    x /= 256;
//     //}
//     char f = 0;
//    // ft_memset(&f, 255, 1);
//     ft_memset((char *)&f + 1, 57, 1);
//     //ft_memset((char *)&f + 1, 5, 1);
//     printf("%d", f);
//     //char c = 130;
//     //printf("%d\n", c);


//     // 1337 = int /0/0/5/57/ /00000000/00000000/00000101/00111001/
// }
#include <stddef.h>
#include <stdio.h>

// void    *ft_memset(void *s, int c, size_t n)
// {
//     unsigned char   *ptr;
//     size_t          i;

//     ptr = (unsigned char *)s;
//     i = 0;
//     while (i < n)
//     {
//         ptr[i] = (unsigned char)c;
//         i++;
//     }
//     return (s); 
// }

int main(void)
{
    int x = 0;
    unsigned char *p = (unsigned char *)&x;
    // // P00111001 00000101 00000000 00000000
    ft_memset(p,199, 1);  // Byte lowl: 57  (binary: 00111001)
    ft_memset(p+1,250, 1);  // Byte lowl: 57  (binary: 00111001)
    ft_memset(p+2, 255, 1);   // Byte tani: 5   (binary: 00000101)
    ft_memset(p+3, 255, 1);   // Byte talit: 0  (binary: 00000000)
    //ft_memset(&buffer[3], 1, 1);   // Byte rabia: 0  (binary: 00000000)
    // buffer[4] = '\0';
  //  int result = *((int *)p);
    printf("Integer value: %d\n",x);
    // // printf("Bytes: %d, %d, %d, %d\n", buffer[0], buffer[1], buffer[2], buffer[3]);
    // printf("%s" , buffer);
   // int nb = 1456;
   // -1456;
    //0000 0001 1101 1000 
    //1111 1110 0010 0111 
    //
   // unsigned char *ptr = (unsigned char *)&nb;
  //  ft_memset(ptr,39,1);
   // ft_memset(ptr + 1, 238,1);
    
    return (0);
}