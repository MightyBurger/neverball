#ifndef PART_H
#define PART_H

#include "solid_draw.h"

/*---------------------------------------------------------------------------*/

#define IMG_PART_STAR     "png/part"

#define PART_MAX_COIN  256

#define PART_SIZE       0.1f

/*---------------------------------------------------------------------------*/

void part_reset(void);
void part_init(void);
void part_free(void);

void part_burst(const float *, const float *);
void part_step(const float *, float);

void part_draw_coin(const struct s_draw *draw, struct s_rend *rend, const float *M, float t);

void part_lerp_apply(float);

/*---------------------------------------------------------------------------*/

#endif
