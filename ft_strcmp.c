/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmurray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 18:17:10 by lmurray           #+#    #+#             */
/*   Updated: 2020/03/10 20:38:47 by lmurray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int pass;
	int schet;

	schet = 0;
	pass = 0;
	while (s1[pass] == s2[pass] && s1[pass] != '\0' && s2[pass] != '\0')
	{
		schet++;
		pass++;
	}
	if (s1[schet] == '\0' && s2[schet] == '\0')
	{
		return (0);
	}
	return (s1[schet] - s2[pass]);
}
