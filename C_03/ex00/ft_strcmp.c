/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:00:15 by dpenas-u          #+#    #+#             */
/*   Updated: 2021/08/12 11:54:56 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_len(char *s);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	n_max;
	int	l_s1;
	int	l_s2;

	l_s1 = ft_len(s1);
	l_s2 = ft_len(s2);
	i = 0;
	if (l_s1 > l_s2)
		n_max = l_s1;
	else
		n_max = l_s2;
	while (i < n_max)
	{
		if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int	ft_len(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
