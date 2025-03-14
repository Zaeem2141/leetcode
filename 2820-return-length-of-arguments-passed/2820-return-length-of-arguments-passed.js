/**
 * @param {...(null|boolean|number|string|Array|Object)} args
 * @return {number}
 */
var argumentsLength = function(...args) {
    let length = 0;
    args.forEach(item => (
        length+=1
    ))
    return length
};

/**
 * argumentsLength(1, 2, 3); // 3
 */