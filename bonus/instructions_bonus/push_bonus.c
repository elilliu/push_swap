/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elilliu <elilliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 21:19:23 by elilliu           #+#    #+#             */
/*   Updated: 2023/12/27 21:30:19 by elilliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	push_bonus(t_list_bonus *source, t_list_bonus *dest)
{
	shift_down_bonus(dest);
	dest[0].value = source[0].value;
	shift_up_bonus(source);
}
