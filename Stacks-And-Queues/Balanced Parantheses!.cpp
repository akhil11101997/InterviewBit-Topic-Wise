public class Solution {
    public int solve(String A) {
        Stack<Character> st=new Stack<Character>();
        for(int i=0;i<A.length();i++){
            if(A.charAt(i)=='('){
                st.push(A.charAt(i));
            }
            else{
                if(!st.isEmpty()&&st.peek()=='('){
                    st.pop();
                }
                else
                    return 0;
            }
        }
        if(st.isEmpty())
            return 1;
        return 0;
    }
}
