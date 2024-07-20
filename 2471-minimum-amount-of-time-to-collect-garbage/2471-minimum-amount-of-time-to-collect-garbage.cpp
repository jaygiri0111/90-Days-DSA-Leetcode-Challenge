class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        // P Truck
        int pickP = 0;
        int travelP = 0;
        int lasthouseP = 0;
        // M Truck
        int pickM = 0;
        int travelM = 0;
        int lasthouseM = 0;
        // G Truck
        int pickG = 0;
        int travelG = 0;
        int lasthouseG = 0;
        for (int i = 0; i < garbage.size(); i++) {
            string currentgghouse = garbage[i];
            for (int j = 0; j < currentgghouse.length(); j++) {
                char garbagetype = currentgghouse[j];
                if (garbagetype == 'P') {
                    pickP++;
                    lasthouseP = i;
                }
                if (garbagetype == 'M') {
                    pickM++;
                    lasthouseM = i;
                }
                if (garbagetype == 'G') {
                    pickG++;
                    lasthouseG = i;
                }
            }
        }
        for (int i = 0; i < lasthouseP; i++) {
            travelP = travelP + travel[i];
        }
        for (int i = 0; i < lasthouseM; i++) {
            travelM = travelM + travel[i];
        }
        for (int i = 0; i < lasthouseG; i++) {
            travelG = travelG + travel[i];
        }
        int totalpickingtime = pickP + pickM + pickG;
        int totaltravelingtime = travelP + travelM + travelG;
        int totaltime = totalpickingtime + totaltravelingtime;
        return totaltime;
    }
};