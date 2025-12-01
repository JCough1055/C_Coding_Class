/*
    . Project description
        . Topic #1
        . Topic #2
*/

#include <fmt/format.h>
#include <array>

/*
double sum(double *scores, size_t count)
//double sum(double scores[],size_t count)
{
    double score_sum{};



    for (size_t i{0};i<count;++i){
        score_sum+=scores[i];}
    return score_sum;
}
*/
/* //this code calls the function of sum that cares how many elements are in the array 
double sum (const double (&scores)[6])
{
    double sum{};

    for (size_t i{};i<std::size(scores);++i){
        sum+=scores[i];}
    return sum;
}
*/
double sum (const double array[][3], size_t size)
{ 
    double sum{};
    for (size_t i{};i<size;++i){
    
        for (size_t j{};j<3;++j){
        sum+=array[i][j];
    }
    }
    return sum;

}
double sum_3d (const double array[][3][2], size_t size)
{ 
    double sum_3d{};
    for (size_t i{};i<size;++i){
    
        for (size_t j{};j<3;++j){
            for (size_t k{};k<2;++k){
        sum_3d+=array[i][j][k];
    }
    }
}
    return sum_3d;

}
int main() {
/* //this code calls the function of sum that doesnt care how many elements are in the array
double my_scores[]{10.5,34.3,4.8,6.5,7.5,8.9,};
    fmt::println("size of (scores)  : {}",sizeof(my_scores));
    fmt::println("sizeof(int*) : {}", sizeof(int*));

double result = sum(my_scores,std::sizeof(myscores));
fmt::println("The sum of my scores is {}", result);

double average{};
average= result/std::size(my_scores);
fmt::println("The average score is {}", average);
*/    
/*
//this code calls the function of sum that cares how many elements are in the array
double my_scores[]{10.5,34.3,4.8,6.5,7.5,8.9,};
    fmt::println("size of (scores)  : {}",sizeof(my_scores));
    fmt::println("sizeof(int*) : {}", sizeof(int*));

double result = sum(my_scores);
fmt::println("The sum of my scores is {}", result);

double average{};
average= result/std::size(my_scores);
fmt::println("The average score is {}", average);
*/

double weights [][3]{
    {10.0,20.0,30},
    {43.2,33.9,21.2},
    {3.2,4.5,6.8},
    { 1.0, 2.0, 3.0 },
    { 4.0, 5.0, 6.0 },
    { 7.0, 8.0, 9.0 }
};

double weights_3d [][3][2]{
    {
        {1.0,2.0}, {3.3,4.0}, {5.0,6.0}
    },
    {
        {7.5,8.0}, {9.0,10.0}, {11.0,12.0}
    },
    {
        {13.4,14.0}, {15.0,16.0}, {17.0,18.0}
    }
};

double results= sum(weights, std::size(weights));
fmt::println("The sum of weights is {}", results);

double results_3d= sum_3d(weights_3d, std::size(weights_3d));
fmt::println("The sum of 3D weights is {}", results_3d);

    return 0;
}