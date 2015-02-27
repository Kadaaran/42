/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/26 11:32:44 by kpedro            #+#    #+#             */
/*   Updated: 2014/12/05 22:47:46 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static    int    result(char c, int nb)
{
    if (c == '-')
        return (nb * -1);
    if (c == '+')
        return (nb);
    else
        return (nb);
}

static    int    convert(const char *str, int nb, int i)
{
    while (str[i] >= '0' && str[i] <= '9')
    {
        nb = (nb * 10) + (str[i] - '0');
        i++;
    }
    return (nb);
}

static    int    conditions1(const char *str, int i)
{
    if ((str[i] >= '0' && str[i] <= '9') || str[i] == ' ' || str[i] == '-' ||
        str[i] == '+' || str[i] == '\t' || str[i] == '\r' || str[i] == '\f'
        || str[i] == '\n' || str[i] == '\v')
        return (1);
    else
        return (0);
}

static    int    condition2(const char *str, int i)
{
    if ((str[i - 1] == '-' || str[i - 1] == '+') || (str[i] >= '0' &&
        str[i] <= '9'))
        return (1);
    else
        return (0);
}

int            ft_atoi(const char *str)
{
    int        i;
    int        nb;

    i = 0;
    nb = 0;
    while (str[i])
    {
        if (conditions1(str, i))
        {
            if (condition2(str, i))
            {
                if (str[i] >= '0' && str[i] <= '9')
                {
                    nb = convert(str, nb, i);
                    return (result(str[i - 1], nb));
                }
                else
                    return (0);
            }
            i++;
        }
        else
            return (0);
    }
    return (0);
}
