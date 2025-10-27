/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number}
 */
var getCommon = function(nums1, nums2) {
    let common={}
    for(nmb of nums1){
        common[nmb]=nmb
    }
    for(nmb of nums2){
        if(!!common[nmb]){
            return nmb
        }
    }
    return -1
};