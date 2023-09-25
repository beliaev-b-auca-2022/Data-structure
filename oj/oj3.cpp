unsigned int realNumbers(unsigned int n) {
    int count = n;
    count -= n / 2;
    count -= n / 3;
    count -= n / 5;
    count += n / (2 * 3); 
    count += n / (3 * 5);   
    count += n / (2 * 5);  
    count -= n / (2 * 3 * 5);  
    return count;
}