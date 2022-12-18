/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleite-s < rleite-s@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 08:01:51 by rleite-s          #+#    #+#             */
/*   Updated: 2022/12/18 08:38:32 by rleite-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_error(void)
{
	ft_putstr_fd ("Error\n", 2);
	return (1);
}

int	ft_free_error(t_stack *a, t_stack *b)
{
	free (a->numbers);
	free (b->numbers);
	return (ft_error());
}
