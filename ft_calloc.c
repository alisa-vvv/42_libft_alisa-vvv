/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaliull <avaliull@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:58:33 by avaliull          #+#    #+#             */
/*   Updated: 2024/10/14 12:05:09 by avaliull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

//static void	ft_bzero(void *s, size_t n)
//{
//	unsigned char	*ptr;
//
//	ptr = s;
//	while (n--)
//	{
//		*ptr = (unsigned char) '\0';
//		ptr++;
//	}
//}
//
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr_start;

	if (size && nmemb > (size_t) - 1 / size)
		return (NULL);
	ptr_start = malloc(nmemb * size);
	if (ptr_start == NULL)
		return (NULL);
	ft_bzero(ptr_start, nmemb * size);
	return (ptr_start);
}
