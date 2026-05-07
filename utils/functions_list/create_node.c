/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdo-sant <pdo-sant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 17:12:14 by pdo-sant          #+#    #+#             */
/*   Updated: 2026/05/07 17:24:41 by pdo-sant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../codexion.h"
#include <stdlib.h>

t_programmer *create_node_programmer(int time_live, int time_work)
{
    t_programmer   *programmer;

    if (time_live < 0 || time_live < 0)
    {
        programmer->time_liver = -1;
        programmer->time_work = -1;
        programmer->next = NULL;
        programmer->prev = NULL;
        return (programmer);
    }
    programmer->time_liver = time_live;
    programmer->time_work = time_work;
    programmer->next = NULL;
    programmer->prev = NULL;
    return (programmer);
}
