/*  system.h
 *
 *  This include file is used by all tests in the Time Suite.
 *
 *  COPYRIGHT (c) 1989-1999.
 *  On-Line Applications Research Corporation (OAR).
 *
 *  The license and distribution terms for this file may be
 *  found in the file LICENSE in this distribution or at
 *  http://www.OARcorp.com/rtems/license.html.
 *
 *  $Id: system.h,v 1.2 2001-09-27 12:02:43 chris Exp $
 */


#include <coverhd.h>
#include <tmacros.h>

/* functions */

rtems_task Init(
  rtems_task_argument argument
);

#include <timesys.h>

/* configuration information */
 
#define CONFIGURE_APPLICATION_NEEDS_CONSOLE_DRIVER
#define CONFIGURE_APPLICATION_NEEDS_TIMER_DRIVER

#define CONFIGURE_MAXIMUM_TASKS              102
#define CONFIGURE_MAXIMUM_TIMERS             100
#define CONFIGURE_MAXIMUM_SEMAPHORES         100
#define CONFIGURE_MAXIMUM_MESSAGE_QUEUES     100
#define CONFIGURE_MAXIMUM_PARTITIONS         100
#define CONFIGURE_MAXIMUM_REGIONS            100
#define CONFIGURE_MAXIMUM_PORTS              100
#define CONFIGURE_MAXIMUM_PERIODS            100

#define CONFIGURE_TICKS_PER_TIMESLICE        0
 
#define CONFIGURE_RTEMS_INIT_TASKS_TABLE

#include <confdefs.h>

/* end of include file */
