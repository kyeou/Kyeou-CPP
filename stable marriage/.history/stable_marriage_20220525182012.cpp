#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

#define INT_INPUT(msg, var) \
    std::cout << msg << std::endl;     \
    std::cin >> var;
    s

#define IF_THEN(x, y) \
    if ((x))          \
    {                 \
        y;            \
    }
std::vector<std::vector<int>> mens_desire;
std::vector<std::vector<int>> womens_desire;
std::vector<int> matchings;


int N;

int main() {

//read size
INT_INPUT(":", N);



std::vector<int> test = {1, 2, 3};
mens_desire.push_back(test);

for (int i:mens_desire[0]) {
    printf("%d", i);
}



}