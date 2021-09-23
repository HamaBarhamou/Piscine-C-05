/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bissaka- <bissaka-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 23:10:57 by bissaka-          #+#    #+#             */
/*   Updated: 2021/09/23 23:11:16 by bissaka-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	result *= ft_recursive_power(result, power - 1);
	return (result);
}

// #include<stdio.h>
// int main(void)
// {
//     int result;

//     result = ft_recursive_power(2 , 4);
//     printf("%d", result);
// }
