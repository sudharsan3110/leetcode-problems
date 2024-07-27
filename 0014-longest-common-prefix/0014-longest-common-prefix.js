/**
 * @param {string[]} strs
 * @return {string}
 */
var longestCommonPrefix = function (strs) {
    strs.sort();
    var ans = ""
    if (strs[0] == "") {
        return ans;
    }
    else {
        for (let i = 0; i < strs[0].length; i++) {
            if(strs[0][0]!=strs[strs.length-1][0]){
                break;
            }
            if (strs[0][i] === strs[strs.length - 1][i]) {
                ans += strs[0][i];

            }
        }
    }
    return ans;
};