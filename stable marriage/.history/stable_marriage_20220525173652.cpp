#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>


std::vector<std::vector<int>> mens_desire;
std::vector<std::vector<int>> womens_desire;
std::vector<int> matchings;



int main() {

FILE *input = fopen("input.txt", "r");
int num;
if (!input) {
    fscanf(input, "%d", &num);
    fclose(input);
}
printf("%d\n", num);


}