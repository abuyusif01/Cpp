void print(int value[], int colsize, int arrsize)
{
    static int icount = 0;
    int iCounter = 0;
    int iColCounter = 1;

    while (iCounter < arrsize) {
        cout << value[icount] << "\t";
        icount++;
        if ((iColCounter++) == colsize) {
            iColCounter = 1;
            cout << endl;
        }
        iCounter++;
    }
}
