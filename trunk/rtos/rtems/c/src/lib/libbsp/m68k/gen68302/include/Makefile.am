##
## $Id: Makefile.am,v 1.2 2001-09-27 12:00:04 chris Exp $
##

AUTOMAKE_OPTIONS = foreign 1.4

H_FILES = bsp.h coverhd.h

$(PROJECT_INCLUDE):
	$(mkinstalldirs) $@

$(PROJECT_INCLUDE)/bsp.h: bsp.h
	$(INSTALL_DATA) $< $@

$(PROJECT_INCLUDE)/coverhd.h: coverhd.h
	$(INSTALL_DATA) $< $@

TMPINSTALL_FILES += $(PROJECT_INCLUDE) $(PROJECT_INCLUDE)/bsp.h \
    $(PROJECT_INCLUDE)/coverhd.h

all-local: $(TMPINSTALL_FILES)

EXTRA_DIST = bsp.h coverhd.h

include $(top_srcdir)/../../../../../../automake/local.am
