/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: torange <@student.42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/27 12:49:26 by torange           #+#    #+#             */
/*   Updated: 2020/07/27 14:38:50 by torange          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	init_ev_flag(t_ls_options **ft_ls, char flag)
{
	if (flag == 'R')
		(*ft_ls)->R_flag = 1;
	if (flag == 'l')
		(*ft_ls)->l_flag = 1;
	if (flag == 'a')
		(*ft_ls)->a_flag = 1;
	if (flag == 'r')
		(*ft_ls)->r_flag = 1;
	if (flag == 't')
		(*ft_ls)->t_flag = 1;
}

void	find_flags(t_ls_options **ft_ls, char **flags, int arr_len)
{
	int	str_len;


	while (arr_len > -1)
	{
		str_len = ft_strlen(flags[arr_len]);
		while (str_len > -1)
			init_ev_flag(ft_ls, flags[arr_len][str_len--]);
		arr_len--;
	}
}

void	parse_flags(char **av, size_t count, t_ls_options **ft_ls)
{
	char **flags;

	while (count > 0)
	{
		flags = ft_strsplit(av[count--], ' ');
		find_flags(ft_ls, flags, ft_arrlen(flags) - 1);
		str_free(&flags);
	}
}
