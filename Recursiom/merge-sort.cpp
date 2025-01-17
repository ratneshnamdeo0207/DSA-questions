//https://www.naukri.com/code360/problems/merge-sort_920442
void merge(vector<int>& a, int s, int e)
{
    int m = s + (e - s)/2;

    int l1 = m - s + 1;
    int l2 = e - m;

    int *f1 = new int[l1];
    int *f2 = new int[l2];

    int k = s;

    for(int i = 0;i < l1;i++)
    {
        f1[i] = a[k++];
    }

    k = m + 1;

    for(int i = 0;i < l2;i++)
    {
        f2[i] = a[k++];
    }

    int i1 = 0, i2 = 0;
    k = s;
    while(i1 < l1 && i2 < l2)
    {
        if(f1[i1] < f2[i2])
            a[k++] = f1[i1++];
        
        else    
             a[k++] = f2[i2++];
    }
    while(i1 < l1)
        a[k++] = f1[i1++];
    
     while(i2 < l2)
        a[k++] = f2[i2++];

    delete []f1;
    delete []f2;
}
void mergeSort(vector<int> & a, int s, int e)
{
    if(s >= e)
        return;
    int m = s + (e - s)/2;
    mergeSort(a, s, m);
    mergeSort(a, m + 1, e);
    merge(a, s, e);
}
