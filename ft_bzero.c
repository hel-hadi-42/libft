/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 10:00:59 by hel-hadi          #+#    #+#             */
/*   Updated: 2016/11/06 10:27:50 by hel-hadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char *ptr;
	size_t i;

	ptr = (char*)s;
	i = 0;
	while ((i < n) && (n > 0))
	{
		ptr[i] = '\0';
		i++;
	}
}