#include <iostream>
using namespace std;

void insertion_sort_assending (int a[],int size);//assending sorting order
void insertion_sort_descending (int a[],int size);//dessending sorting order
int main() {
int size;

cout<<"Enter the number of enteries  :\t";
cin>>size;
int a[size];
for (int i=0; i < size; i++)
cin>>a[i];
cout<<"Asending sorting order\n";
insertion_sort_assending(a,size);
cout<<"\nDescending sorting order\n";
insertion_sort_descending(a,size);
}

//funtion body
void insertion_sort_assending (int a[],int size)
{
int temp_hold,i,j;
for(i=1; i<size ; i++ )
{
temp_hold=a[i];
for(j=i-1;  j >= 0 && a[j] > temp_hold ; j-- ) 
{
a[j+1]=a[j];
}
a[j+1]=temp_hold;
}
for(int i=0;i<size;i++)
cout<<a[i]<<"\t";
}

void insertion_sort_descending  (int a[],int size)
{
int temp_hold,i,j;
for(i=1; i<size ; i++ )
{
temp_hold=a[i];
for(j=i-1;  j >= 0 && a[j] < temp_hold ; j-- ) 
{
a[j+1]=a[j];
}
a[j+1]=temp_hold;
}
for(int i=0;i<size;i++)
cout<<a[i]<<"\t";
}

