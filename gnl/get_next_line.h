/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elilliu <elilliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:27:27 by elilliu           #+#    #+#             */
/*   Updated: 2023/12/28 04:48:54 by elilliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

char	*get_next_line(int fd);
int		ft_strchr_gnl(char *s);
int		ft_strlen_gnl(char *s);
char	*ft_strjoin_gnl(char *s1, char *s2);
char	*add_to_stash(int fd, char *stash, int *count);
char	*stash_to_line(char *stash);
char	*new_stash(char *stash);
void	*ft_calloc_gnl(size_t nmemb, size_t size);

#endif
