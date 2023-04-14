class solution
{
private:
    vector<int> nextemallerelemnt(vector<int> &arr, int n)
    {

        stack<int> s;
        s.push(-1);
        // anser array
        vector<int> ans;
        for (i = n - 1; i >= 0; i--)
        {
            int curr = arr[i];
            while (s.top() != -1 && arr[s.top()] >= curr)
            {
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }

    vector<int> prevsmallerelement(vector<int> &arr, int n){

         stack<int> s;
        s.push(-1);
        // anser array
        vector<int> ans;
        for (i = 0; i <n; i++)
        {
            int curr = arr[i];
            while (s.top() != -1 && arr[s.top()] >= curr)
            {
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }

public:
    int largestrectanglearea(vector<int> &heights)
    {
        int n = heights.size();
        vector<int> next(n);
        next = nextsmallerelement(heights, n);
        int area = INT_MIN;
        vector<int> prev(n);
        prev = prevsmallerelement(heights, n);

        for (int i = 0; i < n; i++)
        {
            int l = heights[i];
            

            if (next[i] == -1)
            {
                next[i] = n;
            }
            int b = next[i] - prev[i] - 1;

            int newarea = l * b;
            area = max(area, newarea);
        }
        return area;
    }
};