#ifndef __OW_SERVER_HPP__
#define __OW_SERVER_HPP__

#ifdef OW_SERVER_EXPORTS
# define OW_SERVER_API __declspec(dllexport)
#else // OW_SERVER_EXPORTS
# define OW_SERVER_API __declspec(dllimport)
#endif // OW_SERVER_EXPORTS

namespace ow
{

class OW_SERVER_API server
{
public:
  server(int port, const char* path, int c_port);
  ~server();
  void run();

private:
  class implement;
  implement* impl;
};

} // namespace ow

#endif // __OW_SERVER_HPP__