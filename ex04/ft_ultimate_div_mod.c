/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgoncalv <rgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 18:25:40 by rgoncalv          #+#    #+#             */
/*   Updated: 2021/04/13 12:54:32 by rgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int recea;
	int receb;

	receb = *a % *b;
	recea = *a / *b;
	*a = recea;
	*b = receb;
}
