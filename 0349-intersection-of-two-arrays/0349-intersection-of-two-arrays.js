/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[]}
 */
var intersection = function(nums1, nums2) {
    let intersection = {}
    let commonSet = new Set();
    for(nmb of nums1){
       intersection[nmb]=nmb
    }
    for(nmb of nums2){
        if(intersection[nmb]!=null){
            commonSet?.add(nmb)
        }
    }
   return [...commonSet]
};