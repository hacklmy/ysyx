#include <am.h>
#include <sys/time.h>

static uint64_t boot_time = 0;

void __am_timer_init() {
  struct timeval tz;
  gettimeofday(&tz,NULL);
  boot_time = tz.tv_usec;
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  struct timeval tz;
  gettimeofday(&tz,NULL);
  uptime->us = tz.tv_usec - boot_time;
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
