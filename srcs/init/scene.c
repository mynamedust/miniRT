/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scene.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almeliky <almeliky@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 13:26:59 by almeliky          #+#    #+#             */
/*   Updated: 2023/09/11 14:07:57 by agladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

t_scene	*new_scene(float width, float height)
{
	t_scene		*new;

	new = malloc(sizeof(t_scene));
	if (!new)
		err_exit("err: memory allocating failed.\n");
	new->width = width;
	new->height = height;
	new->cams = NULL;
	new->ambient = NULL;
	new->light = NULL;
	new->figure = NULL;
	new->current_figure = NULL;
	new->vplane = new_vplane(width, height, 70);
	new->x_angle = 0.3;
	new->y_angle = 0.3;
	new->z_angle = 0.3;
	new->xmove = 20.0f;
	new->ymove = 20.0f;
	new->zmove = 20.0f;
	new->button = -1;
	new->ui = -1;
	return (new);
}
