#include <iostream>
#include <vector>

class Solution
{
public:
    bool canPlaceFlowers(std::vector<int> &flowerbed, int n)
    {
        int num_possible_spaces;
    }
    // search for possible spaces `p`
    // compare against `n`, if n > p -> return early false
    // otherwise iterate, compute first insertion
    // recursion?
    // create "inner" search, takes vector with pos after 1st insertion and takes n - 1
    // repeat same condition (n > p -> return early), track bool too
};

int main()
{
    Solution s;
    std::vector<int> v1{1, 2, 3};
    bool b1 = s.canPlaceFlowers(v1, 3);
    std::cout << "B1 value: " << b1 << std::endl;
}