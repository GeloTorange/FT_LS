/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: torange <@student.42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/27 12:44:30 by torange           #+#    #+#             */
/*   Updated: 2020/07/27 14:40:17 by torange          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int	main(int argc, char **argv)
{
	t_ls_options *ft_ls;

	if (argc > 1)
	{
		init_f(&ft_ls);
		parse_flags(argv, argc - 1, &ft_ls);
		free(ft_ls);
	}
	return (0);
}
