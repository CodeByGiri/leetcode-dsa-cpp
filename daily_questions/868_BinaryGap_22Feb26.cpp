class Solution {
public:
    int binaryGap(int n) {

        int prev = -1;  //index of previous 1
        int maxGap = 0;  // answer
        int index = 0;  //index of current 1

        while(n > 0) {  //check bit by bit until all bits are checked

            if(n % 2 == 1) {   //if final bit is 1(can also use N & 1)

                if(prev != -1) { //if not first occurence of 1
                    maxGap = max(maxGap, index - prev);
                }

                prev = index;   //update curren 1 and previous and move to next
            }

            n = n >> 1;  //shift by one bit
            index++;
        }

        return maxGap;
    }
};