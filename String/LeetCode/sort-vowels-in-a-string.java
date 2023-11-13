class Solution {
    public String sortVowels(String s) {
        String tem = "";
        for(int i = 0; i < s.length(); i++){
            if(isVowel(s.charAt(i))){
                tem += s.charAt(i);
            }
        }
        char[] charArray = tem.toCharArray();
        Arrays.sort(charArray);
        String vs = new String(charArray);
        int j = 0;
        StringBuilder st = new StringBuilder(s); 
        for(int i = 0; i < s.length(); i++){
            if(isVowel(s.charAt(i))){
                st.setCharAt(i, vs.charAt(j));
                j++;
            }
        }
        String rs = st.toString();
        return rs;
    }
    public boolean isVowel(char c){
        c = Character.toLowerCase(c);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return true;
        return false;
    }
}