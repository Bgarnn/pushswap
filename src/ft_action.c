#include "push_swap.h"

void	sa(t_data *data)
{
	t_node	*tmp;

	if (data->size_a < 2)
		return ;
	tmp = data->a_top;
	data->a_top = data->a_top->next;
	tmp->next = data->a_top->next;
	data->a_top->next = tmp;
	write(1, "sa\n", 3);
}

void	pa(t_data *data)
{
	t_node	*tmp;

	if (data->size_b == 0)
		return ;
	tmp = data->b_top;
	data->b_top = data->b_top->next;
	tmp->next = data->a_top;
	data->a_top = tmp;
	data->size_a++;
	data->size_b--;
	write(1, "pa\n", 3);
}

void	pb(t_data *data)
{
	t_node	*tmp;

	if (data->size_a == 0)
		return ;
	tmp = data->a_top;
	data->a_top = data->a_top->next;
	tmp->next = data->b_top;
	data->b_top = tmp;
	data->size_b++;
	data->size_a--;
	write(1, "pb\n", 3);
}

void	ra(t_data *data)
{
	t_node	*tmp;
	t_node	*bottom;

	if (data->size_a < 2)
		return ;
	tmp = data->a_top;
	data->a_top = data->a_top->next;
	tmp->next = NULL;
	bottom = data->a_top;
	while (bottom->next)
		bottom = bottom->next;
	bottom->next = tmp;
	write(1, "ra\n", 3);
}

void	rb(t_data *data)
{
	t_node	*tmp;
	t_node	*bottom;

	if (data->size_b < 2)
		return ;
	tmp = data->b_top;
	data->b_top = data->b_top->next;
	tmp->next = NULL;
	bottom = data->b_top;
	while (bottom->next)
		bottom = bottom->next;
	bottom->next = tmp;
	write(1, "rb\n", 3);
}