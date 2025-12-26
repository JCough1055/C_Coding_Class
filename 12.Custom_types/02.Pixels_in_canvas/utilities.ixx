module;


#include <fmt/format.h>
#include <memory>

export module utilities; 

import canvas;
import pixel;

export void canvas_demo() {
    raw::Canvas canvas{10,10};
    Pixel pixel(0xFF0000,Position{5,5});
    canvas.modify_pixel(5,5,pixel);
    canvas.print();
}

export void canvas_demo_modern(){

auto canvas=std::make_unique<modern::Canvas>(10,10);
auto pixel = std::make_unique<Pixel>(0xFF0000, Position{5,5});
canvas->modify_pixel(5,5,*pixel);
//canvas->print();

fmt::println("Before Copying");
auto canvas2=std::make_unique<modern::Canvas>(10,10);
canvas2->print();
fmt::println("After copying");
*canvas2=*canvas;
canvas2->print();

/*
    modern::Canvas canvas{10,10};
    Pixel pixel(0xFF0000,Position{5,5});
    canvas.modify_pixel(5,5,pixel);
    canvas.print();
    */
}