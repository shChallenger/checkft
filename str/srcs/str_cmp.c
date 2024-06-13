/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_cmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 02:37:56 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/03 23:04:25 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_cmp(const char *str, const char *str2)
{
	while (*str == *str2 && *str)
	{
		str += 1;
		str2 += 1;
	}
	return ((unsigned char)*str - (unsigned char)*str2);
}
