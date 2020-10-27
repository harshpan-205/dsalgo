var plusOne = function(array) {
    for (let i = array.length - 1; i >= 0; i--) {
    if (array[i] === 9) {
        array[i] = 0
    } else {
        array[i] = array[i] + 1
        return array
        }
    }

    array.unshift(1)
    return array
};
