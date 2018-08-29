/*
 * Copyright © 2001-2011 Stéphane Raimbault <stephane.raimbault@gmail.com>
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

#ifndef _MODBUS_RTUTCP_PRIVATE_H_
#define _MODBUS_RTUTCP_PRIVATE_H_

#include "modbus-rtu-private.h"
#include "modbus-tcp-private.h"

#define _MODBUS_RTUTCP_HEADER_LENGTH      _MODBUS_RTU_HEADER_LENGTH

#define _MODBUS_RTUTCP_CHECKSUM_LENGTH     _MODBUS_RTU_CHECKSUM_LENGTH

typedef struct _modbus_rtutcp {
    modbus_tcp_t base;
} modbus_rtutcp_t;

#define _MODBUS_RTUTCP_PI_NODE_LENGTH    _MODBUS_TCP_PI_NODE_LENGTH
#define _MODBUS_RTUTCP_PI_SERVICE_LENGTH   _MODBUS_TCP_PI_SERVICE_LENGTH

typedef struct _modbus_rtutcp_pi {
    modbus_tcp_pi_t base;
} modbus_rtutcp_pi_t;

#endif /* _MODBUS_RTUTCP_PRIVATE_H_ */