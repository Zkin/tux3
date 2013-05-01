#ifndef TUX3_KCOMPAT_H
#define TUX3_KCOMPAT_H

/*
 * Temporary support for older kernel
 */

#include <linux/version.h>

#if LINUX_VERSION_CODE < KERNEL_VERSION(3,8,0)
static inline void
balance_dirty_pages_ratelimited(struct address_space *mapping)
{
	/* Second argument is unused on older kernel too */
	balance_dirty_pages_ratelimited(mapping, 0);
}
#endif

#endif /* !TUX3_KCOMPAT_H */
