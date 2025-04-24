module;
#include<fmt/format.h>
export module utilities; 

export unsigned char mask_bit_0{0b00000001};
export unsigned char mask_bit_1{0b00000010};
export unsigned char mask_bit_2{0b00000100};
export unsigned char mask_bit_3{0b00001000};
export unsigned char mask_bit_4{0b00010000};
export unsigned char mask_bit_5{0b00100000};
export unsigned char mask_bit_6{0b01000000};
export unsigned char mask_bit_7{0b10000000};


export void use_options_v0(bool flag0,bool flag1,bool flag2,bool flag3, bool flag4, bool flag5, bool flag6, bool flag7){
    fmt::println("Flag 0 is : {} , do something with it!",flag0);
    fmt::println("Flag 1 is : {} , do something with it!",flag1);
    fmt::println("Flag 2 is : {} , do something with it!",flag2);
    fmt::println("Flag 3 is : {} , do something with it!",flag3);
    fmt::println("Flag 4 is : {} , do something with it!",flag4);
    fmt::println("Flag 5 is : {} , do something with it!",flag5);
    fmt::println("Flag 6 is : {} , do something with it!",flag6);
    fmt::println("Flag 7 is : {} , do something with it!",flag7);
    
    }
export void use_options_v1(unsigned char flags){
    fmt::println("Flag 0 is : {} , do something with it!",((flags & mask_bit_0) >>0));
    fmt::println("Flag 1 is : {} , do something with it!",((flags & mask_bit_1) >>1));
    fmt::println("Flag 2 is : {} , do something with it!",((flags & mask_bit_2) >>2));
    fmt::println("Flag 3 is : {} , do something with it!",((flags & mask_bit_3) >>3));
    fmt::println("Flag 4 is : {} , do something with it!",((flags & mask_bit_4) >>4));
    fmt::println("Flag 5 is : {} , do something with it!",((flags & mask_bit_5) >>5));
    fmt::println("Flag 6 is : {} , do something with it!",((flags & mask_bit_6) >>6));
    fmt::println("Flag 7 is : {} , do something with it!",((flags & mask_bit_7) >>7));
    
}
export void pack_color_information(){
    
    
    unsigned int red_mask{0xFF000000};
    unsigned int green_mask{0x00FF0000};
    unsigned int blue_mask{0x0000FF00};
    unsigned int alpha_mask{0x000000FF};

    unsigned int my_color{0xAABCDE00};

    fmt::println("Red: {0:d}",((my_color & red_mask) >> 24));
    fmt::println("Green: {0:d}",((my_color & green_mask) >> 16));
    fmt::println("Blue: {0:d}",((my_color & blue_mask) >> 8));
    fmt::println("Alpha: {0:d}",((my_color & alpha_mask) >> 0));
   

}