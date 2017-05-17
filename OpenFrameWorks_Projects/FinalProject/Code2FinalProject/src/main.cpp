#include "ofMain.h"
#include "ofAppGlutWindow.h"
#include "Game.hpp"

int main(){
    ofAppGlutWindow window;
    ofSetupOpenGL(&window, 1024, 768, OF_WINDOW);
    ofRunApp(new Game());
}
