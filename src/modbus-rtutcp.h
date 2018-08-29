/*
 * Copyright © 2001-2010 Stéphane Raimbault <stephane.raimbault@gmail.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

#ifndef _MODBUS_RTUTCP_H_
#define _MODBUS_RTUTCP_H_

#include "modbus.h"

MODBUS_BEGIN_DECLS

#if defined(_WIN32) && !defined(__CYGWIN__)
/* Win32 with MinGW, supplement to <errno.h> */
#include <winsock2.h>
#define ECONNRESET   WSAECONNRESET
#define ECONNREFUSED WSAECONNREFUSED
#define ETIMEDOUT    WSAETIMEDOUT
#define ENOPROTOOPT  WSAENOPROTOOPT
#endif

#define MODBUS_RTUTCP_DEFAULT_PORT   502
#define MODBUS_RTUTCP_SLAVE         0xFF

/* Modbus_Application_Protocol_V1_1b.pdf Chapter 4 Section 1 Page 5
 * RS232 / RS485 ADU = 253 bytes + slave (1 byte) + CRC (2 bytes) = 256 bytes
 */
#define MODBUS_RTUTCP_MAX_ADU_LENGTH  256

modbus_t* modbus_new_rtutcp(const char *ip_address, int port);
int modbus_rtutcp_listen(modbus_t *ctx, int nb_connection);
int modbus_rtutcp_accept(modbus_t *ctx, int *socket);

modbus_t* modbus_new_rtutcp_pi(const char *node, const char *service);
int modbus_rtutcp_pi_listen(modbus_t *ctx, int nb_connection);
int modbus_rtutcp_pi_accept(modbus_t *ctx, int *socket);

MODBUS_END_DECLS

#endif /* _MODBUS_RTUTCP_H_ */
