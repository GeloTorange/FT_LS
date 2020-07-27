/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: torange <@student.42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/27 12:44:54 by torange           #+#    #+#             */
/*   Updated: 2020/07/27 14:37:30 by torange          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LS_H
# define FT_LS_H

# include "libft.h"
# include "libftprintf.h"

typedef struct	s_ls_options {
	size_t		R_flag;
	size_t		l_flag;
	size_t		a_flag;
	size_t		r_flag;
	size_t		t_flag;
}				t_ls_options;

void			init_f(t_ls_options **ft_ls);
void			parse_flags(char **av, size_t count, t_ls_options **ft_ls);
void			str_free(char ***str);

#endif
