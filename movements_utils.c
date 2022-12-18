/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleite-s < rleite-s@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 08:02:18 by rleite-s          #+#    #+#             */
/*   Updated: 2022/12/18 21:34:56 by rleite-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_ret_pos_smaller(t_stack *a)
{
	int	i;
	int	small_num;
	int	pos_small;

	i = 0;
	small_num = a->numbers[0];
	pos_small = 0;
	while (i <= a->last)
	{
		if (a->numbers[i] < small_num)
		{
			small_num = a->numbers[i];
			pos_small = i;
		}
		i++;
	}
	return (pos_small);
}

int	ft_ret_bigger_binary(t_stack *a)
{
	int	i;
	int	bigger_num;
	int	qtd_dig_binary;

	i = 1;
	bigger_num = a->numbers[0];
	qtd_dig_binary = 0;
	while (i <= a->last)
	{
		if (a->numbers[i] > bigger_num)
		{
			bigger_num = a->numbers[i];
		}
		i++;
	}
	while (bigger_num > 0)
	{
		bigger_num = bigger_num / 2;
		qtd_dig_binary++;
	}
	return (qtd_dig_binary);
}

int	ft_is_sorted(t_stack *a)
{
	int	i;

	i = 0;
	while (i < a->last)
	{
		if (a->numbers[i] != i)
			return (0);
		i++;
	}
	return (1);
}
