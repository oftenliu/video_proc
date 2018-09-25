//获取亮度

int GetLuma(char *pData,int nLen,int nWidth,int nHeight)
{
    unsigned int nLuma = 0;
    for (int nh = 0; nh < nHeight; nh++)
    {
        for (int nw = 0; nw < nWidth; nw++)
        {
            nLuma = pData[nh*nWidth + nw];
        }
    }
    nLuma = nLuma/(nHeight*nWidth);
    return nLuma*100/255;

}