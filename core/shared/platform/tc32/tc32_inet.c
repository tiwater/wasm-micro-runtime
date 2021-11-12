#include <platform_api_vmcore.h>
#include <platform_api_extension.h>

uint32_t
htonl(uint32_t hostlong)
{
  return hostlong;
}

uint16_t
htons(uint16_t hostshort)
{
  return hostshort;
}

uint32_t
ntohl(uint32_t netlong)
{
  return netlong;
}

uint16_t
ntohs(uint16_t netshort)
{
  return netshort;
}
