#ifndef __PLAYER_H__
#define __PLAYER_H__

#include <rtthread.h>

/* music tag information structure */
struct tag_info
{
	char title [40];        /* music title              */
	char artist[40];        /* music artist             */

	rt_uint32_t duration;   /* music total duration (second)   */
	rt_uint32_t position;   /* music current position (second) */

	rt_uint32_t bit_rate;   /* bit rate                 */
	rt_uint32_t sampling;   /* sampling                 */
	rt_uint32_t data_start; /* start position of data   */
};

enum PLAYER_CMD
{
    PLAYER_CMD_START,
    PLAYER_CMD_STOP
};

enum PLAYER_MODE
{
    PLAYER_STOP,
	PLAYER_PLAY_FILE,
	PLAYER_PLAY_RADIO,
};

enum PLAYER_STEP
{
	PLAYER_STEP_STOP,
	PLAYER_STEP_PREV,
	PLAYER_STEP_NEXT,
};

void player_ui_init(void);

void player_notify_play(void);
void player_notify_stop(void);

void player_set_position(rt_uint32_t position);

#endif
