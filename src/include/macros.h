#ifndef __MACROS_H__
#define __MACROS_H__

inline static int disable_interrupts() {
  __asm__ __volatile__("cli");
  return 0;
}

inline static int enable_interrupts() {
  __asm__ __volatile__("sti");
  return 0;
}

#endif // !__MACROS_H__