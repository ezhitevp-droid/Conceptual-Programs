double average(int* salary, int salarySize) {
    int min = INT_MAX;
    int max = INT_MIN;
    double sum = 0;
    for(int i = 0; i < salarySize; i++){
        sum += salary[i];
        min = salary[i] < min ? salary[i] : min;
        max = salary[i] > max ? salary[i] : max;
    }
    return (sum - min - max) / (salarySize - 2);
}