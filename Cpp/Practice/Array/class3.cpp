#include <iostream>
#include <vector>
using namespace std;


// void printColSum(int arr[][3],int row,int col){

//     for (int i = 0; i < row; i++)
//     {
//         int sum=0;
//         for (int j = 0; j < col; j++)
//         {
//             sum= sum+arr[j][i];
//         }
//         cout<<sum<<endl;
//     }
    
// }

bool printContainsValue(int arr[][3],int row,int col,int input){
    
    for (int i = 0; i < row; i++)
    {
        
        for (int j = 0; j < col; j++)
        {
           if(input==arr[i][j]){
            return true;
           }
           
        }
      
    }
    return false;
}

int maxNum(int arr[][3],int row,int col){
    
        int max=INT_MIN; 
      for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }

    }
    return max;
}

// int transposeArr(int arr[][3],int row,int col){
//     int temp[row][col] ;
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             // cout<<arr[i][j]<<" ";
//         temp[3][3]=arr[i][j];


//         }
        
//     }
//     cout<<endl;
//     // return temp[][];
// }

int main() {

// int arr[3][3]={{1,1,3},{1,4,5},{5,8,5}};
// int row=3;
// int col=3;
// cout<<arr[0][1]<<endl;
// printColSum(arr,row,col);

// int input ;
// cout<<"Enter a Number : ";
// cin>>input;
// if(printContainsValue(arr,row,col,input)){
//     cout<<"Found"<<endl;
// }else{
//     cout<<"Not Found"<<endl;

// }

// int max=maxNum(arr,row,col);
// cout<<max<<endl;


// transposeArr(arr,row,col);

vector<vector<int> >arr (5,vector<int>(5,-8));


for (int i = 0; i < arr.size(); i++)
{

    for (int j = 0; j < arr[0].size(); j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}




return 0;
}