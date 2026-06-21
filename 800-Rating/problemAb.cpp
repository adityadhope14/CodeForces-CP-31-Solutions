#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int minLights(vector<int>& lights) {
        int n = lights.size();
        
        // Use a difference array of size n + 1 (the +1 prevents out-of-bounds when marking the end)
        vector<int> diff(n + 1, 0);
        
        // ---------------------------------------------------------
        // STEP 1: Mark the START and END of the light coverages
        // ---------------------------------------------------------
        for (int i = 0; i < n; i++) {
            if (lights[i] > 0) {
                int power = lights[i];
                int left_area = max(0, i - power);
                int right_area = min(n - 1, i + power);
                
                // Put a +1 where the light begins
                diff[left_area]++;
                // Put a -1 one step AFTER the light ends
                diff[right_area + 1]--; 
            }
        }
        
        // ---------------------------------------------------------
        // STEP 2: Sweep the array to build the final is_on array
        // ---------------------------------------------------------
        vector<bool> is_on(n, false);
        int current_light = 0;
        
        for (int i = 0; i < n; i++) {
            current_light += diff[i]; // Add the markers as we walk
            if (current_light > 0) {
                is_on[i] = true;
            }
        }
        
        // ---------------------------------------------------------
        // STEP 3: Walk the road and place new bulbs greedily
        // (Your original Step 2 remains exactly the same!)
        // ---------------------------------------------------------
        int bulbs_req = 0;
        int i = 0;
        
        while (i < n) {
            if (!is_on[i]) {
                bulbs_req++;
                i += 3; // Skip the next two positions since our new bulb covers them
            } else {
                i++;
            }
        }
        
        return bulbs_req;
    }
};