#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int a[1000];
int main()
{
	deque<int>q;
	int m,n,count=0;
	scanf("%d%d",&m,&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<n;i++)
	{
		if(find(q.begin(),q.end(),a[i])==q.end())
		{
			if(q.size()<m)
				q.push_back(a[i]);
			else
			{
				q.pop_front();
				q.push_back(a[i]);
			}
			count++;
		}
	} 
	printf("%d\n",count);
	return 0;
} 

