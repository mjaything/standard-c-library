/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-kim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 14:29:56 by min-kim           #+#    #+#             */
/*   Updated: 2019/01/28 22:17:49 by min-kim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*t;
	int		i;

	t = ft_strnew(ft_strlen(s));
	i = 0;
	while (s[i] != '\0')
	{
		t[i] = f(s[i]);
		i++;
	}
	return (t);
}
