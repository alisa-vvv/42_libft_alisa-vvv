/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaliull <avaliull@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 18:19:53 by avaliull          #+#    #+#             */
/*   Updated: 2024/10/08 18:20:11 by avaliull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	*ptr_s;

	ptr_s = (char *) s;
	while (*ptr_s)
	{
		if (*ptr_s == c)
			return (ptr_s);
		ptr_s++;
	}
	if (c == '\0')
		return (ptr_s);
	return (NULL);
}