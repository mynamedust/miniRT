/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ambient.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agladkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:26:00 by agladkov          #+#    #+#             */
/*   Updated: 2023/09/11 13:26:01 by agladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

int	ft_set_ambient(char **tokens, t_scene *scene)
{
	t_color	*color;

	if (!tokens || !scene)
		return (1);
	color = ft_get_color_from_token(tokens[2]);
	if (!color)
		return (1);
	scene->ambient = new_ambient(color, ft_atof(tokens[1]));
	return (0);
}
