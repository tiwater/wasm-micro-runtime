#include <platform_api_vmcore.h>
#include <platform_api_extension.h>

int
bh_platform_init(void)
{
    return 0;
}

void
bh_platform_destroy(void)
{
    // Do nothing for now.
}

void *
os_malloc(unsigned size)
{
    return NULL;
}

void *
os_realloc(void *ptr, unsigned size)
{
    return NULL;
}

void
os_free(void *ptr)
{
    // Do nothing.
}

#if BH_DEBUG != 0
void
abort()
{
  // Do nothing.
}
#endif
