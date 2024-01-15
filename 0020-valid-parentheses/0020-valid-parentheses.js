/**
 * @param {string} s
 * @return {boolean}
 */
var isValid = function(s) {
    let stack = []//init a stack
    for(let c of s){
        if(c=='(' || c == '[' || c=='{'){
            stack.push(c)//push all the opening parenthesis 
        }
        else{
            if(!stack.length || 
             (c == ')' && stack[stack.length-1]!=='(') ||
             (c == ']' && stack[stack.length-1]!=='[') ||
             (c == '}' && stack[stack.length-1]!=='{') )
                {
                return false;
        
        }
        
        stack.pop()    
        }
        
    }
    return !stack.length;
}