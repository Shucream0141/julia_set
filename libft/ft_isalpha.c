/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sendo <sendo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:08:14 by sendo             #+#    #+#             */
/*   Updated: 2023/06/23 16:37:12 by sendo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

// #include <ctype.h>
// #include <stdio.h>

// int	main(void)
// {
// 	int c;
// 	c = isalpha('a');
// 	printf("%d\n", c);
// 	c = ft_isalpha('a');
// 	printf("%d\n", c);
// 	return (0);
// }

/*DESCRIPTION
     The isalpha() function tests for any character for which isupper(3) or
     islower(3) is true.  The value of the argument must be representable as
     an unsigned char or the value of EOF.
*/
/*RETURN VALUES
     The isalpha() function returns zero if the character tests false and
     returns non-zero if the character tests true.*/