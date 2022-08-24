#include <iostream>
#include <fstream>
using namespace std;

int main()
{    ifstream fin ("mixmilk.in");
    ofstream fout ("mixmilk.out");
    int firstBucketSize, firstBucketAmount, secondBucketSize, secondBucketAmount, thirdBucketSize, thirdBucketAmount;
    fin >> firstBucketSize >> firstBucketAmount >> secondBucketSize >> secondBucketAmount >> thirdBucketSize >> thirdBucketAmount;
    int currentBucket = 1;
    for(int i = 0; i < 100; i++){
        if(currentBucket % 3 == 1){
            if((secondBucketAmount + firstBucketAmount) <= secondBucketSize){
                secondBucketAmount += firstBucketAmount;
                firstBucketAmount = 0;
            }
            else{
                firstBucketAmount -= secondBucketSize - secondBucketAmount;
                secondBucketAmount = secondBucketSize;
            }
        }
        if(currentBucket % 3 == 2){
            if((thirdBucketAmount + secondBucketAmount) <= thirdBucketSize){
                thirdBucketAmount += secondBucketAmount;
                secondBucketAmount = 0;
            }
            else{
                secondBucketAmount -= thirdBucketSize - thirdBucketAmount;
                thirdBucketAmount = thirdBucketSize;
            }
        }
        if(currentBucket % 3 == 0){
            if((firstBucketAmount + thirdBucketAmount) <= firstBucketSize){
                firstBucketAmount += thirdBucketAmount;
                thirdBucketAmount = 0;
            }
            else{
                thirdBucketAmount -= firstBucketSize - firstBucketAmount;
                firstBucketAmount = firstBucketSize;
            }
        }
        currentBucket++;
    }
    fout << firstBucketAmount << endl << secondBucketAmount << endl << thirdBucketAmount;
    return 0;
}