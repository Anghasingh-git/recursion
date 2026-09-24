#include<iostream>
using namespace std;
void merge(int a,int b,int arr1[],int arr2[],int ans[],int i=0,int j=0,int k=0){
    if(i==a&&j==b){
        return ;
    }
        if (i == a) {
        ans[k] = arr2[j];
       return merge(a, b, arr1, arr2, ans, i, j + 1, k + 1);
        ;
    }
    else{
        ans[k]=arr1[i];
       return merge(a,b,arr1,arr2,ans,i+1,j,k+1);
    }
    if (arr1[i] <= arr2[j]) {
        ans[k] = arr1[i];
        merge(a, b, arr1, arr2, ans, i + 1, j, k + 1);
    } else {
        ans[k] = arr2[j];
        merge(a, b, arr1, arr2, ans, i, j + 1, k + 1);
    }

    }
    int main() {
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};
    int a = 4, b = 4;
    int ans[8];

    merge(a, b, arr1, arr2, ans);

    cout << "Merged Array: ";
    for (int x = 0; x < a + b; x++) {
        cout << ans[x] << " ";
    }
    cout << endl;

    return 0;
}
