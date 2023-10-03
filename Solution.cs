
using System;

public class Solution
{
    static readonly int[] VALUES_RANGE = { 1, 100 };

    public int NumIdenticalPairs(int[] inputValues)
    {
        int numberOfGoodPairs = 0;
        int[] frequencyValues = new int[VALUES_RANGE[1] + 1];

        foreach (int currentValue in inputValues)
        {
            numberOfGoodPairs += frequencyValues[currentValue];
            ++frequencyValues[currentValue];
        }
        return numberOfGoodPairs;
    }
}
