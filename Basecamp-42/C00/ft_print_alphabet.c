/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalves- <daalves-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 20:06:53 by daalves-          #+#    #+#             */
/*   Updated: 2021/04/06 20:16:43 by daalves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char c;

	c = 97; /* número na tabela ascii que representa a letra a minuscula.*/
	while(c <= 122)
	{
		write(1, &c, 1);
		c++;
	}
}

int		main(void) /* Função principal que vai chamar e printar no terminal o alfabeto.*/
{
	ft_print_alphabet();
	return(0);
}
