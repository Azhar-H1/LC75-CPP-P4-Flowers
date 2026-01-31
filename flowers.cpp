#include <iostream>
#include <vector>

class Solution
{
public:
    bool canPlaceFlowers(std::vector<int> &flowerbed, int n)
    {
        int num_possible_spaces;
        int curr, next, two_next;
        bool result;
        int len = flowerbed.size();

        bool c1 = (curr == 1 && next == 0  && two_next == 0);
        bool c2 = (curr == 0 && next == 0 && two_next == 1);

        if(len < 3) return false;
        for(int i = 0; i < len; i++){

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
    
};

int main()
{
    Solution s;
    std::vector<int> v1{1, 2, 3};
    bool b1 = s.canPlaceFlowers(v1, 3);
    std::cout << "B1 value: " << b1 << std::endl;
}