#include <iostream>
#include <boost/filesystem.hpp>

int trash()
{
  boost::filesystem::path p( "hoge" );
  std::cout << "Hello, World!!" << p.string() << std::endl;

  return 0;
}
