#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

int R, C;
std::vector<std::vector<int>> map;
std::vector<std::vector<bool>> visited;
int _puddles = 0;

void puddles(int i, int j)
{
    // cant be negative or more than the amount of rows and cols, has to be inside grid
    // if the shit is not an island, forget about it
    if (!(i < 0 || j < 0 || i >= R || j >= C || map[i][j] != 0 || visited[i][j]))
    {

        visited[i][j] = true;

        // need to mark all the adjacent indices to prevent double counting

        // up
        puddles(i - 1, j);
        // down
        puddles(i + 1, j);

        // left
        puddles(i, j - 1);
        // right
        puddles(i, j + 1);

        // if diagonal puddles counted
        // puddles(i+1, j+1);
        // puddles(i-1, j-1);
    }
}

int main()
{
    std::cin >> R >> C;
    for (int i = 0; i < R; i++)
    {
        std::vector<bool> temp;
        for (int j = 0; j < C; j++)
        {
            temp.push_back(false);
        }
        visited.push_back(temp);
    }

    for (int i = 0; i < R; i++)
    {
        std::vector<int> temp;
        for (int j = 0; j < C; j++)
        {
            int a;
            std::cin >> a;
            temp.push_back(a);
        }
        map.push_back(temp);
    }
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (map[i][j] == 0 && !(visited[i][j]))
            {
                // if we need another puddle and its not visited add another one, call the puddles function to mark adjacent indices
                puddles(i, j);
                _puddles++;
            }
        }
    }

    std::cout << std::endl << _puddles << std::endl;
}

/*

10 15
0 1 1 1 1 1 1 1 1 1 1 1 1 1 1
1 0 1 1 1 1 1 1 1 1 1 1 1 1 1
1 1 0 1 1 1 1 1 1 1 1 1 1 1 1
1 1 1 0 1 1 1 1 1 1 1 1 1 1 1
1 1 1 1 0 1 1 1 1 1 1 0 1 0 1
1 1 1 1 1 0 1 1 1 1 1 0 1 0 1
1 1 1 1 1 1 0 1 1 1 1 0 1 0 1
1 1 1 1 1 1 1 0 1 1 1 0 1 0 1
1 1 1 1 1 1 1 1 0 1 1 0 1 0 1
1 1 1 1 1 1 1 1 1 0 1 0 1 0 1

*/