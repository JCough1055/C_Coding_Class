module;

#include <fmt/format.h>
#include <string>
#include <string_view>

export module string_views;

namespace string_views{

    export void string_views_the_problem(){

    std::string string1{"Hello"};
    std::string string2{string1};
    std::string string3{string1};

    fmt::println("The value of string1 is {} .The address of string1 is {}", string1,fmt::ptr(&string1));
    fmt::println("The value of string2 is {} .The address of string2 is {}", string2,fmt::ptr(&string2));
    fmt::println("The value of string3 is {} .The address of string3 is {}", string3, fmt::ptr(&string3));

    }

    export void the_solution(){

        std::string_view sv1{"Hellooooooooooooooooooooooooooooooooooooooooooooooooo"};
        std::string_view sv2{sv1};
        std::string_view sv3{sv1};
        fmt::println("The value of sv1 is {} .The address of string1 is {}", sv1,fmt::ptr(&sv1));
    fmt::println("The value of string2 is {} .The address of string2 is {}", sv2,fmt::ptr(&sv2));
    fmt::println("The value of string3 is {} .The address of string3 is {}", sv3, fmt::ptr(&sv3));
    }


export void string_view_construction(){
        // Constructing string_view's
        std::string string3 {"Regular std::string"};
        const char * c_string {"Regular C-String"};
        const char char_array[]{"Char array"}; // Null terminated
        char char_array2[]{'H','u','g','e'}; // Non null terminated char array

        std::string_view sv3{"String litteral"};
        std::string_view sv4{string3};
        std::string_view sv5{c_string};
        std::string_view sv6{char_array};
        std::string_view sv7{sv3};	//From another string view
        std::string_view sv8{char_array2,std::size(char_array2)};//Non null terminated char array
                                                                //Need to pass in size info
        fmt::println( "sv3: {}" , sv3 );
        fmt::println( "sv4: {}" , sv4 );
        fmt::println( "sv5: {}" , sv5 );
        fmt::println( "sv6: {}" , sv6 );
        fmt::println( "sv7 (constructed from other string_view): {}" , sv7 );
        fmt::println( "Non null terminated string with std::string_view: {}" , sv8 );
    }


    export void std_string_view_visualizes_original_string(){
        // Changes to the original string are reflected in the string_view
        char word [] {"Dog"};
        std::string_view sv9{word};

        fmt::println( "word : {}" , sv9 );

        fmt::println( "Changing data: " );
        //Change the data
         word[0] = 'C';
          word[1] = 'a';
        word[2] = 't';

        fmt::println( "word : {}" , sv9 );
    }

    export void std_string_view_change_view_window(){

        // Changing the view window : SHRINKING
        const char * c_string1 { "The animals have left the region" };
        std::string_view sv10{c_string1};

        fmt::println( "sv10 : {}" , sv10 );

        sv10.remove_prefix(4); // Removes "The"

        //Prints : animals have left the region
        fmt::println( "View with removed prefix(4) : {}" , sv10 );

        sv10.remove_suffix(15); // Removes "the region"

        //Prints : animals have left
        fmt::println( "View with removed suffix(10) : {}" , sv10 );

        //Changing the view doesn't change the viewed string :
        fmt::println( "Original sv10 viewed string : {}" , c_string1 );
    }

    export void std_string_view_lifetime(){
        // String_view shouldn't outlive whatever it is viewing
        std::string_view sv11;

        {
            std::string string4{"Hello there"};
            sv11 = string4;
            fmt::println( "INSIDE --- sv11 is viewing: {}" , sv11 );
            //string4 goes out of scope here.
        }
        fmt::println( "OUTSIDE --- sv11 is viewing: {}" , sv11 );
    
    }


    export void std_string_view_data(){
        // data
        /*
        std::string_view sv13 {"Ticket"};
        fmt::println( "sv13: {}" , sv13 );
        fmt::println( "std::strlen(sv13.data()): {}" , std::strlen(sv13.data()) );
        fmt::println( "data: {}", sv13.data());
        */


        // Don't use data() on a modified view (through remove_prefix or remove_suffix)
        std::string_view sv14 {"Ticket"};
        sv14.remove_prefix(2);
        sv14.remove_suffix(2);

        //Length info is lost when you modify the view.
        //Using the data method is dangerous at this point.
        fmt::println( "{} has {}  characters(s) " ,sv14,  std::strlen(sv14.data()));
        fmt::println( "sv14.data() is {}" , sv14.data() );
        fmt::println( "sv14 is {}" , sv14 );
    }


    export void std_string_view_behaviors(){
        // std::string behaviors(methods) are available in string_view
        std::string_view sv16{ "There is a huge forest in that area" };

        fmt::println("sv16 is {} characters long.", sv16.length());
        fmt::println("The front character is: {}", sv16.front());
        fmt::println("The back character is: {}", sv16.back());
        fmt::println("Substring: {}", sv16.substr(0, 22));
    }

}