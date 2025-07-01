/*
    . Pointer arithmetic
*/
module;

#include <fmt/format.h>

export module pointers_4;

namespace pointers_4
{

    export void pointer_arithmetic_navigation(){

        // Increment/ decrement pointer addresses manually
        int scores[10]{ 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
        float scores_2[4]{33.5,99.1,21.2,44.5};

        //scores++;

        int *p_score{ scores };
        float *p_scores_2{scores_2};
               fmt::println("Values in scores array (p_score pointer increment): ");
        fmt::println("Address: {},  value: {}", fmt::ptr(p_score), *(p_score));

        fmt::println("Values in scores_2 array (p_score pointer increment): ");
        fmt::println("Address: {},  value: {}", fmt::ptr(p_scores_2), *(p_scores_2));

        ++p_score;// Moves froward by sizeof(int) : 4 bytes
        fmt::println("Address: {},  value: {}", fmt::ptr(p_score), *(p_score));
        ++p_scores_2;// Moves froward by sizeof(int) : 4 bytes
        fmt::println("Address: {},  value: {}", fmt::ptr(p_scores_2), *(p_scores_2));
        ++p_score;// Moves froward by sizeof(int) : 4 bytes
        fmt::println("Address: {},  value: {}", fmt::ptr(p_score), *(p_score));
              ++p_scores_2;// Moves froward by sizeof(int) : 4 bytes
        fmt::println("Address: {},  value: {}", fmt::ptr(p_scores_2), *(p_scores_2));

        ++p_score;// Moves froward by sizeof(int) : 4 bytes
        fmt::println("Address: {},  value: {}", fmt::ptr(p_score), *(p_score));
              ++p_scores_2;// Moves froward by sizeof(int) : 4 bytes
        fmt::println("Address: {},  value: {}", fmt::ptr(p_scores_2), *(p_scores_2));

        ++p_score;// Moves froward by sizeof(int) : 4 bytes
        fmt::println("Address: {},  value: {}", fmt::ptr(p_score), *(p_score));
             

        ++p_score;// Moves froward by sizeof(int) : 4 bytes
        fmt::println("Address: {},  value: {}", fmt::ptr(p_score), *(p_score));

        ++p_score;// Moves froward by sizeof(int) : 4 bytes
        fmt::println("Address: {},  value: {}", fmt::ptr(p_score), *(p_score));

        ++p_score;// Moves froward by sizeof(int) : 4 bytes
        fmt::println("Address: {},  value: {}", fmt::ptr(p_score), *(p_score));

        ++p_score;// Moves froward by sizeof(int) : 4 bytes
        fmt::println("Address: {},  value: {}", fmt::ptr(p_score), *(p_score));

        ++p_score;// Moves froward by sizeof(int) : 4 bytes
        fmt::println("Address: {},  value: {}", fmt::ptr(p_score), *(p_score));

        //Be careful about moving beyond the bounds of the array.
        //++p_score;// Moves froward by sizeof(int) : 4 bytes

        //Explicit addition of a number of the pointer
        fmt::println( "Explicit addition of integer : " );
        p_score = scores; // Reset the pointer to the start of the array
        p_scores_2=scores_2;
        fmt::println( "scores[4] : {}" , *(p_score + 4) );  // Moves forward by 4 * sizeof(int) : 16 bytes
    fmt::println( "scores[3] : {}" , *(p_scores_2 + 2) );  // Moves forward by 4 * sizeof(int) : 16 bytes
        // Can use loops to print these things out: easier
        p_score = scores;

        fmt::println( "Pointer arithmetic on fmt::ptr(p_score)s pointer and a for loop: " );
        for ( size_t i{0} ; i < std::size(scores) ; ++i){
            fmt::println("Value[{}]: {}", i,*(p_score + i) ); // scores[i]
        }
      for ( size_t i{0} ; i < std::size(scores_2) ; ++i){
            fmt::println("Value[{}]: {}",i, *(p_scores_2 + i) ); // scores[i]
        }

        // Can also do arithmetic on the array name
        // just like any pointer.
        p_score = scores;
        p_scores_2=scores_2;

        fmt::println( "Pointer arithmetic on array name: " );
        for ( size_t i{0} ; i < std::size(scores) ; ++i){
            fmt::println("Value: {}", *(scores + i) );
        }
                fmt::println( "Pointer arithmetic on array name scores_2: " );
        for ( size_t i{0} ; i < std::size(scores_2) ; ++i){
            fmt::println("Value[{}]: {}",i, *(scores_2 + i) );
        }


    }


    export void pointer_arithmetic_distance(){

        int scores[10]{ 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };

        // Array index notation
        //     int * pointer1 {&scores[0]};
        //     int * pointer2 {&scores[8]};

        // Pointer arithmetic notation
        int *pointer1{ scores + 0 };
        int *pointer2{ scores + 8 };

        fmt::println("pointer2 - pointer1 : {}", pointer2 - pointer1);// 8
        fmt::println("pointer1 - pointer2 : {}", pointer1 - pointer2);// -8

        std::ptrdiff_t pos_diff = pointer2 - pointer1;
        std::ptrdiff_t neg_diff = pointer1 - pointer2;
        fmt::println("pointer2 - pointer1 : {}", pos_diff);// 8
        fmt::println("pointer1 - pointer2 : {}", neg_diff);// -8
        fmt::println("sizeof(std::ptrdiff_t) : {}", sizeof(std::ptrdiff_t));

    }

    export void pointer_arithmetic_compare_pointers(){

        int scores[10]{ 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };

        int *pointer1{ &scores[0] };
        int *pointer2{ &scores[8] };

        // Can also compare pointers

        // The further you go in the array, the bigger the address

        fmt::println("Comparing pointers : ");

        fmt::println("Pointer1 value is: {} ",*pointer1);
        fmt::println("Pointer2 value is: {} ",*pointer2);

        fmt::println("pointer1 > pointer2 : {}", (pointer1 > pointer2));
        fmt::println("pointer1 < pointer2 : {}", (pointer1 < pointer2));
        fmt::println("pointer1 >= pointer2 : {}", (pointer1 >= pointer2));
        fmt::println("pointer1 <= pointer2: {}", (pointer1 <= pointer2));
        fmt::println("pointer1 == pointer2 : {}", (pointer1 == pointer2));
        fmt::println("pointer1 != pointer2 : {}", (pointer1 != pointer2));

    }
    
} // namespace pointers_4
