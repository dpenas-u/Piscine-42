/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_numbers_rows_2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 18:09:33 by dpenas-u          #+#    #+#             */
/*   Updated: 2021/08/17 13:12:38 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	s_numbers_rows_2(char	n[6][6])
{
	int	i;
	int	c;

	c = 1;
	i = 1;
	while (i < 5)
	{
		if (n[i][0] == 49)
			n[i][0 + 1] = 52;
		if (n[i][5] == 49)
			n[i][5 - 1] = 52;
		if (n[i][0] == 50 && n[i][5] == 51)
			n[i][2] = 52;
		if (n[i][0] == 51 && n[i][5] == 50)
			n[i][3] = 52;
		if (n[i][0] == 49 && n[i][5] == 50)
		{
			n[i][1] = 52;
			n[i][4] = 51;
		}
		if (n[i][0] == 50 && n[i][5] == 49)
		{
			n[i][1] = 51;
			n[i][4] = 52;
		}
		i++;
	}
}
