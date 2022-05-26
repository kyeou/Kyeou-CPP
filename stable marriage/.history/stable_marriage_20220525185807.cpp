#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

#define INT_INPUT(msg, var) \
    std::cout << msg;       \
    std::cin >> var;

#define IF_THEN(x, y) \
    if ((x))          \
    {                 \
        y;            \
    }
std::vector<std::vector<int>> mens_desire;
std::vector<std::vector<int>> womens_desire;
std::vector<int> matchings;

int N, not_stable;


bool checkUnstable(int currManID, int currWomanID) {

        if (currWomanID == matchings[currManID - 1]) {
            return false;
        }
        //System.out.println("currManID, currWomanID == " + currManID + " " + currWomanID);
        int pref_of_His_Match = -1, pref_of_Her_Match = -1, pref_of_currMan = -1, pref_of_currWoman = -1;
        int herCurrMatch = -1;

        for (int i = 0; i < N; i++) {
            if (matchings[currManID - 1] == mens_desire[currManID - 1][i]) {
                pref_of_His_Match = i;
            }
        }

        for (int i = 0; i < N; i++) {
            if (matchings[i] == currWomanID) {
                herCurrMatch = matchings[i];
                // System.out.println("Matchings[i] " + matchings[i] + " i=>" + i);
            }
        }

        for (int i = 0; i < N; i++) {
            // System.out.println("her Desire " + womensDesire[currWomanID - 1][i]);
            if (herCurrMatch == womens_desire[currWomanID - 1][i]) {
                pref_of_Her_Match = i;
            }
        }

        for (int i = 0; i < N; i++) {
            if (currManID == womensDesire[currWomanID - 1][i]) {
                pref_of_currMan = i;
            }
        }

        for (int i = 0; i < N; i++) {
            if (currWomanID == mensDesire[currManID - 1][i]) {
                pref_of_currWoman = i;
            }
        }
       // System.out.println( pref_of_currWoman + " " + pref_of_His_Match + " " + pref_of_currMan + " " + pref_of_Her_Match + " ");
        // System.out.println(pref_of_Her_Match);
        return ((pref_of_currWoman < pref_of_His_Match) && (pref_of_currMan < pref_of_Her_Match));

    }// end function


int main()
{

    // read size
    INT_INPUT(":", N);
    //printf("%d", N);

    // std::vector<int> test = {1, 2, 3};
    // mens_desire.push_back(test);

    // for (int i:mens_desire[0]) {
    //    printf("%d", i);
    //}

    std::vector<int> input;
    for (int i = 0; i < N; i++)
    {
        input.clear();
        int a;
        for (int j = 0; j < N; j++)
        {
            std::cin >> a;
            input.push_back(a);
        }
        mens_desire.push_back(input);
    }

     for (int i = 0; i < N; i++)
    {
        input.clear();
        int a;
        for (int j = 0; j < N; j++)
        {
            std::cin >> a;
            input.push_back(a);
        }
        womens_desire.push_back(input);
    }

    for (int i = 0; i < N; i++)
    {
        int a, b;
        std::cin >> a >> b;
         matchings.push_back(b);
       
    }






/*
    printf("--%d\n", N);
    for (std::vector<int> j : mens_desire)
    {
        for (int i : j)
        {
            printf(" %d ", i);
        }
        printf("\n");
    }
    for (std::vector<int> j : womens_desire)
    {
        for (int i : j)
        {
            printf(" %d ", i);
        }
        printf("\n");
    }

    
        for (int i : matchings)
        {
            printf("--%d ", i);
        }
        
    
    printf("\n");
    */
}