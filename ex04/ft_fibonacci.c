/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bissaka- <bissaka-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 23:12:04 by bissaka-          #+#    #+#             */
/*   Updated: 2021/09/23 23:12:40 by bissaka-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	f;

	f = 0;
	if (index <= -1)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	else if (index > 1)
		f = (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	return (f);
}

/*#include <stdio.h>
int main(void)
{
    int r;

    r = ft_fibonacci(6);
    printf("%d", r);
}*/