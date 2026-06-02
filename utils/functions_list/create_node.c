/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedro-henrique <pedro-henrique@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 17:12:14 by pdo-sant          #+#    #+#             */
/*   Updated: 2026/06/01 21:40:00 by pedro-henri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../codexion.h"

t_programmer *create_node_programmer(int time_bornout, int time_work)
{
    t_programmer   *programmer;

    if (time_bornout < 0 || time_work < 0)
    {
        printf ("Erro: Invalid Negative Input node Programmer");
        return (NULL);
    }
    programmer = (t_programmer *)malloc(sizeof(t_programmer));
    if (!programmer)
        return (NULL);
    programmer->time_bornout = time_bornout;
    programmer->time_work = time_work;
    programmer->next = NULL;
    programmer->prev = NULL;
    return (programmer);
}
