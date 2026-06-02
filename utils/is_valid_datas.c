/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_datas.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedro-henrique <pedro-henrique@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 21:39:50 by pedro-henri       #+#    #+#             */
/*   Updated: 2026/06/01 22:06:59 by pedro-henri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../codexion.h"

int is_valid_datas(t_parsing_data *datas)
{
    int fields[8];
    int i;

    if (!datas)
        return (0);
    i = 0;
    fields[0] = datas->number_code;
    fields[1] = datas->time_burnout;
    fields[2] = datas->time_compile;
    fields[3] = datas->time_debug;
    fields[4] = datas->time_refactor;
    fields[5] = datas->time_compile_required;
    fields[6] = datas->doogle_cooldown ;
    fields[7] = datas->scheduler;
    while (i < 8 )
    {
        if (fields[i] < 0)
            return (0);
        i++;
    }
    return (1);
}
