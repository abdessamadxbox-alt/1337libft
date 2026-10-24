/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdessamad <abdessamad@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 16:05:44 by abdessamad        #+#    #+#             */
/*   Updated: 2026/10/23 16:15:54 by abdessamad       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>

int	is_in_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	len(char const *s1, char const *set)
{
	int	start;
	int	end;

	start = 0;
	while (s1[start] && is_in_set(s1[start], set))
		start++;
	end = start;
	while (s1[end])
		end++;
	while (end > start && is_in_set(s1[end - 1], set))
		end--;
	return (end - start);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		i;
	int		j;
	int		size;

	if (!s1 || !set)
		return (NULL);
	size = len(s1, set);
	res = malloc(size + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (s1[i] && is_in_set(s1[i], set))
		i++;
	j = 0;
	while (j < size)
		res[j++] = s1[i++];
	res[j] = '\0';
	return (res);
}

#include <stdio.h>

int	main(void)
{
	char	*s1 = "**   *hello*world***";
	char	*set = "  doa* ";
	char	*result;
	result = ft_strtrim(s1, set);
    printf("%s",result);
	return (0);
}
