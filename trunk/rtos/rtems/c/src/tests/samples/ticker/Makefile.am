##
##  $Id: Makefile.am,v 1.2 2001-09-27 12:02:29 chris Exp $
##

AUTOMAKE_OPTIONS = foreign 1.4

SAMPLE = ticker
PGM = ${ARCH}/$(SAMPLE).exe

MANAGERS = io

C_FILES = init.c tasks.c
C_O_FILES = $(C_FILES:%.c=${ARCH}/%.o)

H_FILES = system.h
noinst_HEADERS = $(H_FILES)

DOCTYPES = doc scn
DOCS = $(DOCTYPES:%=$(SAMPLE).%)

SRCS = $(DOCS) $(C_FILES) $(H_FILES)
OBJS = $(C_O_FILES)

PRINT_SRCS = $(DOCS)

include $(RTEMS_ROOT)/make/custom/@RTEMS_BSP@.cfg
include $(RTEMS_ROOT)/make/leaf.cfg
include $(top_srcdir)/sample.am

#
# (OPTIONAL) Add local stuff here using +=
#

all-local: ${ARCH} $(TMPINSTALL_FILES)

${PGM}: $(OBJS) $(LINK_FILES)
	$(make-exe)

EXTRA_DIST = $(C_FILES) $(DOCS)

include $(top_srcdir)/../../../../automake/local.am
