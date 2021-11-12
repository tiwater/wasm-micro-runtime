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

/* Patch for string related functions */
extern int
u_sprintf(char *s, const char *fmt, ...);

int
vsnprintf(char *str, size_t size, const char *format, va_list ap)
{
    return u_sprintf(str, size, format, ap);
}

int
snprintf(char *str, size_t size, const char *format, ...)
{
    int n = 0;
    va_list args;
    va_start(args, format);
    n = vsnprintf(str, size, format, args);
    va_end(args);
    return n;
}

int
puts(const char *str)
{
    unsigned int len = 0;
    while (*str++) {
        putchar(*str);
        len++;
    }
    return len;
}

int
vprintf(const char *format, va_list arg)
{
    return puts(format);
}
