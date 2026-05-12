#ifndef VISUALINUX_IO_URING_PAGE_SIZE_H
#define VISUALINUX_IO_URING_PAGE_SIZE_H

#include <stddef.h>
#include <unistd.h>

static inline size_t visualinux_page_size(void)
{
    long page_size = sysconf(_SC_PAGESIZE);

    return page_size > 0 ? (size_t) page_size : 4096;
}

#ifndef PAGE_SIZE
#define PAGE_SIZE visualinux_page_size()
#endif

#endif
