/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaudez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 10:53:09 by tblaudez          #+#    #+#             */
/*   Updated: 2018/04/11 10:53:13 by tblaudez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_strupcase(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
	{
		if (ft_islower(str[i]))
			str[i] -= 32;
	}
	return (str);
}
