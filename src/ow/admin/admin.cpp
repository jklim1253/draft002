#include "ow/admin/admin.hpp"
#include "ow/codes.hpp"

#include <iostream>
#include <string>

namespace ow
{

class admin::implement
{
  admin* m_parent;
  int m_port;
public:
  implement(admin* parent, int port)
    : m_parent(parent)
    , m_port(port)
  {
  }
  ~implement()
  {
  }
  void run()
  {
    std::string input;
    int ret = ec::no_error;
    do {
      std::cout << "admin:> ";
      std::getline(std::cin, input);

      if (input.empty()) continue;

      if (input == "exit" || input == "quit")
      {
        ret = ec::request_quit;
      }
      else
      {
        std::cout << "not supported command" << std::endl;
      }

    } while (ret == ec::no_error);
  }
};

admin::admin(int port)
  : impl(new implement(this, port))
{
}
admin::~admin()
{
  if (impl)
  {
    delete impl;
    impl = nullptr;
  }
}
void admin::run()
{
  impl->run();
}

} // namespace ow
