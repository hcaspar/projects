/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   more.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcaspar <hcaspar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 17:18:36 by hcaspar           #+#    #+#             */
/*   Updated: 2015/12/11 17:24:53 by hcaspar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MORE_H
# define MORE_H

# include "libft.h"
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>

void	ft_print_error(void);
void	ft_print_tab(int ret, char tab[4 * ((ret + 1) / 21)][5]);

#endif