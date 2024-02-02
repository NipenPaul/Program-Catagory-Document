package Java.leetcode;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class SequentialDigits {

    public List<Integer> sequentialDigits(int low, int high) {
        List<Integer> sequence = new ArrayList<>();
        for(int i = 1; i <= 9; i++){
            int num = i;
            for(int j = i + 1; j <= 9; j++){
                num = num * 10 + j;
                if(low <= num && high >= num){
                    sequence.add(num);
                }
            }
        }
        Collections.sort(sequence);
        return sequence;
    }
}
