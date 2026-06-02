/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedro-henrique <pedro-henrique@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 17:12:14 by pdo-sant          #+#    #+#             */
/*   Updated: 2026/06/02 01:04:51 by pedro-henri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../codexion.h"

t_programmer_list *create_node_programmer(t_programmer_list *datas)
{
    t_programmer_list   *programmer;

    if (datas->time_bornout < 0 || datas->time_compile < 0 || datas->time_debug < 0 || datas->time_refactor < 0)
    {
        printf ("Erro: Invalid Negative Input node Programmer");
        return (NULL);
    }
    programmer = (t_programmer_list *)malloc(sizeof(t_programmer_list));
    if (!programmer)
        return (NULL);
    programmer->time_bornout = datas->time_bornout;
    programmer->time_compile = datas->time_compile;
    programmer->time_debug = datas->time_debug;
    programmer->time_refactor = datas->time_refactor;
    programmer->id_doogle_usb = 0;
    programmer->total_work = datas->time_compile + datas->time_debug + datas->time_refactor;
    programmer->next = NULL;
    programmer->prev = NULL;
    return (programmer);
}
