#include <iostream>
using namespace std;
#include "string.h"
#include "mat.hpp"
#include <iostream>
#include <vector>

namespace ariel
{
    string mat(int a,int b,char c,char d){
     
     string s="";
     if(a%2==0 || b%2==0){
         return s;
     }
     int row=b;
     int median=row/2;
     int col=a;
     char s1=c;
     char s2=d;
     vector<vector<char>> arr( row, vector<char>( col ) );
   
       
       for(int j=0;j<row;j++){
          for(int j1=0;j1<col;j1++){
                if(j<=median &&  j%2==0 && j1<(col-j) && j1>=j ){
                    if(arr[j][j1]!=s1){
                    arr[j][j1]=s1;
                   
                   continue;
                    }
                        
                }  
         if(j>median &&  j%2==0 && j1<(col-(row-j-1)) && j1>=(row-j-1) ){
                   if(arr[j][j1]!=s1){
                    arr[j][j1]=s1;
                   
                   continue;
                    }
                 }
                 
                 
                
                  arr[j][j1]=s2;
            }
          // cout<<j/2 <<endl;
          //cout << endl;
           
       }
    vector<vector<char>> arr1( col, vector<char>( row ) );
  
                
    
    for (int i = 0; i < col; ++i){
      for (int j = 0; j < row; ++j) {
         arr1[i][j] = arr[j][i];
      }
    }
     
     
  
    
    for(int j=0;j<col;j++){
          for(int j1=0;j1<row;j1++){
                if(j<=median &&  j%2==0 && j1<(row-j) && j1>=j ){
                    
                    arr1[j][j1]=s1;
                   
                   continue;        
     }   
                 
                if(j>=median &&  j%2==0 && j1<(row-(col-j-1)) && j1>=(col-j-1) ){
                  
                    arr1[j][j1]=s1;
                   
                   continue;
                   
                 }
                 
                 
                  if(arr1[j][j1]!=s1){
                    arr1[j][j1]=s2;
                   
                   continue;
                    }
                  
                
            }
        }
     
   
    //cout<<"Hello World" <<endl;
   for (int i = 0; i < row; ++i){
      for (int j = 0; j < col; ++j) {
         arr[i][j] = arr1[j][i];
      }
    }
        
     
            for (int i = 0; i<row; i++){
                for (int j = 0; j<col; j++)
                    s +=arr[i][j];
                    s +="\n";
            }
       return s; 
    }
}