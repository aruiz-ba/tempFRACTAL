/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iswhitespace.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-ba <aruiz-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 13:10:38 by aruiz-ba          #+#    #+#             */
/*   Updated: 2019/01/08 13:22:11 by aruiz-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iswhitespace(char c)
{
	if (c == ' ' || c == '\v' || c == '\t' ||
		c == '\f' || c == '\n' || c == '\r')
		return (1);
	return (0);
}
