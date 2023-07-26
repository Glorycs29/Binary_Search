class Solution {
public:
    double findTime(vector<int>& dist, int speed){
        double time = 0.0;
        int len = dist.size();
        for(int i=0; i<len-1; i++){
            double t = (double)dist[i]/(double)speed;
            time += ceil(t);
        }
        // no rules for round-off for last value.
        time += (double)dist[len-1]/(double)speed;
        return time;
    }

    int minSpeedOnTime(vector<int>& dist, double hour) {
        int mini =1, maxi = 1e7;
        int speed=-1;
        while(mini <= maxi){
            int mid = mini  + (maxi-mini)/2;
            // fn will return the possible time, if hour is greater
            // it means we have more time, reduce the speed
            if(findTime(dist, mid) <= hour){
                speed = mid;
                maxi = mid-1;
            }else{
                mini = mid+1;
            }

        }
        return speed; 
    }
};
