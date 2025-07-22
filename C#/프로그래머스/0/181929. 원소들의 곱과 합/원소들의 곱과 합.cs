using System;

public class Solution {
    public int solution(int[] num_list) {
        int answer = 0;
        int multiplyAll = 1;
        int addAll = 0;
        
        foreach(int a in num_list){
            multiplyAll *= a;
            addAll += a;
        }
        
        if (multiplyAll < addAll * addAll)
            answer = 1;
        return answer;
    }
}