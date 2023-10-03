
#include <array>
#include <vector>
using namespace std;

class Solution {
    
    static constexpr array<int, 2> VALUES_RANGE {1, 100};

public:
    int numIdenticalPairs(const vector<int>& inputValues) const {
        
        int numberOfGoodPairs = 0;
        array<int, VALUES_RANGE[1] + 1 > frequencyValues{};

        for (int currentValue : inputValues) {
            numberOfGoodPairs += frequencyValues[currentValue];
            ++frequencyValues[currentValue];
        }
        return numberOfGoodPairs;
    }
};
