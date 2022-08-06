package arraysChallenges;

public class FindPeak {
    public static void main(String[] args) {
        int[] arr = {5,7,4,3,7,6,1,4,6,8,5,7,5,3,5,2,4};
        System.out.println(findPeak(arr,arr.length));
    }
    public static int findPeak(int[] arr, int n){
        //credit: aaron
        if(n == 1){
            return 0;
        }
        for(int i = 0; i < n; i++){
            if(i - 1 >= 0 && i + 1 < n && arr[i - 1] < arr[i] && arr[i] > arr[i + 1]){
                return i;
            }
            else if(i == 0 && arr[i] > arr[i + 1]){
                return i;
            }
            else if(i == n - 1 && arr[i] > arr[i - 1]){
                return i;
            }
        }
        return 0;
    }
}