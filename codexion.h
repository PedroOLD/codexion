#ifndef CODEXION_H
#define CODEXION_H

typedef struct t_programmer_list {
	int							time_liver;
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
}t_table;

#endif