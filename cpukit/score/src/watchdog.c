/**
 *  @file
 *
 *  @brief Watchdog Handler Initialization
 *  @ingroup ScoreWatchdog
 */

/*
 *  Watchdog Handler
 *
 *
 *  COPYRIGHT (c) 1989-1999.
 *  On-Line Applications Research Corporation (OAR).
 *
 *  The license and distribution terms for this file may be
 *  found in the file LICENSE in this distribution or at
 *  http://www.rtems.org/license/LICENSE.
 */

#if HAVE_CONFIG_H
#include "config.h"
#endif

#include <rtems/score/watchdogimpl.h>

Watchdog_Header _Watchdog_Ticks_header;

Watchdog_Header _Watchdog_Seconds_header;

void _Watchdog_Handler_initialization( void )
{
  _Watchdog_Ticks_since_boot = 0;

  _Watchdog_Header_initialize( &_Watchdog_Ticks_header );
  _Watchdog_Header_initialize( &_Watchdog_Seconds_header );
}
