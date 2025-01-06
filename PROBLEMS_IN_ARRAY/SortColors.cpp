//sort 0's,1's,and 2's
#include<iostream>
#include<vector>
using namespace std;
    void sortColors(vector<int>& nums) {
        // two pass method
        int n=nums.size();
        int no_0=0;
        int no_1=0;
        int no_2=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                no_0++;
            }
            else if(nums[i]==1)
            {
                no_1++;
            }
            else
            {
                no_2++;
            }
        }

        //fill

        for(int i=0;i<n;i++)
        {
            if(i<no_0)
            {
                nums[i]=0;
            }
            else if(i<(no_0+no_1))
            {
                nums[i]=1;
            }
            else
            {
                nums[i]=2;
            }
        }
        
    }
    int main()
    {


        return 0;
    }
