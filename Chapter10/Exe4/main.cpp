#include "PPP/Simple_window.h"                       // get access to our window library


int main(int /*argc*/, char * /*argv*/[])
{

    Application app;                                                    // start a Graphics/GUI application

    Point tl {900,500};                                                  // to become top left corner of window

    Simple_window win {tl,600,400,"Canvas"};        // make a simple window

    Polygon poly;
    poly.add(Point{100,50});
    poly.add(Point{150,50});
    poly.add(Point{150,100});
    poly.add(Point{100,100});
    poly.set_fill_color(Color::red);
    win.attach(poly);
    win.set_label("Square");
    win.wait_for_button();

    Polygon poly1;
    poly1.add(Point{150,50});
    poly1.add(Point{200,50});
    poly1.add(Point{200,100});
    poly1.add(Point{150,100});
    poly1.set_fill_color(Color::white);
    win.attach(poly1);
    win.set_label("Square1");
    win.wait_for_button();

    Polygon poly2;
    poly2.add(Point{200,50});
    poly2.add(Point{250,50});
    poly2.add(Point{250,100});
    poly2.add(Point{200,100});
    poly2.set_fill_color(Color::red);
    win.attach(poly2);
    win.set_label("Square2");
    win.wait_for_button();

    Polygon poly3;
    poly3.add(Point{100,100});
    poly3.add(Point{150,100});
    poly3.add(Point{150,150});
    poly3.add(Point{100,150});
    poly3.set_fill_color(Color::white);
    win.attach(poly3);
    win.set_label("Square3");
    win.wait_for_button();

    Polygon poly4;
    poly4.add(Point{100,150});
    poly4.add(Point{150,150});
    poly4.add(Point{150,200});
    poly4.add(Point{100,200});
    poly4.set_fill_color(Color::red);
    win.attach(poly4);
    win.set_label("Square4");
    win.wait_for_button();

    Polygon poly5;
    poly5.add(Point{150,100});
    poly5.add(Point{200,100});
    poly5.add(Point{200,150});
    poly5.add(Point{150,150});
    poly5.set_fill_color(Color::red);
    win.attach(poly5);
    win.set_label("Square5");
    win.wait_for_button();

    Polygon poly6;
    poly6.add(Point{200,100});
    poly6.add(Point{250,100});
    poly6.add(Point{250,150});
    poly6.add(Point{200,150});
    poly6.set_fill_color(Color::white);
    win.attach(poly6);
    win.set_label("Square6");
    win.wait_for_button();

    Polygon poly7;
    poly7.add(Point{150,150});
    poly7.add(Point{200,150});
    poly7.add(Point{200,200});
    poly7.add(Point{150,200});
    poly7.set_fill_color(Color::white);
    win.attach(poly7);
    win.set_label("Square7");
    win.wait_for_button();

    Polygon poly8;
    poly8.add(Point{200,150});
    poly8.add(Point{250,150});
    poly8.add(Point{250,200});
    poly8.add(Point{200,200});
    poly8.set_fill_color(Color::red);
    win.attach(poly8);
    win.set_label("Square8");
    win.wait_for_button();

}

