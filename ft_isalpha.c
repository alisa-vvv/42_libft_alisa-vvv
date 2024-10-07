/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_isalpha.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: avaliull <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/10/07 14:01:22 by avaliull       #+#    #+#                */
/*   Updated: 2024/10/07 14:06:03 by avaliull       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1024);
	return (0);
}