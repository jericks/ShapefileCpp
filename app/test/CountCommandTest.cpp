#include <sstream>
#include <iostream>
#include <filesystem>
#include "CLI11.hpp"
#include "Command.hpp"
#include "Commands.hpp"
#include "CountCommand.hpp"
#include "gtest/gtest.h"

TEST(ShapefileCliTests, count_test) {
  
  CLI::App app{"ShapefileCpp CLI"};  

  Commands commands;
  CountCommand countCommand{&app};
  commands.add(&countCommand);
  
  std::filesystem::path path {"../../../data/points.shp"};  

  int argc = 4;
  char const *argv[4] = {"shp-cli", "count", "-f", std::filesystem::absolute(path).c_str()};

  app.parse(argc, argv);

  std::istringstream instream;
  std::ostringstream outstream;

  countCommand.execute(instream, outstream);

  std::string result = outstream.str();
  ASSERT_EQ("10\n", result);
}