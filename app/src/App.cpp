#include <iostream>
#include "CLI11.hpp"
#include "Commands.hpp"
#include "Command.hpp"
#include "BoundsCommand.hpp"
#include "CountCommand.hpp"
#include "ListCommand.hpp"
#include "RandomCommand.hpp"

int main(int argc, char *argv[]) {

    CLI::App app{"Shapefile CLI"};
    app.require_subcommand(1);

    Commands commands;
    BoundsCommand boundsCommand(&app);
    commands.add(&boundsCommand);
    CountCommand countCommand(&app);
    commands.add(&countCommand);
    ListCommand listCommand(&app, &commands);
    commands.add(&listCommand);
    RandomCommand randomCommand(&app);
    commands.add(&randomCommand);

    CLI11_PARSE(app, argc, argv);

    for(Command* cmd : commands.get()) {
      if (app.got_subcommand(cmd->getName())) {
        cmd->execute(std::cin, std::cout);
        break;
      }
    }

    return 0;

}