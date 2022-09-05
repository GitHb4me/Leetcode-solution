#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> prime_factors; int number;
  scanf("%d",&number);  // latest compiler works even if  ' & '  not placed before variable in scanf and if by mistake  ' & ' is placed before variable in printf
  for(int i=2;i<=number;i++)
  {
    if(number%i==0)
    prime_factors.push_back(i);
  } 
   auto last2nd_element = prime_factors[prime_factors.size()-1];  // add  ' and '  before last second element 
   printf("Factors of %d are : 1 ",number); // cout<<"Factors are : ";
   if(prime_factors.size()==1)
   {  cout<<" and "<<prime_factors[0]<<" only";  return 0;  }
   else
   {
   for (auto display : prime_factors) // also   for(auto &display : prime_factors)  works well even  ' & '  is not used
   {
     if(display==last2nd_element)
     cout<<" and ";
   cout<<display<<' ';
   } }
  return 0;
}
