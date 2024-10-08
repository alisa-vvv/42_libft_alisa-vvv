/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaliull <avaliull@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:47:26 by avaliull          #+#    #+#             */
/*   Updated: 2024/10/08 19:16:36 by avaliull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_tmp;

	s_tmp = (unsigned char *) s;
	while (n > 0)
	{
		if (*s_tmp == (unsigned char) c)
			return (s_tmp);
		s_tmp++;
		n--;
	}
	return (NULL);
}

int	main(void)
{	
	unsigned char	*str;
	str = memchr("ab0cde", '0', 4);
	printf("Example_Res: %s\n", str);
	str = ft_memchr("ab0cde", '0', 4);
	printf("ft_Res: %s\n", str);
	return (0);
}




	// while (i < 5)
	// {
	// 	printf("%d, ", ptr[i]);
	// 	i++;
	// }

	// ft_memset(ptr, 9, 3);
	// i = 0;
	// printf("new arr: ");
	// while (i < 5)
	// {
	// 	printf("%d, ", ptr[i]);
	// 	i++;
	// }