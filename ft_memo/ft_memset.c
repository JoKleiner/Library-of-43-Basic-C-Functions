/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 11:34:06 by joklein           #+#    #+#             */
/*   Updated: 2024/10/17 10:49:18 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int cha, size_t len)
{
	size_t			i;

	i = 0;
	while (i < len)
	{
		((char *)str)[i] = (unsigned char)cha;
		i++;
	}
	return ((void *)str);
}
