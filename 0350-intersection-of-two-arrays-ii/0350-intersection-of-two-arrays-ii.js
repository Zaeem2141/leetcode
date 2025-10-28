/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[]}
 */
var intersect = function(nums1, nums2) {
    let frequencyMap = {};
let result = [];

for (const num of nums1) {
  frequencyMap[num] = (frequencyMap[num] || 0) + 1;
}

for (const num of nums2) {
  if (frequencyMap[num] > 0) {
    result.push(num);
    frequencyMap[num]--;
  }
}

return result;
};