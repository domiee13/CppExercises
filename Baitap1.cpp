#include <iostream>
using namespace std;

void arrInput(int a[],int n)
{
    int i;
    for(i = 0;i<n;i++)
        cin>>a[i];

}
void arrOutput(int a[], int n)
{
    int i;
    for(i = 0;i<n;i++ )
    cout<<a[i]<<" ";

}
void solanxuathien(int a[], int n, int &mark)
{
    int i;
    int b[200];
     for(i =0;i<200;i++)
    {
        b[i]=0;
    }
    for(i = 0;i<n;i++)
    {
        b[a[i]]++;
    }
    int max = 0;
    mark =0;
    for(i=0;i<200;i++)
    {
        if(max<b[i])
        {
            max = b[i];
            mark = i;
        }
    }
}
void sort1(int a[],int n)
{
    int i,j;
    for(i =0;i<n;i++)
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int tmp = a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
}
void sort2(int a[],int n)
{
    for(int i=0;i<n;i++)
        for(int j = i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
}
int main()
{
    int n;
    int mark;
    cout<<"So phan tu: n = ";
    cin>>n;
    int a[n];
    cout<<"Nhap lan luot cac phan tu cua mang: "<<endl;
    arrInput(a,n);
    cout<<"Mang da nhap la: "<<endl;
    arrOutput(a,n);
    solanxuathien(a,n,mark);
    // int i;
    // for(i =0;i<200;i++)
    // {
    //     b[i]=0;
    // }
    // for(i = 0;i<n;i++)
    // {
    //     b[a[i]]++;
    // }
    // max = 0;
    // int mark =0;
    // for(i=0;i<200;i++)
    // {
    //     if(max<b[i])
    //     {
    //         max = b[i];
    //         mark = i;
    //     }
    // }

    cout<<endl<<"Phan tu xuat hien nhieu nhat la: "<<mark<<endl;
    sort1(a,n);
    cout<<"Sap xep tang dan: "<<endl;
    arrOutput(a,n);
    cout<<endl<<"Sap xep giam dan: "<<endl;
    sort2(a,n);
    arrOutput(a,n);
    return 0;
}