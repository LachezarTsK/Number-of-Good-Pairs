
public class Solution {

    private static final int[] VALUES_RANGE = {1, 100};

    public int numIdenticalPairs(int[] inputValues) {

        int numberOfGoodPairs = 0;
        int[] frequencyValues = new int[VALUES_RANGE[1] + 1];

        for (int currentValue : inputValues) {
            numberOfGoodPairs += frequencyValues[currentValue];
            ++frequencyValues[currentValue];
        }
        return numberOfGoodPairs;
    }
}
