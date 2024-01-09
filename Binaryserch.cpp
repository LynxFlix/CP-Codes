#include <stdio.h>
#include <iostream> 
using namespace std; 
void addarray(int arr[],int n){

   for(int i = 0;i<n;i++)
   {
      cin>>arr[i];
   }

}
void printarray(int arr[],int n){

   for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
   }
}
int binarysearch(int arr[],int size,int key)
{
     int left,right,mid;
     left=0;
     right=size-1;
     mid=(right+left)/2;

     while(left<=right){
      if(key==arr[mid]){
         cout<<"key found at index:- "<<mid;
         return 0;
      }
      else if(key<arr[mid]){
         right = mid-1;
      }
      else if(key>arr[mid]){
      left = mid +1;
      }
      mid=(right+left)/2;
     }
     cout<<"Key not found";
}
int main() {
     
     int t,key;
     cin>>t;
     int arr[t];
     addarray(arr,t);
     cin>>key;

     binarysearch(arr,t,key);
     
}
   

  
