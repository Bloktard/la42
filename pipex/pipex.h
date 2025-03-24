/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plerick <plerick@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 15:41:01 by plerick           #+#    #+#             */
/*   Updated: 2025/03/24 19:35:15 by plerick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include "libft/libft.h"
# include <unistd.h>
# include <string.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/wait.h>
# include <errno.h>

int child1(int argc, char **argv, char **env, int fd[]);
int child2(int argc, char **argv, char **env, int fd[]);
void handling_error(void);


#endif