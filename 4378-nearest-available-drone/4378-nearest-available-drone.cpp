class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int ans = -1;
        int best = INT_MAX;

        for (int i = 0; i < drones.size(); i++) {
            int dis = abs(drones[i][0] - target[0]) + abs(drones[i][1] - target[1]);

            if (dis <= drones[i][2] && dis < best) {
                best = dis;
                ans = i;
            }
        }

        return ans;
    }
};