/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plerick <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 23:08:20 by plerick           #+#    #+#             */
/*   Updated: 2024/10/28 23:46:22 by plerick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

char	*ft_strdup(const char *str)
{
	char	*new_str;
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	new_str = (char *)malloc((sizeof(char) * i) + 1);
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		new_str[i] = str[i];
		i++;
	}
	return (new_str);
}
/*
int	main(void)
{
	const char	str1[] = "hahaha";
	const char	str2[] = "ha";
	const char	*dup1;
	const char	*dup2;

	dup1 = ft_strdup(str1);
	dup2 = strdup(str2);
	printf("Mon code : %s\n", dup1);
	printf("La verif : %s\n", dup2);
	free((void *)dup1);
	free((void *)dup2);
	return (0);
}
*/