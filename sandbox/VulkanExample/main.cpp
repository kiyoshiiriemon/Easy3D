#include "application.h"

#include <stdexcept>
#include <iostream>

#include <easy3d/util/logging.h>

using namespace easy3d;

int main() {
    logging::initialize();

    Application app;

    try {
        app.run();
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
