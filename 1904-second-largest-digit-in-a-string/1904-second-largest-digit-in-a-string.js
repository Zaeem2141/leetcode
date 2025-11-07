/**
 * @param {string} s
 * @return {number}
 */
var secondHighest = function(s) {
    const digits = s.match(/\d/g)?.map(Number)
    let largest=-1, secondLarget=-1
    if(!digits?.length) return -1
    for(const digit of digits){
       if(digit > largest){
        largest = digit
       }
    }
    for(const digit of digits){
       if(digit < largest && digit > secondLarget){
        secondLarget = digit
       }
    }
    return secondLarget
};