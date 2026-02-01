#include <iostream>
#include <vector>

class Solution
{
public:
    bool canPlaceFlowers(std::vector<int> &flowerbed, int n)
    {
        int num_possible_spaces = 0;
        int prev, curr, next;
        int len = flowerbed.size();
        bool result;

        for(int i = 0; i < len; i++){
            if(i >= 1) prev = flowerbed[--i];
            if(++i < len) next = flowerbed[++i];
            curr = flowerbed[i];

        }

    }

    // search for possible spaces `p`
    // compare against `n`, if n > p -> return early false
    // otherwise iterate, compute first insertion
    // recursion?
    // create "inner" search, takes vector with pos after 1st insertion and takes n - 1
    // repeat same condition (n > p -> return early), track bool too


    //not right, need to think of a more wholistic approach rather than hard codes
    //hint (derived) from spec indicates that pairs of two could be something to look into
    //hint: key pieces could be the number "n" param and the MIN length of the vector is 2
    
};

int main()
{
    Solution s;
    std::vector<int> v1{1, 2, 3};
    bool b1 = s.canPlaceFlowers(v1, 3);
    std::cout << "B1 value: " << b1 << std::endl;
}