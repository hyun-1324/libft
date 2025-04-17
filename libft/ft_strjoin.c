/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donheo <donheo@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 18:14:48 by donheo            #+#    #+#             */
/*   Updated: 2025/04/17 10:13:59 by donheo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len1;
	int		len2;
	int		i;
	char	*new_s;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	new_s = malloc((len1 + len2 + 1) * sizeof(char));
	if (!new_s)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		new_s[i] = s1[i];
		i++;
	}
	while (i < len1 + len2)
	{
		new_s[i] = s2[i - len1];
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
