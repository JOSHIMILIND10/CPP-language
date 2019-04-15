#include<iostream>
using namespace std;

template < class T > 
void
bubble_sort (T arr[], int n) 
{
  
for (int i = 0; i < n; i++)
    
    {
      
for (int j = n - 1; j > i; j--)
	
	{
	  
if (arr[j] < arr[j - 1])
	    
swap (arr[j], arr[j - 1]);
	
}
    
}

}


int
main () 
{
  
int arr[10] = { 88, 22, 66, 44, 99, 11, 33, 77, 55, 0 };
  
int n = sizeof (arr) / sizeof (arr[0]);
  
bubble_sort (arr, n);
  
cout << "SORTED ARRAY : " << endl;
  
for (int i = 0; i < n; i++)
    
    {
      
cout << arr[i] << endl;
    
} 
return 0;

}
