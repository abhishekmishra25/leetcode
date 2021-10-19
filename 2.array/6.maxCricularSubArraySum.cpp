#include <bits/stdc++.h>
using namespace std;

class soluction
{
public:
    // arr: input array
    // num: size of array
    // Function to find maximum circular subarray sum.
    int circularSubarraySum(int arr[], int n)
    {

        // your code here
        int maxsum = INT_MIN;
        int minsum = INT_MAX;
        int arraysum = 0;

        int temp_maxsum = 0;
        int temp_minsum = 0;

        for (int i = 0; i < n; i++)
        {
            arraysum += arr[i];

            temp_maxsum += arr[i];
            maxsum = maxsum < temp_maxsum ? temp_maxsum : maxsum;
            temp_maxsum = temp_maxsum < 0 ? 0 : temp_maxsum;

            temp_minsum += arr[i];
            minsum = minsum > temp_minsum ? temp_minsum : minsum;
            temp_minsum = temp_minsum > 0 ? 0 : temp_minsum;
        }

        if (arraysum == minsum)
        {
            return maxsum;
        }
        else
        {
            return max(maxsum, (arraysum - minsum));
        }
    }
};