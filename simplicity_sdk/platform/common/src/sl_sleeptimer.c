
#include "sl_sleeptimer.h"
#include <zephyr/drivers/timer/system_timer.h>

uint32_t sl_sleeptimer_get_timer_frequency(void){
    return CONFIG_SYS_CLOCK_TICKS_PER_SEC;
}

uint32_t sl_sleeptimer_get_tick_count(void){
    return k_cycle_get_32();
}