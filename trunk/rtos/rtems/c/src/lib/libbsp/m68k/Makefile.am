##
## $Id: Makefile.am,v 1.2 2001-09-27 12:00:00 chris Exp $
##

AUTOMAKE_OPTIONS = foreign 1.4
ACLOCAL_AMFLAGS = -I $(RTEMS_TOPdir)/aclocal

## Descend into the $(RTEMS_BSP_FAMILY) directory
SUBDIRS = shared $(RTEMS_BSP_FAMILY)

include $(top_srcdir)/../../../../../automake/subdirs.am
include $(top_srcdir)/../../../../../automake/local.am
