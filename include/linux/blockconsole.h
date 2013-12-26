#ifndef LINUX_BLOCKCONSOLE_H
#define LINUX_BLOCKCONSOLE_H

#ifdef CONFIG_BLOCKCONSOLE
void bcon_add(const char *name);
#else
static inline void bcon_add(const char *name) {}
#endif

#endif
