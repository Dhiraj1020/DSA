#include "BubbleSort.hpp"

void CBubbleSort::Sort(int *t_ArrayToBeSort,int t_iSize)
{
    int iTemp = 0;
    int iFirstItr,iSecItr;
    for(iFirstItr = 0; iFirstItr < t_iSize-1 ; ++iFirstItr)
    {
         for(iSecItr = 0; iSecItr < t_iSize-iFirstItr-1 ; ++iSecItr)
         {
            if(t_ArrayToBeSort[iSecItr] > t_ArrayToBeSort[iSecItr+1])
            {
                    iTemp = t_ArrayToBeSort[iSecItr+1];
                    t_ArrayToBeSort[iSecItr+1] = t_ArrayToBeSort[iSecItr];
                    t_ArrayToBeSort[iSecItr] = iTemp;
            }
         }
    }
}

void CBubbleSort::Sort(std::vector<int> &t_ArrayToBeSort)
{
    int iLength = t_ArrayToBeSort.size();
    int itemp = 0;

    for(int i = 0 ; i < iLength -1; ++i)
    {
        for(int j = 0 ; j < iLength - i - 1 ; ++j)
        {
            if(t_ArrayToBeSort.at(j) > t_ArrayToBeSort.at(j+1))
            {
                itemp = t_ArrayToBeSort.at(j);
                t_ArrayToBeSort.at(j) = t_ArrayToBeSort.at(j+1);
                t_ArrayToBeSort.at(j+1) = itemp;
            }
        }
    }
}