/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif_and_all.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plerick <plerick@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 20:06:30 by plerick           #+#    #+#             */
/*   Updated: 2025/03/13 22:08:05 by plerick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_split(char **a)
{
	int	i;

	i = 0;
	while (a[i] != NULL)
		i++;
	while (i >= 0)
	{
		free(a[i]);
		i--;
	}
	free(a);
	return ;
}

void	free_all(t_list	*stack)
{
	t_list	*tmp;

	while (stack)
	{
		tmp = stack;
		stack = stack->next;
		free(tmp);
	}
}

int	verif_and_all(int argc, char *argv[])
{
	char	**a;

	if (argc < 2)
		exit(0);
	else if (argc == 2)
	{
		if (argv[1][0] == '\0')
			exit(0);
		a = ft_split(argv[1], ' ');
		if (verif_string(a) == 0)
		{
			free_split(a);
			return (0);
		}
		free_split(a);
		return (1);
	}
	else if (verif_string(argv + 1) == 0)
	{
		exit(0);
	}
	return (1);
}
