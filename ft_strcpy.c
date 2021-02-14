/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmurray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 21:57:21 by lmurray           #+#    #+#             */
/*   Updated: 2020/03/10 20:41:06 by lmurray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int it;
	int flag;

	flag = 0;
	it = 0;
	while (flag != 1)
	{
		if (src[it])
		{
			dest[it] = src[it];
			it++;
		}
		else
		{
			flag = 1;
		}
		dest[it] = '\0';
	}
	return (dest);
}
