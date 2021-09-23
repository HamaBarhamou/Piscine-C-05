/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bissaka- <bissaka-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 23:09:48 by bissaka-          #+#    #+#             */
/*   Updated: 2021/09/23 23:10:08 by bissaka-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power == 0)
		result = 1;
	if (power < 0)
		result = 0;
	while (power > 1)
	{
		result = result * nb;
		power--;
	}
	return (result);
}

// #include <stdio.h>
// int main(void)
// {
//     int res;

//     res=ft_iterative_power(2, 4);
//     printf("%d", res);
// }