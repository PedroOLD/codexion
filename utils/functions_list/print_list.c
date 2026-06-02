/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedro-henrique <pedro-henrique@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 21:39:55 by pedro-henri       #+#    #+#             */
/*   Updated: 2026/06/01 21:39:55 by pedro-henri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../codexion.h"

void	print_list_programmer(t_programmer *list)
{
	t_programmer	*tmp;

	tmp = list;
	while (tmp)
	{
		printf("aqui (%d)", tmp->time_bornout);
		tmp = tmp->next;
	}
}