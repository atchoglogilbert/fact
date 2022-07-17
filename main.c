/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katchogl <katchogl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 19:38:41 by katchogl          #+#    #+#             */
/*   Updated: 2022/07/17 19:38:41 by katchogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		fact(int n);

int	main(void)
{
	int		n;
	int		factorial;

	n = 5;
	factorial = fact (n);
	printf ("factorial of %d is %d", n, factorial);
	return (0);
}

int	fact(int n)
{
	if (n > 1)
	{
		return (n * fact (n - 1));
	}
	else
	{
		return (1);
	}
	return (0);
}
// end