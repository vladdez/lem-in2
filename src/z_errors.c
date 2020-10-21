/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kysgramo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 12:57:52 by kysgramo          #+#    #+#             */
/*   Updated: 2020/06/29 12:58:37 by kysgramo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/lem_in.h"
#include <errno.h>

void	*terminate(char *er)
{
	if (errno == 0)
		ft_putendl_fd(er, 2);
	else
		perror(er);
	exit(1);
}