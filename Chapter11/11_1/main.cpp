#include "PPP/Graph.h"
#include "PPP/Simple_Window.h"

using namespace Graph_lib;

int main()
    //  draw two lines
{
    Application app;                                                    // start a Graphics/GUI application

    constexpr Point x {100,100};

    Simple_window win {x,600,400,"two lines"};

    Line horizontal {x,Point{200,100}};                              // make a horizontal line
    Line vertical {Point{150,50},Point{150,150}};              // make a vertical line

    win.attach(horizontal);                                                  // attach the lines to the window
    win.attach(vertical);

    win.wait_for_button();                                                   // display!
}

