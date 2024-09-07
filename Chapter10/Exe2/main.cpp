#include "PPP/Window.h"
#include "PPP/Simple_window.h"                       // get access to our window library

using namespace Graph_lib;
int main(int /*argc*/, char * /*argv*/[])
{
    using namespace Graph_lib;                               // our graphics facilities are in Graph_lib

    Application app;                                                    // start a Graphics/GUI application

    Point tl {900,500};                                                  // to become top left corner of window

    Simple_window win {tl,600,400,"Canvas"};        // make a simple window

    Rectangle r {Point{200,200}, 100, 50};              // top left corner, width, height
    win.attach(r);
    win.set_label("Rectangle");
    win.wait_for_button();
    Text t {Point{220,215}, "Howdy!"};
    win.attach(t);
    win.set_label("Text");
    win.wait_for_button();

}
