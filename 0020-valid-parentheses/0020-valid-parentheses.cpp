class Solution {
public:
    bool isValid(string s) {
    stack<char> st;//creating a stack of char
    for(char c :s)
        {
            if(c =='(' || c =='[' || c =='{'){
                st.push(c);// if there is any opening parenthesis add into stack
            }
            else{
                if(st.empty() || //checking whether the incoming bracket is closed and 
                ( c == ')' && st.top()!= '(') || // if so checking whether the char in the top of the stack is matching
                ( c == '}' && st.top() != '{') ||
                ( c == ']' && st.top() != '[') )
                {
                return false;}//if any of the condition fails return false 
                
        st.pop();//pop every char inside the for loop 
        }
        
    
        }
    return st.empty();// after poping the stack must be empty 
    }
};