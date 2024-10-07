/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   tester.c                                            :+:    :+:           */
/*                                                      +:+                   */
/*   By: avaliull <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/10/07 11:47:26 by avaliull       #+#    #+#                */
/*   Updated: 2024/10/07 14:26:10 by avaliull       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isalnum (char c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') ||
		(c >= 'A' && c <= 'Z'))
		return (8);
	return (0);
}

int	main (int argc, char *argv[0])
{
	printf("result: %d\n", ft_isalnum(argv[1][0]));
	printf("compare: %d\n", isalnum(argv[1][0]));
	return (argc);
}
