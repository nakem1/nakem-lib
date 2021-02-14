/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmurray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 11:55:29 by lmurray           #+#    #+#             */
/*   Updated: 2020/03/10 13:32:02 by lmurray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int schet;

	schet = 0;
	while (schet < n && src[schet] != '\0')
	{
		dest[schet] = src[schet];
		schet++;
	}
	while (schet < n)
	{
		dest[schet] = '\0';
		schet++;
	}
	return (dest);
}
