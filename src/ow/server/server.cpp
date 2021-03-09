#include "ow/server/server.hpp"
#include "ow/codes.hpp"

#include <string>
#include <boost/asio.hpp>

namespace ow
{

class server::implement
{
  server* m_parent;
  int m_port;
  std::string m_path;
  int m_control_port;
public:
  implement(server* _parent, int port, const char* path, int c_port)
    : m_parent(_parent)
    , m_port(port)
    , m_path(path)
    , m_control_port(c_port)
  {
  }
  ~implement()
  {
  }
  void run()
  {

  }
};

server::server(int port, const char* path, int c_port)
  : impl(new implement(this, port, path, c_port))
{
}
server::~server()
{
  if (impl)
  {
    delete impl;
    impl = nullptr;
  }
}
void server::run()
{
  impl->run();
}

} // namespace ow
