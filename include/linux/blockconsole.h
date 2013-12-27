#ifndef LINUX_BLOCKCONSOLE_H
#define LINUX_BLOCKCONSOLE_H

#ifdef CONFIG_BLOCKCONSOLE
void bcon_add(dev_t devt);
#else
static inline void bcon_add(dev_t devt) {}
#endif

#endif
