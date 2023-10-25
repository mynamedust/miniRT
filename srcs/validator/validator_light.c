/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validator_light.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agladkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:01:33 by agladkov          #+#    #+#             */
/*   Updated: 2023/09/11 13:01:34 by agladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

int	ft_is_valid_light(char **tokens)
{
	float	ratio;

	if (ft_is_valid_vector(tokens[1]))
		return (1);
	if (ft_is_valid_color(tokens[3]))
		return (1);
	ratio = ft_atof(tokens[2]);
	if (ratio < 0.0f || ratio > 1.0f)
		return (1);
	return (0);
}
