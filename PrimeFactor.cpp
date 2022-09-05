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
   auto last2nd_element = prime_factors[prime_factors.size()-1];  // add  ' and '  before last second element 
   cout<<"Factors are : "; //printf("Factors of %d are : ",number)
   for (auto display : prime_factors)
   {
     if(display==last2nd_element)
     cout<<" and ";
   cout<<display<<' ';
   }
  return 0;
}
