##
## $Id: Makefile.am,v 1.2 2001-09-27 12:00:09 chris Exp $
##

AUTOMAKE_OPTIONS = foreign 1.4
ACLOCAL_AMFLAGS = -I $(RTEMS_TOPdir)/aclocal

# wrapup is the one that actually builds and installs the library
#  from the individual .rel files built in other directories
SUBDIRS = . include start startup clock console timer wrapup

include $(top_srcdir)/../../bsp.am

EXTRA_DIST = bsp_specs times

include $(top_srcdir)/../../../../../../automake/subdirs.am
include $(top_srcdir)/../../../../../../automake/local.am
