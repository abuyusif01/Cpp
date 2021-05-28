int reverse(int value) {
    int rev = 0;                       
    for (; value != 0; ) // looping till value              
    {
        rev *= 10;              
        rev += value % 10;          
        value /= 10;
    }
    return rev;
}
