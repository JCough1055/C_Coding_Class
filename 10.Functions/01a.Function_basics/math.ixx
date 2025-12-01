module;


export module math;

namespace it_1{
    export int add(int a,int b){
    return a+b;}

    export int mult(int a, int b){
        return ((++a)*(++b));
    }
}

namespace it_2{

    export int add(int a, int b);
    export int mult(int a , int b);
}