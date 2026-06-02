#ifndef CODEXION_H
#define CODEXION_H

#include <stdlib.h>
#include <stdio.h>

typedef struct t_programmer_list {
	int							time_bornout;
	int							time_work;
	struct t_programmer_list	*next;
	struct t_programmer_list	*prev;
} t_programmer;

typedef struct t_usb_list 
{
	int	wait_time;
	struct	t_usb_list	*next;
	struct	t_usb_list	*prev;
} t_usb;

typedef struct t_table_list {
	t_programmer	*programmer;
	t_usb			*usb;
} t_table;

typedef struct t_parsing_data {
	int	number_code;
	int time_burnout;
	int	time_compile;
	int	time_debug;
	int	time_refactor;
	int	time_compile_required;
	int	doogle_cooldown;
	int	scheduler;
} t_parsing_data;

t_programmer	*create_node_programmer(int time_bornout, int time_work);
void			print_list_programmer(t_programmer *list);
int				is_valid_datas(t_parsing_data	*datas);

#endif