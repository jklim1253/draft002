#ifndef __OW_ADMIN_HPP__
#define __OW_ADMIN_HPP__

#ifdef OW_ADMIN_EXPORTS
# define OW_ADMIN_API __declspec(dllexport)
#else // OW_ADMIN_EXPORTS
# define OW_ADMIN_API __declspec(dllimport)
#endif // OW_ADMIN_EXPORTS

namespace ow
{

class OW_ADMIN_API admin
{
public:
  admin(int port);
  ~admin();
  void run();

private:
  class implement;
  implement* impl;
};

} // namespace ow

#endif // __OW_ADMIN_HPP__