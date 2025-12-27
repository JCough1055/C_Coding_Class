module;
#include<iostream>
#include<fmt/format.h>


export module utilities; 
import time;

export void print_current_time() {
  
    it_1::Time24 t1{12,30};
    fmt::println("Time : {:02}:{:02}\n",t1.get_hour(),t1.get_minute());
    t1.add_minutes(45);
    fmt::println("Time : {:02}:{:02}\n",t1.get_hour(),t1.get_minute());
    t1.add_hours(2);
     fmt::println("Time : {:02}:{:02}\n",t1.get_hour(),t1.get_minute());
     constexpr it_1::Time24 t2{23,59};
     fmt::println("Time : {:02}:{:02}\n",t2.get_hour(),t2.get_minute());
     //t2.add_minutes(2); //wont compile because of the constexpr object

     int scores[t2.get_hour()]={1,2,3,4,5,6,7,8,9,10};
  
     constexpr it_2::Time24 t3{12,30};
     fmt::println("Time : {:02}:{:02}\n",t3.get_hour(),t3.get_minute());
     

}