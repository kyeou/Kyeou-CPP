#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

#define INT_INPUT(msg, var) \
    std::cout << msg;     \
    std::cin >> var; 
    

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
printf("%d", N);


//std::vector<int> test = {1, 2, 3};
//mens_desire.push_back(test);

//for (int i:mens_desire[0]) {
 //   printf("%d", i);
//}

std::vector<int> input;
for (int i = 0; i < N; i++) {
    input.clear();
    int a;
    for (int j = 0; j < N; j++) {
    INT_INPUT(":", a);
    input.push_back(a);
    }
    mens_desire.push_back(input);
}



}