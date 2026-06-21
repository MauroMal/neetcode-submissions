class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<int, int>> pair;

        for (int i = 0; i < n; i++){
            pair.push_back({position[i], speed[i]});
        }

        int fleet = 1;
        sort(pair.rbegin(), pair.rend());
        double prevTime = (double)(target - pair[0].first) / (double)(pair[0].second);

        for (int i = 1; i < n; i++){
            double currTime = (double)(target - pair[i].first) / (double)(pair[i].second);
            if ( currTime > prevTime ){
                prevTime = currTime;
                fleet++;
            }
        }
        return fleet;
    }
};
