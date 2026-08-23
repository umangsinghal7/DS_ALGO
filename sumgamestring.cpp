class Solution {
public:
    bool sumGame(string num) {
        int isum =0;
        int iisum=0;
        int q1=0;
        int q2 =0 ;

        for(int i = 0 ; i< num.size(); i++){
            if(i<num.size()/2){
                if(num[i]=='?'){
                    q1++;
                }
                else{
                    isum+=num[i]-'0';
                }
            }
            else{
                if(num[i]=='?'){
                    q2++;
                }
                else{
                    iisum+=num[i]-'0';
                }
            }

        }
        int diff = isum-iisum;
        int qdiff = q1-q2;
        // return diff+(qdiff*9)/2 !=0;
        return 2 * diff + qdiff * 9 != 0;

    }
};
