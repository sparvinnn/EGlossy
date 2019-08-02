CONTIKI_PROJECT = lwb-test
all: $(CONTIKI_PROJECT)

CONTIKI_WITH_RIME = 1


LDFLAGS += -Wl,--section-start -Wl,.glossy=0x4000 -Wl,--section-start -Wl,.text=0x4400

CFLAGS += -DPROJECT_CONF_H=\"project-conf.h\"

APPS += lwb  serial-shell powertrace collect-view



CONTIKI = ../..
include $(CONTIKI)/Makefile.include


