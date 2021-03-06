/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrdig.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaudez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 15:55:50 by tblaudez          #+#    #+#             */
/*   Updated: 2018/05/22 15:56:43 by tblaudez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_nbrdig(size_t n, int base)
{
	int i;

	i = 1;
	while ((ft_power(base, i) - 1) < n)
		i++;
	return (i);
}
