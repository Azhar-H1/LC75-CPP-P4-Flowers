#include <iostream>
#include <vector>

class Solution
{
public:
    bool canPlaceFlowers(std::vector<int> &flowerbed, int n)
    {
        return false;
    }
};

int main()
{
    Solution s;
    std::vector<int> v1{1, 2, 3};
    bool b1 = s.canPlaceFlowers(v1, 3);
    std::cout << "B1 value: " << b1 << std::endl;
}