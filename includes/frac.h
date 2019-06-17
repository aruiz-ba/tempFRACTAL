/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   frac.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-ba <aruiz-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 14:26:13 by aruiz-ba          #+#    #+#             */
/*   Updated: 2019/06/17 19:26:31 by aruiz-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../Libft/libft.h"
# include "mlx.h"
# include "math.h"
# include "pthread.h"

# define WIN_WIDTH	1000	
# define WIN_HEIGHT	1000
# define THR_NUM 	1000
# define O			31	
# define P			35

typedef struct		s_image
{
	void			*image;
	char			*ptr;
	int				bpp;
	int				stride;
	int				endian;
}					t_image;

typedef struct		s_thr
{
	pthread_t		tid;
	char			**image_string;
	float			a;
	float			b;
	int				x;
	int				y;
	int				min_k;
	int				end_k;
}					t_thr;

typedef struct		s_mlx
{
	void			*mlx;
	void			*win;
	float			a;
	float			b;
	t_image			*img;
	t_thr			thr[THR_NUM];
	int				k_in;
}					t_mlx;

typedef struct		s_m
{
	t_mlx			mlx;
	t_thr			thr[THR_NUM];
	t_image			img;
	int				k_in;
}					t_m;

void 	new_image(t_m *m);
void	fill_image(t_thr *thr);
void	*cast(void *thr);
void	freeimage(char **image_string);
int		mandelbrot(int bright, int x, int y, float c, float d);
int		deal_key(int key, t_mlx *m);
