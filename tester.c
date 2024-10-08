/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaliull <avaliull@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:47:26 by avaliull          #+#    #+#             */
/*   Updated: 2024/10/08 17:13:53 by avaliull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <string.h>



void	ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;
	unsigned char	*ptr_tmp;

	ptr_dest = (unsigned char *) dest;
	ptr_src = (unsigned char *) src;
	while (n > 0)
	{
		*ptr_tmp = *ptr_src;
		ptr_tmp++;
		ptr_src++;
		n--;
	}
	*ptr_tmp = '\0';
	while (*ptr_tmp)
	{
		*ptr_dest = *ptr_tmp;
		ptr_dest++;
		ptr_tmp++;
	}
}

int	main(void)
{	
	char	*src = "12345";
	char	dest3[6] = "abcde";
	printf("src: %s\n\n", src);
	printf("example before: %s\n", dest3);
	memmove(dest3, src, 3);
	printf("example after: %s\n\n", dest3);

	char	dest4[6] = "abcde";
	printf("myfunc before: %s\n", dest4);
	ft_memmove(dest4, src, 3);
	printf("myfunc after: %s\n", dest4);
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