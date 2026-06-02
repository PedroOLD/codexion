/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedro-henrique <pedro-henrique@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 21:39:53 by pedro-henri       #+#    #+#             */
/*   Updated: 2026/06/02 01:05:52 by pedro-henri      ###   ########.fr       */
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

t_programmer_list *create_list_programmers(t_parsing_data *datas) 
{
	t_programmer_list	*l_programmers;
	t_programmer_list	*node;
	t_programmer_list	*tmp;

	if (!datas)
		return (NULL);
	while(!tmp)
	{
		if (tmp->next == NULL)
		{
			node = create_node_programmer(datas);
			tmp->next = node;
			node->next = NULL;
			node->prev = tmp;
		}
		else
			tmp = tmp->next;
	}
	l_programmers = tmp;
	return (l_programmers);
}

int main(int ac, char *av[])
{
	t_programmer_list	*programmers;
	t_parsing_data	*datas;
	if	(ac != 9)
	{
		printf("Number arguments invalid!");
		return(0);
	}
	datas = parsing_data(av);
	
	return (0);
}
