#ifndef __OW_CODES_HPP__
#define __OW_CODES_HPP__

namespace ow
{
namespace ec
{

enum error_code : int
{
  no_error = 0,
  not_implemented_yet,
  argument_is_invalid,

  request_quit,
};

} // namespace ec
} // namespace ow

#endif // __OW_CODES_HPP__