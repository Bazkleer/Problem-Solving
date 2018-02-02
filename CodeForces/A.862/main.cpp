#include<iostream>
#include<cstdio>
using namespace std;
int main()
{

  int n,m,cnt=0,val;
  int nums[103];
  int nums_s[103]={0};
  int i=0;
  scanf("%d",&n);
  scanf("%d",&m);

for(i=0;i< n;i++)
{
  scanf("%d",&nums[i]);
    val=nums[i];
    nums_s[val]++;
}
if(nums_s[m]==1)
cnt++;
for(i=0;i<m;i++)
{
  if(nums_s[i]==0)
  cnt++;
}

printf("%d\n",cnt );
  return 0;
}
