#ifndef GAME_H
#define GAME_H

#include <stdio.h>

#include "level.h"
#include "mode.h"

/*---------------------------------------------------------------------------*/

#define AUD_MENU   1
#define AUD_START  2
#define AUD_READY  3
#define AUD_SET    4
#define AUD_GO     5
#define AUD_BALL   6
#define AUD_BUMPS  7
#define AUD_BUMPM  8
#define AUD_BUMPL  9
#define AUD_COIN   10
#define AUD_TICK   11
#define AUD_TOCK   12
#define AUD_SWITCH 13
#define AUD_JUMP   14
#define AUD_GOAL   15
#define AUD_SCORE  16
#define AUD_FALL   17
#define AUD_TIME   18
#define AUD_OVER   19
#define AUD_GROW   20
#define AUD_SHRINK 21
#define AUD_COUNT  22

/*---------------------------------------------------------------------------*/

#define MAX_DT      0.01666666         /* Maximum physics update cycle       */
#define MAX_DN      16                 /* Maximum subdivisions of dt         */
#define RESPONSE    0.05f              /* Input smoothing time               */

#define ANGLE_BOUND 20.f               /* Angle limit of floor tilting       */
#define NO_AA       0                  /* Disable Angle Acceleration         */

/*---------------------------------------------------------------------------*/

int   game_init(const struct level *, int, int);
void  game_free(void);

int   curr_clock(void);
int   curr_coins(void);
int   curr_goal(void);

void  game_draw(int, float);
int   game_step(const float[3], float, int *);

void  game_set_pos(int, int);
void  game_set_x  (int);
void  game_set_z  (int);
void  game_set_rot(float);
void  game_set_fly(float);

void  game_look(float, float);

void  game_kill_fade(void);
void  game_step_fade(float);
void  game_fade(float);

int   put_game_state(FILE *);
int   get_game_state(FILE *);

/*---------------------------------------------------------------------------*/

#endif
