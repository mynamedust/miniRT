/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_obj.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agladkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:33:04 by agladkov          #+#    #+#             */
/*   Updated: 2023/09/11 13:33:05 by agladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

void	ft_rotate_objects(t_scene *scene, t_matrix matrix)
{
	t_figure	*figure;

	figure = scene->figure;
	while (figure)
	{
		if (figure->type == SPHERE)
			ft_rotate_sphere(figure->data, matrix);
		else if (figure->type == PLANE)
			ft_rotate_plane(figure, matrix);
		else if (figure->type == CYLINDER)
			ft_rotate_cylinder(figure, matrix);
		figure = figure->next;
	}
}

void	ft_rotate_sphere(t_sphere *sphere, t_matrix matrix)
{
	sphere->center = ft_vec_mult_mat(sphere->center, matrix);
}

void	ft_rotate_plane(t_figure *figure, t_matrix matrix)
{
	t_plane		*plane;

	plane = figure->data;
	plane->point = ft_vec_mult_mat(plane->point, matrix);
	plane->normal = ft_vec_mult_mat(plane->normal, matrix);
	figure->normal = ft_vec_mult_mat(figure->normal, matrix);
}

void	ft_rotate_cylinder(t_figure *figure, t_matrix matrix)
{
	t_cylinder		*cylinder;

	cylinder = (t_cylinder *)figure->data;
	cylinder->center = ft_vec_mult_mat(cylinder->center, matrix);
	cylinder->direction = ft_vec_mult_mat(cylinder->direction, matrix);
	figure->normal = ft_vec_mult_mat(figure->normal, matrix);
}
