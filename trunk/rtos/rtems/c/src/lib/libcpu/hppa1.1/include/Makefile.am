##
## $Id: Makefile.am,v 1.2 2001-09-27 12:01:20 chris Exp $
##

AUTOMAKE_OPTIONS = foreign 1.4

H_FILES = runway.h semaphore.h

# NOTE: Unlike other CPUS, we install into a subdirectory to avoid
#       file name conflicts

$(PROJECT_INCLUDE)/hppa1.1:
	$(mkinstalldirs) $@

$(PROJECT_INCLUDE)/hppa1.1/%.h: %.h
	$(INSTALL_DATA) $< $@

PREINSTALL_FILES += $(PROJECT_INCLUDE)/hppa1.1 \
    $(H_FILES:%.h=$(PROJECT_INCLUDE)/hppa1.1/%.h)

all-local: $(TMPINSTALL_FILES)

EXTRA_DIST = runway.h semaphore.h

include $(top_srcdir)/../../../../../automake/local.am
