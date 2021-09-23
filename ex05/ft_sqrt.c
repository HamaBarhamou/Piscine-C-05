/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bissaka- <bissaka-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 23:14:32 by bissaka-          #+#    #+#             */
/*   Updated: 2021/09/23 23:15:02 by bissaka-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (i > 0)
	{
		while (i <= nb / i)
		{
			if (i * i == nb)
				return (i);
			else if (i > 46340)
				return (0);
			i++;
		}
	}
	return (0);
}

// #include <stdio.h>
// int main(void)
// {
//     int r;

//     r = ft_sqrt(25);
//     printf("%d", r);
// }
