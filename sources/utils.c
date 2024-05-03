/**
 * (C)2023 aks
 * https://github.com/akscf/
 **/
#include "mod_piper_tts.h"

extern globals_t globals;

piper_model_info_t *piper_lookup_model(const char *lang) {
    piper_model_info_t *model = NULL;

    if(!lang) {
        return NULL;
    }

    switch_mutex_lock(globals.mutex);
    model = switch_core_hash_find(globals.models, lang);
    switch_mutex_unlock(globals.mutex);

    return model;
}


