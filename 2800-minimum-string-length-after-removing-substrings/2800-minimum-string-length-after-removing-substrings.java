class Solution {
    public int minLength(String s) {
      Stack<Character> stack = new Stack<>();
      for(int i=0;i<s.length();i++){
        char chara = s.charAt(i);
        if(stack.isEmpty()){
            stack.push(chara);
            continue;
        }
        if(chara =='B' && stack.peek() =='A'){
            stack.pop();
        }
        else if(chara =='D' && stack.peek() =='C'){
            stack.pop();
        }
        else{
            stack.push(chara);
        }
      }  
    return stack.size();}
}
//abfcacbd remove cd and ad and s 