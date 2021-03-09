#include <iostream>
#include <string>
#include <memory>

#include "ow/ow.hpp"

int main(int argc, char* argv[])
{
  std::cout << ow::libname() << " version " << ow::version() << std::endl;

  // default parameters
  int port = 80;
  std::string web_root_path = "./web";
  int c_port = 8991;

  // TODO: parse main argument

  try
  {
    std::unique_ptr<ow::server>
    web = std::make_unique<ow::server>(port, web_root_path.c_str(), c_port);
    web->run();

    std::unique_ptr<ow::admin>
    controller = std::make_unique<ow::admin>(c_port);
    controller->run();
  }
  catch (...)
  {
    std::cerr << "something wrong..." << std::endl;
  }

  return 0;
}