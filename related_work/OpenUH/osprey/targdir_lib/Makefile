
SUBDIRS = libopen64rt libacml_mv include libopenmp libhugetlbfs libmv libopenmp-pcl libfortran libu libinstr2

default: ACTION = default

clean: ACTION = clean

clobber: ACTION = clobber

default clean clobber: $(SUBDIRS)

# If building libacml_mv, build it before libmv.
ifneq (,$(findstring libacml_mv,$(SUBDIRS)))
libmv : libacml_mv
endif

# If building libopen64rt, build it before all other libraries.
ifneq (,$(findstring libopen64rt,$(SUBDIRS)))
$(filter-out libopen64rt,$(SUBDIRS)) : libopen64rt
endif

$(SUBDIRS):
	@echo "MAKE   $(ACTION) in $(PWD)/$@"; \
	$(MAKE) $(if $V,,--no-print-directory) -C $@ $(ACTION)

.PHONY: default clean clobber libopen64rt libacml_mv include libopenmp libhugetlbfs libmv libopenmp-pcl libfortran libu libinstr2

