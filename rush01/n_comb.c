/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   n_comb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 18:16:26 by dpenas-u          #+#    #+#             */
/*   Updated: 2021/08/17 13:21:07 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	n_comb(int i, int d)
{
	if ((i == 1 + 48 && d == 4 + 48) || (i == 4 + 48 && d == 1 + 48))
		return (2);
	else if ((i == 1 + 48 && d == 2 + 48) || (i == 2 + 48 && d == 1 + 48))
		return (3);
	else if ((i == 1 + 48 && d == 3 + 48) || (i == 3 + 48 && d == 1 + 48) || (i == 2 + 48 && d == 3 + 48) || (i == 3 + 48 && d == 2 + 48))
		return (4);
	else
		return (7);
}