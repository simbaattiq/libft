/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-atti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:38:13 by mel-atti          #+#    #+#             */
/*   Updated: 2023/11/01 18:38:25 by mel-atti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	if (dsize == 0)
		return (i);
	while (src[j] && j < (dsize - 1))
	{
		dst[j] = src[j];
		j++;
	}
	if (j < dsize)
		dst[j] = '\0';
	return (i);
}
// int main(){
// 	char str[20] = "Hello";
// 	char str2[20] = "World";
// 	printf("Mine   ==>  %lu\n", ft_strlcpy(str, "str2", 8));
// 	printf("theirs ==>  %lu\n", strlcpy(str, "str2", 8));
// 	printf("Mine   ==>  %s\n", str);
// 	printf("theirs ==>  %s\n", str);
// }
