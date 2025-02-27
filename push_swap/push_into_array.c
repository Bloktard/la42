/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_into_array.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plerick <plerick@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 18:54:36 by plerick           #+#    #+#             */
/*   Updated: 2025/02/06 19:48:49 by plerick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int *push_into_array(char **array)
{
    long *temp;
	int	i;
	int	j;

	j = 0;
	while (array[j] != NULL)
		j++;
	temp = malloc(sizeof(long) * j);
	i = 0;
    while (j > 0)
	{
		temp[i] = push_atol(array[i]);
		if (temp[i] > INT_MAX || temp[i] < INT_MIN)
		{
			write(2, "Error\n", 6);
			free(temp);
			exit; // must free l'array
		}
		j--;
		i++;
	}
    return (temp);
}