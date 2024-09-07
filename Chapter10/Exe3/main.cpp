#include "PPP/Simple_window.h"                       // get access to our window library


int main(int /*argc*/, char * /*argv*/[])
{

    Application app;                                                    // start a Graphics/GUI application

    Point tl {900,500};                                                  // to become top left corner of window

    Simple_window win {tl,600,400,"Canvas"};        // make a simple window

    Text t{Point{150,150},"A"};
    t.set_font_size(150);
    t.set_color(Color::blue);
    win.attach(t);
    win.set_label("Initials");

    Text t2{Point{300,150},"M"};
    t2.set_font_size(150);
    t2.set_color(Color::dark_green);
    win.attach(t2);
    win.set_label("Initials");
    win.wait_for_button();

}
