/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_ft_ls.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: torange <@student.42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/27 13:28:51 by torange           #+#    #+#             */
/*   Updated: 2020/07/27 13:58:10 by torange          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void init_f(t_ls_options **ft_ls)
{
	if (!((*ft_ls) = (t_ls_options *)malloc(sizeof(t_ls_options))))
		return ;
	(*ft_ls)->R_flag = 0;
	(*ft_ls)->l_flag = 0;
	(*ft_ls)->a_flag = 0;
	(*ft_ls)->r_flag = 0;
	(*ft_ls)->t_flag = 0;
}
