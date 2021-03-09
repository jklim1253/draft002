#include "ow/ow.hpp"

#define VERSION_MAJOR 1
#define VERSION_MINOR 0
#define VERSION_PATCH 0

namespace ow
{

const char* libname()
{
  return "open world";
}
int version()
{
  return 100;
}

} // namespace ow
