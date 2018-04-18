#include <iostream>
using namespace std;

int heap[100];
int len=0;

int swap(int i, int j)
{
	int temp=0;
	temp=heap[i];
	heap[i]=heap[j];
	heap[j]=temp;                                      //""\
	delete temp;
}

int heapify(int in)
{
	int i=0,c1=0,c2=0;
	i=in;
	
	c1=2*i+1;
	c2=2*i+2;
	
	
	if(heap[c1]==0 && heap[c2]==0)
	{
		NULL;
	}
	else if( heap[c1]!=0 and heap[c2]!=0)
	{
		if(heap[c1]> heap[c2])
		{
			swap(c1,i);
		}
		else
		{
			swap(c2,i);
		}
	}
	else if(heap[c1]==0 or heap[c2]==0)
	{
		cout<<"\n heapified";
		if(heap[c1]!=0)
		{
			swap(c1,i);
		}
		else
		{
			swap(c2,i);
		}
	}
	
	
	if(--i>=0)
	{
		heapify(i);
	}
	else
	{
		return 0;
	}
	/*while(i>=0)
	{
	   	int k=0;
	   	k=i;
	   	while(heap[i]>=heap[p] && i!=0)
	{
		int temp=0;
		temp=heap[k];
		heap[k]=heap[p];
		heap[p]=temp;                                      //""\
		delete temp;
		k=p;
		p=(i-1)/2;
	}
	i--;
	}
	return 0;
	//heapsort();*/
}

int heapsort()
{
	int a=0,z=len-1;
	
	int temp=0;
		temp=heap[a];
		heap[a]=heap[z];
		heap[z]=temp;                                      //""\
		delete temp;
            if(z-->=0)
            {
            heapify(z);
            
            }
            heapsort();
            return 0;
}
int main() {
	len=6;
	int i=(len-1)/2;
	heap[0]=3;
	heap[1]=8;
	heap[2]=5;
	heap[3]=1;
	heap[4]=2;
	heap[5]=9;
	for(int i=0;i<len;i++)
	{
		cout<<heap[i]<<"\t";
	}
	cout<<"\n heapified";
	heapify(i);
	for(int i=0;i<len;i++)
	{
		cout<<heap[i]<<"\t";
	}
/*	heapsort();
	for(int i=0;i<len;i++)
	{
		cout<<heap[i]<<"\t";
	}*/
	return 0;
	
}