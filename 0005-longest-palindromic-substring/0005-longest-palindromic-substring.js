/**
 * @param {string} s
 * @return {string}
 */

let checkPalindrome = (s, start, last) => {
  while (start < last) {
    if (s[start] !== s[last]) {
      return false;
    }
    start++;
    last--;
  }
  return true;
}

var longestPalindrome = function(s) {
    const length = s.length
    let start=0, maxLength=1

    for(let i=0 ; i< length ; i++){
        for(let j=i; j<length ; j++){
            if(checkPalindrome(s,i,j) && (j-i+1)>maxLength){
                start=i
                maxLength=j-i+1
            }
        }
    }

    return s.substring(start, start+maxLength)
};