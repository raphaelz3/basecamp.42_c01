/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgoncalv <rgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 01:06:09 by rgoncalv          #+#    #+#             */
/*   Updated: 2021/04/13 13:52:51 by rgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int count;
	int *pointer;

	pointer = tab + size - 1;
	count = 0;
	while (count < size / 2)
	{
		ft_swap(tab, pointer);
		tab++;
		pointer--;
		count++;
	}
}
