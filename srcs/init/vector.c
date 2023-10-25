/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almeliky <almeliky@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 15:34:59 by almeliky          #+#    #+#             */
/*   Updated: 2023/09/05 18:18:47 by almeliky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "geometry.h"
#include "minirt.h"

t_vec	ft_vec_dup(t_vec vec)
{
	t_vec	new;

	new.x = vec.x;
	new.y = vec.y;
	new.z = vec.z;
	new.w = vec.w;
	return (new);
}

t_vec	new_4vector(float x, float y, float z, float w)
{
	t_vec	new;

	new.x = x;
	new.y = y;
	new.z = z;
	new.w = w;
	return (new);
}

t_vec	new_vector(float x, float y, float z)
{
	t_vec	new;

	new.x = x;
	new.y = y;
	new.z = z;
	new.w = 1;
	return (new);
}

t_vec	new_zero_vec(void)
{
	t_vec	new;

	new.x = 0;
	new.y = 0;
	new.z = 0;
	new.w = 0;
	return (new);
}
