import java.util.Arrays;

class Solution {
    public String solution(int[] numbers, String hand) {
        String answer = "";

        int left = 10, right = 12;
        
        int[] key = new int[12];
        
        for(int i=1;i<12;i++) key[i-1] = i;
        key[9] = 10;
        key[11] = 12;
        key[10] = 11;
        for(int i=0;i<numbers.length;i++){
            //System.out.print(left + " " + right + " " + numbers[i]);
            if(numbers[i] == 1 || numbers[i] == 4 || numbers[i] == 7){
                answer += "L";
                left = numbers[i];
                System.out.println();
            }
            else if(numbers[i] == 3 || numbers[i] == 6 || numbers[i] == 9){
                answer += "R";
                right = numbers[i];
                System.out.println();
            }
            
            else if(numbers[i] == 2 || numbers[i] == 5 || numbers[i] == 8 || numbers[i] == 0){
                if(numbers[i] == 0) numbers[i] = 11;
                if(right == 0) right = 11;
                if(left == 0) left = 11;
                
                int ld = Math.abs(Arrays.binarySearch(key,numbers[i]) / 3 - Arrays.binarySearch(key,left) / 3) + 1;
                int rd = Math.abs(Arrays.binarySearch(key,numbers[i]) / 3 - Arrays.binarySearch(key,right) / 3) + 1;
                if(left == 2 || left == 5 || left == 8 || left == 11) ld -= 1;
                if(right == 2 || right == 5 || right == 8 || right == 11) rd -= 1;
                if(numbers[i] == 11) numbers[i] = 0;
                //System.out.println(" " + ld + " " + rd);
                if(ld == rd) {
                    switch(hand){
                        case "left" :
                            answer += "L";
                            left = numbers[i];
                            break;
                        case "right" :
                            answer += "R";
                            right = numbers[i];
                            break;
                    }
                }
                if(ld > rd) {
                	answer += "R";
                	right = numbers[i];
                }
                if(ld < rd) {
                	answer += "L";
                	left = numbers[i];
                }
            }
        }
        return answer;
    }
}