/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movimentos_ambos.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleite-s < rleite-s@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 00:27:27 by msilva-p          #+#    #+#             */
/*   Updated: 2022/12/18 05:34:05 by rleite-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_swap_swap(t_stack *a, t_stack *b)
{
	if (a->last <= 0 || b->last <= 0)
	{
		return (1);
	}
	ft_swap_a(a);
	ft_swap_b(b);
	return (0);
}

int	ft_rotate_rotate(t_stack *a, t_stack *b)
{
	if (a->last <= 0 || b->last <= 0)
	{
		return (1);
	}
	ft_rotate_a(a);
	ft_rotate_b(b);
	return (0);
}

int	ft_reverse_rotate_rotate(t_stack *a, t_stack *b)
{
	if (a->last <= 0 || b->last <= 0)
	{
		return (1);
	}
	ft_reverse_rotate_a(a);
	ft_reverse_rotate_b(b);
	return (0);
}
