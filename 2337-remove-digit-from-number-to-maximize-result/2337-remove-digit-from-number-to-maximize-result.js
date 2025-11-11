/**
 * @param {string} number
 * @param {character} digit
 * @return {string}
 */
var removeDigit = function(number, digit) {
    let maxString=""

    for(let i=0 ; i<number.length; i++){
        if(number[i]===digit){
            let temp =number.slice(0,i) + number.slice(i+1)
            if(temp > maxString)
            {
                maxString=temp
            }
        }
    }

    return maxString
};