#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> prime_factors; int number;
  scanf("%d",&number);
  for(int i=2;i<=number;i++)
  {
    if(number%i==0)
    prime_factors.push_back(i);
  } 
   cout<<"Factors are : "; //printf("Factors of %d are : ",number)
   for (auto display : prime_factors)
   cout<<display<<' ';
  return 0;
}
