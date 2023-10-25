/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sphere.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agladkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:24:09 by agladkov          #+#    #+#             */
/*   Updated: 2023/09/11 13:24:10 by agladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

int	ft_set_sphere(char **tokens, t_scene *scene)
{
	t_figure	*sphere;
	t_vec		center;
	t_color		*color;
	float		radius;

	center = ft_get_vector_from_token(tokens[1]);
	color = ft_get_color_from_token(tokens[3]);
	radius = ft_atof(tokens[2]) / 2;
	if (!color)
		return (1);
	sphere = new_sphere(center, radius, color);
	if (!sphere)
		return (1);
	ft_add_figure(scene, sphere);
	return (0);
}
