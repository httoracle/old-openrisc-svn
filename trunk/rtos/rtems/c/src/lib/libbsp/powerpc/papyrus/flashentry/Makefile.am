##
## $Id: Makefile.am,v 1.2 2001-09-27 12:00:41 chris Exp $
##

AUTOMAKE_OPTIONS = foreign 1.4

PGM = $(ARCH)/flashentry.rel

S_FILES = flashentry.S
S_O_FILES = $(S_FILES:%.S=$(ARCH)/%.o)

OBJS = $(S_O_FILES)

include $(RTEMS_ROOT)/make/custom/@RTEMS_BSP@.cfg
include $(top_srcdir)/../../../../../../automake/lib.am

#
# (OPTIONAL) Add local stuff here using +=
#

$(PGM): $(OBJS)
	$(make-rel)

# the .rel file built here will be put into libbsp.a by ../wrapup/Makefile

all-local: $(ARCH) $(OBJS) $(PGM)

.PRECIOUS: $(PGM)

EXTRA_DIST = flashentry.S

include $(top_srcdir)/../../../../../../automake/local.am
