//program to find the given element from the array using Binary search


#include<stdio.h>
#include<stdlib.h>

int BinarySearch(int arr[],int iSize,int data)
{
	 int l = 0;
	 int r = iSize-1;
	 int iMid = l + r / 2;
	 
	 while(l < r)              //at list have two elements and if l is greter than the r it means element not present in the list
	 {
		if(data == arr[iMid])
             return iMid;
		else if(data < arr[iMid])
			r = iMid-1;
		else
			l = iMid+1;
	 }
	   return -1;
}

int main()
{
  int iSize = 0;
  int i = 0;
  int no = 0;
  int iRet = 0;
  
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
  
  iRet = BinarySearch(arr,iSize,no);
  
  if(iRet == -1)
  {
	  printf("element not found\n");
  }
  else
  {
	  printf("element found at index :- %d",iRet);
  }

return 0;
}

/*

output

Enter the size of the array
5
Enter the elements of the array
12
4
78
1
2
Entered data is
12
4
78
1
2
enter the element to search
78
element found at index :- 2

*/