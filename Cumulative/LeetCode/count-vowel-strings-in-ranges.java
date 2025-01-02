class Solution {
    public int[] vowelStrings(String[] words, int[][] queries) {
        int[] arr = new int[queries.length];
        int[] cum = new int[words.length+1];
        int i = 1;
        for(String s: words) {
            if(isVowel(s.charAt(0)) && isVowel(s.charAt(s.length()-1))) {
                cum[i] = cum[i-1] + 1;
            } else {
                cum[i] = cum[i-1];
            }
            i++;
        }

        i = 0;
        for(int[] a: queries){
            arr[i] = cum[a[1] + 1] - cum[a[0]];
            i++;
        }

        return arr;
    }

    boolean isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
}