//program to find the given element from the array using linear search

#include<stdio.h>
#include<stdlib.h>

void LinearSearch(int arr[],int iSize,int data)
{
  	int i = 0;
	int flag = 0;
	
	for(i = 0; i < iSize; i++)
	{
		if(arr[i] == data)
		{
           flag = 1;
		   break;
		}
	}
	if(flag == 1)
	{
		printf("element  present in the list at index :- %d",i);
	}
	else
	{
		printf("element not present in the list");
	}
}

int main()
{
  int iSize = 0;
  int i = 0;
  int no = 0;
  
  printf("Enter the size of the array\n");
  scanf("%d",&iSize);
  int arr[iSize];
  
  printf("Enter the elements of the array\n");
  for(i = 0; i < iSize; i++)
  {
     scanf("%d",&arr[i]);
  }
   
  printf("Entered data is\n");
  for(i = 0; i < iSize; i++)
  {
     printf("%d \n",arr[i]);
  }
  
  printf("enter the element to search\n");
  scanf("%d",&no);
  
  LinearSearch(arr,iSize,no);

return 0;
}


/*
output

D:\ProgramTopicWise\DS>gcc LinearSearch.c -o myexe

D:\ProgramTopicWise\DS>myexe
Enter the size of the array
5
Enter the elements of the array
15
5
20
35
2
Entered data is
15
5
20
35
2
enter the element to search
42
element not present in the list

D:\ProgramTopicWise\DS>myexe
Enter the size of the array
7
Enter the elements of the array
15
5
20
35
2
42
67
Entered data is
15
5
20
35
2
42
67
enter the element to search
17
element not present in the list

D:\ProgramTopicWise\DS>myexe
Enter the size of the array
8
Enter the elements of the array
15
5
20
35
2
42
67
17
Entered data is
15
5
20
35
2
42
67
17
enter the element to search
42
element present at index :-5

*/