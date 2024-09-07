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
    r.set_color(Color::blue);
    win.set_label("Rectangle");
    win.wait_for_button();

    Polygon poly;                                     // a polygon; a Polygon is a kind of Shape
    poly.add(Point{300,200});                  // three points make a triangle
    poly.add(Point{350,100});
    poly.add(Point{400,200});
    poly.set_color(Color::red);
    win.set_label("Polygon");
    win.attach(poly);
    win.wait_for_button();
}
