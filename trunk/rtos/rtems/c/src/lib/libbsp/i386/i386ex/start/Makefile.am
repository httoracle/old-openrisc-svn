##
## $Id: Makefile.am,v 1.2 2001-09-27 11:59:46 chris Exp $
##

AUTOMAKE_OPTIONS = foreign 1.4

PGMS = $(ARCH)/start.o

S_FILES = start.S
S_O_FILES = $(S_FILES:%.S=$(ARCH)/%.o)

H_FILES = 80386ex.h

OBJS = $(S_O_FILES)

include $(RTEMS_ROOT)/make/custom/@RTEMS_BSP@.cfg
include $(top_srcdir)/../../../../../../automake/lib.am

#
# (OPTIONAL) Add local stuff here using +=
#

if RTEMS_GAS_CODE16
AM_CPPFLAGS += -DNEW_GAS
endif

$(PROJECT_RELEASE)/lib/start$(LIB_VARIANT).o: $(ARCH)/start.o
	$(INSTALL_DATA) $< $@

TMPINSTALL_FILES += $(PROJECT_RELEASE)/lib/start$(LIB_VARIANT).o

all-local: $(ARCH) $(OBJS) $(TMPINSTALL_FILES)

EXTRA_DIST = 80386ex.h 80386ex.inc macros.inc start.S

include $(top_srcdir)/../../../../../../automake/local.am
