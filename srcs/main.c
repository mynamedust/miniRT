/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almeliky <almeliky@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 17:03:52 by almeliky          #+#    #+#             */
/*   Updated: 2023/09/25 15:37:49 by adamsonbo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

int	main(int argc, char **argv)
{
	void	*mlx;
	void	*win;
	t_scene	*scene;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	scene = new_scene(WIDTH, HEIGHT);
	ft_parser(argv[1], scene);
	mlx = mlx_init();
	scene->mlx = mlx;
	win = mlx_new_window(mlx, scene->width, scene->height, "miniRT");
	scene->win = win;
	ft_move_scene_to_camera(scene, scene->cams);
	render(scene);
	ft_init_hooks(scene);
	mlx_loop(mlx);
	return (0);
}
