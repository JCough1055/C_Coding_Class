module;

#include <cstring>
#include <fmt/format.h>

export module handling_c_strings;

namespace handling_c_strings{

    export void cstring_strlen(){

        const char message1[]{"The sky is blue, however there are storms on the horizon!"};
        fmt::println("Message1 is :{}",message1);
        const char * message2{"the sky is turning grey"};

        fmt::println("Message2 is {}", message2);

        fmt::println("The length of message1 is {}", std::strlen(message1));
         fmt::println("The length of message2 is {}", std::strlen(message2));
          fmt::println("The size of message1 is {}", sizeof(message1));
         fmt::println("The size of message2 is {}", sizeof(message2));

    }
    export void cstring_strcmp(){

        // std::strcmp - signature : int strcmp( const char *lhs, const char *rhs );
        // Returns negative value if lhs appears before rhs in lexicographical order,
        // Zero if lhs and rhs compare equal.
        // and Positive value if lhs appears after rhs in lexicographical order.
        fmt::println("");
        fmt::println( "std::strcmp : " );

        const char* string_data1{ "Blabama" };
        const char* string_data2{ "Alabama" };

        char string_data3[]{ "Blabama" };
        char string_data4[]{ "Alabama" };

        //Print out the comparison
        fmt::println( "std::strcmp ({} ,{} ) : {}",  string_data1 , string_data2, std::strcmp(string_data1, string_data2) );

        fmt::println( "std::strcmp ({}, {}): {}" , string_data3 , string_data4,  std::strcmp(string_data3, string_data4) );

        string_data1 = "Alabama";
        string_data2 = "Alabamb";

        //string_data3 = "Alabama"; // Error: can't directly assign to a static array
        //string_data4 = "Alabamb";

        //Print out the comparison
        fmt::println( "std::strcmp ({}, {} ) : {}",string_data1,  string_data2,  std::strcmp(string_data1, string_data2) );


        string_data1 = "Alacama";
        string_data2 = "Alabama";

        //Print out the comparison
        fmt::println( "std::strcmp ({}, {}) : {}", string_data1 ,  string_data2 , std::strcmp(string_data1, string_data2) );

        string_data1 = "India";
        string_data2 = "France";

        //Print out the comparison
        fmt::println( "std::strcmp ({}, {}) : {}", string_data1,  string_data2, std::strcmp(string_data1, string_data2) );

        string_data1 = "Kigali";
        string_data2 = "Kigali";

        //Print out the comparison
        fmt::println( "std::strcmp ({}, {}): {}", string_data1 , string_data2 , std::strcmp(string_data1, string_data2) );
    }
     export void cstring_strncmp(){
        // std::strncmp : int strncmp( const char *lhs, const char *rhs, std::size_t count );
        // Compares n characters in the strings
        // Returns : Negative value if lhs appears before rhs in lexicographical order.
        // Zero if lhs and rhs compare equal, or if count is zero.
        // Positive value if lhs appears after rhs in lexicographical order.
        // Print out the comparison

        const char* string_data1{ "Alabama" };
        const char* string_data2{ "Blabama" };
        size_t n{3};
        fmt::println("");
        fmt::println( "std::strncmp: " );
        fmt::println( "std::strncmp ({}, {}, {}): {}", string_data1, string_data2, n,
                    std::strncmp(string_data1,string_data2,n) );

        string_data1 = "aaaia";
        string_data2 = "aaance";

        fmt::println( "std::strncmp ({}, {}, {}): {}", string_data1, string_data2, n,
                    std::strncmp(string_data1,string_data2,n) );

        n = 5;

        fmt::println( "std::strncmp ({}, {}, {}): {}", string_data1, string_data2, n,
                    std::strncmp(string_data1,string_data2,n) );

        string_data1 = "aaaoa";
        string_data2 = "aaance";

        fmt::println( "std::strncmp ({}, {}, {}): {}", string_data1, string_data2, n,
                    std::strncmp(string_data1,string_data2,n) );
    }
}
