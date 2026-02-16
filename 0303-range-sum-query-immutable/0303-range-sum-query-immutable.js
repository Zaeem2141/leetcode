/**
 * @param {number[]} nums
 */
var NumArray = function(nums) {
  this.numArray = nums;
};

/** 
 * @param {number} left 
 * @param {number} right
 * @return {number}
 */
NumArray.prototype.sumRange = function(left, right) {
  return this.numArray
    .slice(left, right + 1)
    .reduce((acc, curr) => acc + curr, 0);
};

/** 
 * Your NumArray object will be instantiated and called as such:
 * var obj = new NumArray(nums)
 * var param_1 = obj.sumRange(left,right)
 */