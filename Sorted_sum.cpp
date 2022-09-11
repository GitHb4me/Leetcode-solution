
include<bits/stdc++.h>
using namespace std;
int loop(vector<int> &p,int flag)
{   
        int result=0;
        if(flag==0)
        {
         for(int i=0;i<p.size();i++)
              p[i]=p[i]*i; 
              return 0;
        }
        else if(flag==1) 
        {
          for(int i=0;i<p.size;i++)    
              result+=p[i];
              return result;
        }
        else
        {
            for(int i=0;i<p.size;i++)
            {
               sum.push_back(i);   // push_back or embrace_back both can be used
               sort(sum.begin(),sum.end());  // sort function sort the array  std::sort
               loop(sum,0);
               result.push_back(accumulate(sum.begin(), sum.end(),0)); // accumulate function sums up all elements in array vector::accumulate  while   0    is the initial value of temporary variable sum
            }
        }
} 

int main(vector<int> a) {  // change main to sorted sum

    vector<int> result;
    vector<int> sum;
    long m = 1000000007; 
    loop(a,2);
    return loop(result,1)%m;

}