/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/26 20:01:00 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/03/26 20:01:24 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* msg = "This is the string: not copied";

int main( void )
{
	char buffer[80];

	memset( buffer, '\0', 80 );
	memccpy( buffer, msg, ':', 80 );

	printf( "%s\n", buffer );

	return EXIT_SUCCESS;
}
