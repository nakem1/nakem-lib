/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmurray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 14:03:29 by lmurray           #+#    #+#             */
/*   Updated: 2020/03/10 20:50:25 by lmurray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int dig;
	int dig1;

	dig = 0;
	dig1 = 0;
	while (str[dig] != '\0')
	{
		if (str[dig] == to_find[0])
		{
			dig1 = 1;
			while (to_find[dig1] == str[dig + dig1] && to_find != '\0')
			{
				dig1++;
				if (to_find[dig1] == '\0')
					return (&str[dig]);
			}
		}
		dig++;
	}
	return (0);
}
