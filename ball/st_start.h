#ifndef ST_START_H
#define ST_START_H

#include "state.h"

extern struct state st_start;

int goto_start(int index, struct state *back_state);

#endif
