using System;

public class Solution {
    public int solution(int[] num_list) {
        int answer = 0;
        string odd="";
        string even="";
        
        foreach(var a in num_list){
            if(a%2 == 1)    //odd case
                odd += a;
            else            //even case
                even += a;
        }
        answer = int.Parse(odd) + int.Parse(even);
        
        return answer;
    }
}