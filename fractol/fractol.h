/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plerick <plerick@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 16:30:10 by plerick           #+#    #+#             */
/*   Updated: 2025/04/02 18:45:32 by plerick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef	FRACTOL_H
# define FRACTOL_H

# include "libft/libft.h"
# include <unistd.h>
# include "minilibx-linux/mlx.h"
# include <stdio.h>
# include <math.h> // a voir ce qu'elle fait
// # include <X11/keysym.h> // a voir ce qu'elle fait
// # include <X11/Xlib.h> // a voir ce qu'elle fait

# define WIDTH 800
# define HEIGHT 800
# define MAX_ITERATIONS 42

typedef struct s_fractol
{
	void	*mlx;
	void	*window;
	void	*img;
	char	*buf;
	int		fractal;
	double	cx;
	double	cy;
	double	min_x;
	double	min_y;
	double	max_x;
	double	max_y;
}	t_fractol;

void	init_frac(t_fractol *frac);
void	error_msg(t_fractol *frac);
void	error_exit(t_fractol *frac, int code);
void	init(t_fractol *frac);
void	init_point(t_fractol *frac);
void	init_img(t_fractol *frac);
int		msg(char *str, int errno);
void	do_fractal(t_fractol *frac, int argc, char **argv);
void	get_value(t_fractol *frac, char **argv);
double	ft_atod(char *nbr, int i);
void	get_julia(t_fractol *frac);
int		julia(t_fractol *frac, double x, double y);
int		get_color(int iter);
void	set_color(t_fractol *frac, int x, int y, int color);
void	get_mandelbrot(t_fractol *frac);
int		mandelbrot(double cx, double cy);

#endif