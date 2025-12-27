module;

#include <fmt/format.h>

export module utilities; 

import canvas;

export void static_function_demo(){

    raw::Configuration config{10, 10, "Canvas", false};
    raw::Canvas canvas1(10, 10, config);
    raw::Canvas canvas2(20, 20, config);
    raw::Canvas canvas3(30, 30, config);
    raw::Canvas canvas4 = raw::Canvas::create_default_canvas(config);

    fmt::println("Total canvases created: {}", raw::Canvas::get_total_canvas_count());    

    fmt::println("Done.");
}