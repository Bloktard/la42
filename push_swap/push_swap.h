/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plerick <plerick@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 17:03:33 by plerick           #+#    #+#             */
/*   Updated: 2025/02/03 20:23:11 by plerick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include "libft/libft.h"

typedef struct s_node
{
    int value;
    int index;
    struct s_node *next;
    struct s_node *previous;
} t_list;

typedef struct s_stack
{
    t_list *top;
} t_stack;

void    init_stack(t_stack *stack);
void	fill_stack_a(t_stack *stack, int *value);
void    print_stack(t_stack *stack);
int     calc_array_size(char *argv);
int     check_array_ok(char **array);
char	**init_array_nosplit(int argc, char **argv);

#endif