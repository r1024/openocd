/***************************************************************************
 *                                                                         *
 * Copyright (C) ST-Ericsson SA 2011                                       *
 * Author: Michel Jaouen <michel.jaouen@stericsson.com> for ST-Ericsson.   *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>. *
 ***************************************************************************/

#ifndef OPENOCD_TARGET_SMP_H
#define OPENOCD_TARGET_SMP_H

#include <helper/list.h>
#include "server/server.h"

#define foreach_smp_target(pos, head) \
	list_for_each_entry(pos, head, lh)

#define foreach_smp_target_direction(forward, pos, head) \
	list_for_each_entry_direction(forward, pos, head, lh)

extern const struct command_registration smp_command_handlers[];

/* DEPRECATED */
int gdb_read_smp_packet(struct connection *connection,
		char const *packet, int packet_size);
/* DEPRECATED */
int gdb_write_smp_packet(struct connection *connection,
		char const *packet, int packet_size);

#endif /* OPENOCD_TARGET_SMP_H */
