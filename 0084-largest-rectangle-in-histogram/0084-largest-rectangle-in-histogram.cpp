class Solution {
public:
    void nextsmallerElement(vector<int>& heights, vector<int>&nextAns) {
        stack<int> st;
        st.push(-1);
        for (int i = heights.size() - 1; i >= 0; i--) {
            int Element = heights[i];
            while (st.top() != -1 && heights[st.top()] >= Element) {
                st.pop();
            }
            nextAns.push_back(st.top());
            st.push(i); // index
        }
    }

    void prevsmallerElement(vector<int>& heights, vector<int>&prevAns) {
        stack<int> st;
        st.push(-1);
        for (int i = 0; i < heights.size(); i++) {
            int Element = heights[i];
            while (st.top() != -1 && heights[st.top()] >= Element) {
                st.pop();
            }
            prevAns.push_back(st.top());
            st.push(i); // index
        }
    }

    int largestRectangleArea(vector<int>& heights) {
        vector<int> nextsmallerAns;
        vector<int> prevsmallerAns;
        nextsmallerElement(heights, nextsmallerAns);
        reverse(nextsmallerAns.begin(), nextsmallerAns.end());
        for (int i = 0; i < nextsmallerAns.size(); i++) {
            if (nextsmallerAns[i] == -1) {
                nextsmallerAns[i] = nextsmallerAns.size();
            }
        }
        prevsmallerElement(heights, prevsmallerAns);

        int maxarea = INT_MIN;
        for (int i = 0; i < nextsmallerAns.size(); i++) {
            int width = nextsmallerAns[i] - prevsmallerAns[i] - 1;
            int height = heights[i];
            int curr_area = height * width;
            maxarea = max(maxarea, curr_area);
        }
        return maxarea;
    }
};