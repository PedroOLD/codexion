/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedro-henrique <pedro-henrique@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 21:39:53 by pedro-henri       #+#    #+#             */
/*   Updated: 2026/06/01 22:09:30 by pedro-henri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./codexion.h"

t_parsing_data	*parsing_data(char **av)
{
	t_parsing_data	*datas;

	datas = (t_parsing_data *)malloc(sizeof(t_parsing_data));
	if (!datas)
		return (NULL);
	datas->number_code = atoi(av[1]);
	datas->time_burnout = atoi(av[2]);
	datas->time_compile = atoi(av[3]);
	datas->time_debug = atoi(av[4]);
	datas->time_refactor = atoi(av[5]);
	datas->time_compile_required = atoi(av[6]);
	datas->doogle_cooldown = atoi(av[7]);
	datas->scheduler = atoi(av[8]);
	if (!is_valid_datas(datas))
	{
		printf ("Error Parsing Data: Value inssue");
		free(datas);
		exit(1);
	}
	return (datas);
}


int main(int ac, char *av[])
{
	t_programmer	*programmer;
	t_parsing_data	*datas;
	if	(ac != 9)
	{
		printf("Number arguments invalid!");
		return(0);
	}
	datas = parsing_data(av);
	
	return (0);
}
