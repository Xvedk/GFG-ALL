bool isToeplitz(vector<vector<int>>& mat) 
{
    int rows=mat.size();
    int columns=mat[0].size();
    int count=0;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            if(i+1<rows && j+1<columns && mat[i][j]==mat[i+1][j+1])   //Check the diagonal                                                                                                                    element and take                                                                                                                     care that we                                                                                                              should not go out of bounds
            {
                count++;
            }
        }
    }
    if(rows<=columns)
    {
        int total=(rows*columns)-columns-(rows-1);   //Formula
        if(count==total)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        int total=(rows*columns)-rows-(columns-1);
        if(count==total)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    
}
