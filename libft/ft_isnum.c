/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tholzheu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 09:55:44 by tholzheu          #+#    #+#             */
/*   Updated: 2018/11/26 11:15:13 by tholzheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_isnum(char *s)
{
	if (!s)
		return (-1);
	while (s && *s)
	{
		if (ft_isdigit(*s) == 0)
			return (-1);
		s++;
	}
	return (ft_atoi(s));
}