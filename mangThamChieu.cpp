#include <iostream>

using namespace std;

void input(int &n,int a[]){
    cout<<"n = ";
    cin>>n;
    for(int i = 0;i<n;i++){
        cout<<"a["<<i<<"]=";
        cin>>a[i];
    }
}
void swap(int &x,int &y){
    int tmp;
    tmp = x;
    x = y;
    y = tmp;
}
void output(int n,int a[]){
    cout<<"Mang da nhap la:"<<endl;
    for(int i = 0;i<n;i++){
        cout<<a[i]<<"\t";
    }
}

void findMax(int n, int a[],int &max1,int &max2){
    int mark =0;
    max1 = a[0];
    for(int i = 0;i<n;i++){
        if(a[i]>max1){
            max1 = a[i];
            mark  = i;
        }
    }
    max2 = a[0];
    for(int i = 0;i<n;i++){
        if(i==mark) continue;
        if(a[i]>max2) max2 = a[i];
    }
}

void sort(int n,int a[]){
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(a[i]>a[j]){
                swap(a[i],a[j]);
            }
        }
    }
}

void quickSort(){

}

int binarySearch(int a[], int l,int r, int key){
    int mid;
    while(r>=1){
        mid  = (l+(r-1))/2;
        if(a[mid]==key) return mid;
        if(a[mid]<key) return binarySearch(a,mid+1,r,key);
        if(a[mid]>key) return binarySearch(a,l,mid-1,key);
    }
    return -1;
}

int main(){
    int n;
    int a[100];
    int max1,max2;
    input(n,a);
    output(n,a);
    cout<<endl;
    findMax(n,a,max1,max2);
    cout<<"max1 = "<<max1<<"\t"<<"max2 = "<<max2<<endl;
    sort(n,a);
    output(n,a);
    cout<<endl;
    cout<<binarySearch(a,0,n,5);
    return 0;
}