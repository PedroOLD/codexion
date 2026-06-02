#ifndef CODEXION_H
#define CODEXION_H

#include <stdlib.h>
#include <stdio.h>

typedef struct t_programmer_list {
	int							time_bornout;
	int							time_compile;
	int							time_debug;
	int							time_refactor;
	int							total_work;
	int							id_doogle_usb;
	struct t_programmer_list	*next;
	struct t_programmer_list	*prev;
} t_programmer_list;

typedef struct t_doogle_usb_list 
{
	int					time_cooldown;
	int					id;
	int					is_be_using;
	struct	t_usb_list	*next;
	struct	t_usb_list	*prev;
} t_usb;

typedef struct t_table_list {
	int				id;
	t_programmer_list	*programmer;
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

t_programmer_list	*create_node_programmer(t_programmer_list *datas);
void			print_list_programmer(t_programmer_list *list);
int				is_valid_datas(t_parsing_data	*datas);

#endif