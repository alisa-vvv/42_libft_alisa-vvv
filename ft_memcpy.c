/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaliull <avaliull@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:16:37 by avaliull          #+#    #+#             */
/*   Updated: 2024/10/11 13:14:07 by avaliull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;

	ptr_dest = dest;
	ptr_src = (unsigned char *) src;
	while (n--)
		*ptr_dest++ = *ptr_src++;
}
