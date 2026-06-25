class Solution {
public:
    double average(vector<int>& salary) {
        double avg = 0 ;
        int  count = 0 ;
        int n = salary.size();
        for(int i = 0 ; i < salary.size() ; i++){
            for(int j =0 ; j < salary.size()-1 ; j++){
                if(salary[j]>salary[j+1]){
                    swap(salary[j],salary[j+1]);
                }
            }
        }
        for(int l = 1 ; l < salary.size()-1 ; l++){
            avg = avg + salary[l];
            count++;
            
        }
        return avg/count;
    }
};