/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nrperfect.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabanciu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 16:56:03 by mabanciu          #+#    #+#             */
/*   Updated: 2017/12/18 16:57:38 by mabanciu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nrperfect(size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (i * i == n)
			return (1);
		i++;
	}
	return (0);
}
