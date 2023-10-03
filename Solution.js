
/**
 * @param {number[]} inputValues
 * @return {number}
 */
var numIdenticalPairs = function (inputValues) {
    const VALUES_RANGE = [1, 100];
    
    let numberOfGoodPairs = 0;
    const frequencyValues = new Array(VALUES_RANGE[1] + 1).fill(0);

    for (let currentValue of inputValues) {
        numberOfGoodPairs += frequencyValues[currentValue];
        ++frequencyValues[currentValue];
    }
    return numberOfGoodPairs;
};
