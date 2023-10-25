/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plane.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agladkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:24:27 by agladkov          #+#    #+#             */
/*   Updated: 2023/09/11 13:24:28 by agladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

int	ft_set_plane(char **tokens, t_scene *scene)
{
	t_figure	*plane;
	t_vec		point;
	t_vec		normal;
	t_color		*color;

	point = ft_get_vector_from_token(tokens[1]);
	normal = ft_get_vector_from_token(tokens[2]);
	color = ft_get_color_from_token(tokens[3]);
	plane = new_plane(point, normal, color);
	ft_add_figure(scene, plane);
	return (0);
}
