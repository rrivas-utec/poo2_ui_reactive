#include <memory>
#include "my_app.h"

using namespace std;

int main() {
    my_app app(600, 400, "SFML");
    app.run();
    return 0;
}
