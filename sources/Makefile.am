
include $(top_srcdir)/build/modmake.rulesam
MODNAME=mod_piper_tts

mod_LTLIBRARIES = mod_piper_tts.la
mod_piper_tts_la_SOURCES  = mod_piper_tts.c utils.c
mod_piper_tts_la_CFLAGS   = $(AM_CFLAGS) -I. -Wno-unused-variable -Wno-unused-function -Wno-unused-but-set-variable -Wno-unused-label -Wno-declaration-after-statement
mod_piper_tts_la_LIBADD   = $(switch_builddir)/libfreeswitch.la
mod_piper_tts_la_LDFLAGS  = -avoid-version -module -no-undefined -shared

$(am_mod_piper_tts_la_OBJECTS): mod_piper_tts.h
