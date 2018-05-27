#include "Display.h"

class Game{
public:
        Game();
        void run();
        void loop();
private:
        Display* display;
        void processEvents();
        bool running;
};
