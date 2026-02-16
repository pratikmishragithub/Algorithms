int n;
    cout<<"enter the lenth of swastik :"<<endl;
    cin>>n;
    int mid = ( n-1) / 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i == mid || j == mid) || (i < mid && j == 0) || (i > mid && j == n - 1) || (j < mid && i == n - 1) || (j > mid && i == 0))
            {
                cout<<"*";
                cout<<" ";
                
            }
            else{
                cout<<"  ";
            }

                
        }
        
     cout<<endl;
    }
    return 0;
}