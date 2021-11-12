#include <platform_api_vmcore.h>
#include <platform_api_extension.h>

int
atoi (const char * str)
{
    bool is_negative = false;
    int total = 0;
    const char *p = str;
    char temp = '0';

    if (NULL == p) {
        os_printf("invlaid atoi input\n");
        return 0;
    }

    if (*p == '-') {
        is_negative = true;
        p++;
    }

    while ((temp = *p++) != '\0') {
        if (temp > '9' || temp < '0') {
            continue;
        }

        total = total * 10 + (int)(temp - '0');
    }

    if (is_negative)
        total = 0 - total;

    return total;
}

// TODO: we need to fix this!!
int
strncmp(const char * str1, const char * str2, size_t n)
{
  return 0;
}

int
isalnum(int c)
{
  return 0;
}

int
toupper(int c)
{
  return c;
}

int
tolower(int c)
{
  return c;
}

int
isxdigit(int c)
{
  return 0;
}

int
isprint(int c)
{
  return 0;
}

int
isgraph(int c)
{
  return 0;
}

int
isspace(int c)
{
  return 0;
}

int
isalpha(int c)
{
  return 0;
}

int
isupper(int c)
{
  return 0;
}

size_t
strcspn(const char * str1, const char * str2)
{
  return 0;
}

size_t
strspn( const char * str1, const char * str2)
{
  return 0;
}

int
strncasecmp(const char *s1, const char *s2, size_t n)
{
  return 0;
}

unsigned long int
strtoul(const char* str, char** endptr, int base)
{
  return 0;
}

long int
strtol(const char* str, char** endptr, int base)
{
  return 0;
}
