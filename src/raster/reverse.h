/*
   Copyright (C) Seiko Epson Corporation 2009.
 
   This program is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with this program; if not, write to the Free  Software Foundation, Inc., 
   51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
*/
#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "raster.h"

#ifndef __EPS_REVERSE_H__
#define __EPS_REVERSE_H__

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */

typedef void * REVERSE;

typedef struct EpsReverseOpt {
	EpsRasterPipe * pipe;
	int bytes_per_pixel;
	int bytes_per_raster;
	int top_margin;
	int num_raster;
} EpsReverseOpt;

int eps_init_reverse (RASTERPIPE *, PIPEOPT);
int eps_process_reverse (RASTERPIPE, char *, int, int, int *);
int eps_free_reverse (RASTERPIPE);


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __EPS_REVERSE_H__ */
