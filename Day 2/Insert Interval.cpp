class Solution {
public:
	vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
		if (intervals.size() == 0)
		{
			intervals.push_back(newInterval);
			return intervals;
		}
		vector<vector<int>> ans;
		vector<int> pos = {newInterval[0], newInterval[1]};
		int i = 0;
		// push all pair small then new-interval.
		for (; i < intervals.size(); i++) {
			if (intervals[i][1] < pos[0])
				ans.push_back(intervals[i]);
			else {
				pos[0] = min(pos[0], intervals[i][0]);
				break;
			}
		}
		// set the new interval width.
		while (i<intervals.size() and pos[1] >= intervals[i][0]) {
			pos[1] = max(pos[1], intervals[i][1]);
			++i;
		}
		// insert new-interval in answer.
		ans.push_back(pos);
		// insert all pair in answer which is greater then new-interval.
		for (; i < intervals.size(); i++) {
			ans.push_back(intervals[i]);
		}
		return ans;
	}
};
