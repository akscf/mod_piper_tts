/**
 * (C)2023 aks
 * https://github.com/akscf/
 **/
#ifndef MOD_PIPER_TTS_H
#define MOD_PIPER_TTS_H

#include <switch.h>
#include <switch_stun.h>
#include <stdint.h>
#include <string.h>

#ifndef true
#define true SWITCH_TRUE
#endif
#ifndef false
#define false SWITCH_FALSE
#endif

#define VERSION                 "1.0"
#define PIPER_FILE_ENCODING     "wav"

typedef struct {
    switch_mutex_t          *mutex;
    switch_hash_t           *models;
    const char              *tmp_path;
    const char              *cache_path;
    const char              *piper_bin;
    const char              *piper_opts;
    uint8_t                 fl_cache_enabled;
    uint8_t                 fl_voice_as_language;
} globals_t;

typedef struct {
    char                    *lang;
    char                    *model;
} piper_model_info_t;

typedef struct {
    piper_model_info_t      *model_info;
    switch_memory_pool_t    *pool;
    switch_file_handle_t    *fhnd;
    char                    *language;
    char                    *voice;
    char                    *dst_fname;
    uint32_t                samplerate;
    uint32_t                channels;
} tts_ctx_t;

piper_model_info_t *piper_lookup_model(const char *lang);


#endif
