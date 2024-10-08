/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaliull <avaliull@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 18:20:30 by avaliull          #+#    #+#             */
/*   Updated: 2024/10/08 18:26:28 by avaliull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr_s;
	char	*last_occ;

	ptr_s = (char *) s;
	last_occ = NULL;
	while (*ptr_s)
	{
		if (*ptr_s == c)
			last_occ = ptr_s;
		ptr_s++;
	}
	if (c == '\0')
		return (ptr_s);
	return (last_occ);
}
